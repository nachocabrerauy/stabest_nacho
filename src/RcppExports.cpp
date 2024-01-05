// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// stabest2_internal
List stabest2_internal(Rcpp::NumericVector Vc, Rcpp::NumericVector Vs, arma::sp_mat Xc, arma::sp_mat XcXcInv, Rcpp::NumericMatrix betaR, Rcpp::LogicalVector VacantSeats, Rcpp::IntegerVector nObs_college, Rcpp::IntegerVector ID_eqCollege, Rcpp::LogicalVector match, Rcpp::IntegerVector sid, Rcpp::IntegerVector ID_cBetter, Rcpp::IntegerVector ID_cWorse, Rcpp::IntegerVector ID_sBetter, Rcpp::IntegerVector ID_sWorse, Rcpp::IntegerVector ID_nextCollege, int niter, int thin, int demean);
RcppExport SEXP _stabest2_stabest2_internal(SEXP VcSEXP, SEXP VsSEXP, SEXP XcSEXP, SEXP XcXcInvSEXP, SEXP betaRSEXP, SEXP VacantSeatsSEXP, SEXP nObs_collegeSEXP, SEXP ID_eqCollegeSEXP, SEXP matchSEXP, SEXP sidSEXP, SEXP ID_cBetterSEXP, SEXP ID_cWorseSEXP, SEXP ID_sBetterSEXP, SEXP ID_sWorseSEXP, SEXP ID_nextCollegeSEXP, SEXP niterSEXP, SEXP thinSEXP, SEXP demeanSEXP) {
  BEGIN_RCPP
  Rcpp::RObject rcpp_result_gen;
  Rcpp::RNGScope rcpp_rngScope_gen;
  Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Vc(VcSEXP);
  Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Vs(VsSEXP);
  Rcpp::traits::input_parameter< arma::sp_mat >::type Xc(XcSEXP);
  Rcpp::traits::input_parameter< arma::sp_mat >::type XcXcInv(XcXcInvSEXP);
  Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type betaR(betaRSEXP);
  Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type VacantSeats(VacantSeatsSEXP);
  Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type nObs_college(nObs_collegeSEXP);
  Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type ID_eqCollege(ID_eqCollegeSEXP);
  Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type match(matchSEXP);
  Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type sid(sidSEXP);
  Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type ID_cBetter(ID_cBetterSEXP);
  Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type ID_cWorse(ID_cWorseSEXP);
  Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type ID_sBetter(ID_sBetterSEXP);
  Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type ID_sWorse(ID_sWorseSEXP);
  Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type ID_nextCollege(ID_nextCollegeSEXP);
  Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
  Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
  Rcpp::traits::input_parameter< int >::type demean(demeanSEXP);
  rcpp_result_gen = Rcpp::wrap(stabest2_internal(Vc, Vs, Xc, XcXcInv, betaR, VacantSeats, nObs_college, ID_eqCollege, match, sid, ID_cBetter, ID_cWorse, ID_sBetter, ID_sWorse, ID_nextCollege, niter, thin, demean));
  return rcpp_result_gen;
  END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
  {"_stabest2_stabest2_internal", (DL_FUNC) &_stabest2_stabest2_internal, 18},
  {NULL, NULL, 0}
};

RcppExport void R_init_stabest2(DllInfo *dll) {
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
