% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/PMR_individual_VC_mixchisquare.R
\name{PMR_individual_VC_mixchisquare}
\alias{PMR_individual_VC_mixchisquare}
\title{The main function for PMR model with individual-level data under polygenic pleiotropy effect assumption (variance component model),with mixed chisquare approximation for the test #' statistics}
\usage{
PMR_individual_VC_mixchisquare(yin, zin, x1in, x2in,
  max_iterin = max_iterin)
}
\arguments{
\item{yin}{standarized exposure vector (e.g. gene expression in TWAS)}

\item{zin}{standardized complex trait vector.}

\item{x1in}{standardized cis-genotype matrix in eQTL data.}

\item{x2in}{standardized cis-genotype matrix in GWAS data.}

\item{max_iterin}{The maximum iteration, which can be determined by users.}
}
\value{
the p value for the causal effect test
}
\description{
PMR_individual_VC_mixchisquare applies an EM argorithm to obtain the estimates of the variance component parameters and conduct a score test for causal effect test, with 
mixed chisquare approximation for the test statistics often when the sample size is small
}
