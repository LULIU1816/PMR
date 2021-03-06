// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// Estimate_VC_1
Rcpp::List Estimate_VC_1(const arma::vec y, const arma::mat w, const arma::mat x, const int maxIter);
RcppExport SEXP _PMR_Estimate_VC_1(SEXP ySEXP, SEXP wSEXP, SEXP xSEXP, SEXP maxIterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int >::type maxIter(maxIterSEXP);
    rcpp_result_gen = Rcpp::wrap(Estimate_VC_1(y, w, x, maxIter));
    return rcpp_result_gen;
END_RCPP
}
// Estimate_VC_2
Rcpp::List Estimate_VC_2(const arma::vec y, const arma::mat w, const arma::mat x, const int maxIter);
RcppExport SEXP _PMR_Estimate_VC_2(SEXP ySEXP, SEXP wSEXP, SEXP xSEXP, SEXP maxIterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int >::type maxIter(maxIterSEXP);
    rcpp_result_gen = Rcpp::wrap(Estimate_VC_2(y, w, x, maxIter));
    return rcpp_result_gen;
END_RCPP
}
// PMR_individual_Egger
SEXP PMR_individual_Egger(SEXP yin, SEXP zin, SEXP x1in, SEXP x2in, SEXP gammain, SEXP alphain, SEXP max_iterin, SEXP epsin);
RcppExport SEXP _PMR_PMR_individual_Egger(SEXP yinSEXP, SEXP zinSEXP, SEXP x1inSEXP, SEXP x2inSEXP, SEXP gammainSEXP, SEXP alphainSEXP, SEXP max_iterinSEXP, SEXP epsinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type yin(yinSEXP);
    Rcpp::traits::input_parameter< SEXP >::type zin(zinSEXP);
    Rcpp::traits::input_parameter< SEXP >::type x1in(x1inSEXP);
    Rcpp::traits::input_parameter< SEXP >::type x2in(x2inSEXP);
    Rcpp::traits::input_parameter< SEXP >::type gammain(gammainSEXP);
    Rcpp::traits::input_parameter< SEXP >::type alphain(alphainSEXP);
    Rcpp::traits::input_parameter< SEXP >::type max_iterin(max_iterinSEXP);
    Rcpp::traits::input_parameter< SEXP >::type epsin(epsinSEXP);
    rcpp_result_gen = Rcpp::wrap(PMR_individual_Egger(yin, zin, x1in, x2in, gammain, alphain, max_iterin, epsin));
    return rcpp_result_gen;
END_RCPP
}
// PMR_summary_Egger_CPP
SEXP PMR_summary_Egger_CPP(SEXP betaxin, SEXP betayin, SEXP Sigma1sin, SEXP Sigma2sin, SEXP samplen1, SEXP samplen2, SEXP gammain, SEXP alphain, SEXP max_iterin, SEXP epsin);
RcppExport SEXP _PMR_PMR_summary_Egger_CPP(SEXP betaxinSEXP, SEXP betayinSEXP, SEXP Sigma1sinSEXP, SEXP Sigma2sinSEXP, SEXP samplen1SEXP, SEXP samplen2SEXP, SEXP gammainSEXP, SEXP alphainSEXP, SEXP max_iterinSEXP, SEXP epsinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type betaxin(betaxinSEXP);
    Rcpp::traits::input_parameter< SEXP >::type betayin(betayinSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Sigma1sin(Sigma1sinSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Sigma2sin(Sigma2sinSEXP);
    Rcpp::traits::input_parameter< SEXP >::type samplen1(samplen1SEXP);
    Rcpp::traits::input_parameter< SEXP >::type samplen2(samplen2SEXP);
    Rcpp::traits::input_parameter< SEXP >::type gammain(gammainSEXP);
    Rcpp::traits::input_parameter< SEXP >::type alphain(alphainSEXP);
    Rcpp::traits::input_parameter< SEXP >::type max_iterin(max_iterinSEXP);
    Rcpp::traits::input_parameter< SEXP >::type epsin(epsinSEXP);
    rcpp_result_gen = Rcpp::wrap(PMR_summary_Egger_CPP(betaxin, betayin, Sigma1sin, Sigma2sin, samplen1, samplen2, gammain, alphain, max_iterin, epsin));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_PMR_Estimate_VC_1", (DL_FUNC) &_PMR_Estimate_VC_1, 4},
    {"_PMR_Estimate_VC_2", (DL_FUNC) &_PMR_Estimate_VC_2, 4},
    {"_PMR_PMR_individual_Egger", (DL_FUNC) &_PMR_PMR_individual_Egger, 8},
    {"_PMR_PMR_summary_Egger_CPP", (DL_FUNC) &_PMR_PMR_summary_Egger_CPP, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_PMR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
