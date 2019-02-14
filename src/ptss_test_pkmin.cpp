#include <iostream>
#include <vector>
#include <set>
#include <iterator>
#include <math.h>
#include <chrono>
#include <exception>
#include <queue>
#include <boost/math/distributions/normal.hpp>
#include <sys/time.h>
#include "ptss_dse.hpp"
#include "ptss_config.hpp"
#include "ptss_pkmin.hpp"

using namespace std;

int main(int argc, char **argv) {
    if (argc < 2) {
        cout << "Enter The deadline" << endl;
        exit(EXIT_FAILURE);
    }
    int deadline = atoi(argv[1]);
    struct timeval t1, t2;
    gettimeofday(&t1,NULL);
    ptss_DSE_hrt obj(deadline);
    cout << "Search Space Created "<<endl;
    // double pkp_opt = obj.oracle();
    // alloc2_t dggd;
    // double pkp_opt2 = ptss_pkmin(obj.get_init_point(),deadline,&dggd);
    gettimeofday(&t2,NULL);
    double elapsed  = t2.tv_sec-t1.tv_sec;

    /* Percent Difference */
    // double diff = (pkp_opt2-pkp_opt)*100/pkp_opt;
    // cout << "deadline:" << deadline << ",diff:"<<diff<<",elapsed time:"<<elapsed <<"\n\n";
    // cout << elapsed << "us\n";
}