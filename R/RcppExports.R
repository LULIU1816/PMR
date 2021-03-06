# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

Estimate_VC_1 <- function(y, w, x, maxIter) {
    .Call(`_PMR_Estimate_VC_1`, y, w, x, maxIter)
}

Estimate_VC_2 <- function(y, w, x, maxIter) {
    .Call(`_PMR_Estimate_VC_2`, y, w, x, maxIter)
}

PMR_individual_Egger <- function(yin, zin, x1in, x2in, gammain, alphain, max_iterin, epsin) {
    .Call(`_PMR_PMR_individual_Egger`, yin, zin, x1in, x2in, gammain, alphain, max_iterin, epsin)
}

PMR_summary_Egger_CPP <- function(betaxin, betayin, Sigma1sin, Sigma2sin, samplen1, samplen2, gammain, alphain, max_iterin, epsin) {
    .Call(`_PMR_PMR_summary_Egger_CPP`, betaxin, betayin, Sigma1sin, Sigma2sin, samplen1, samplen2, gammain, alphain, max_iterin, epsin)
}

