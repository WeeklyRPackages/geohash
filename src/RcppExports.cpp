// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// gh_encode
CharacterVector gh_encode(NumericVector lats, NumericVector lngs, IntegerVector precision);
RcppExport SEXP geohash_gh_encode(SEXP latsSEXP, SEXP lngsSEXP, SEXP precisionSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type lats(latsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lngs(lngsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type precision(precisionSEXP);
    __result = Rcpp::wrap(gh_encode(lats, lngs, precision));
    return __result;
END_RCPP
}
// gh_decode
DataFrame gh_decode(CharacterVector hashes);
RcppExport SEXP geohash_gh_decode(SEXP hashesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type hashes(hashesSEXP);
    __result = Rcpp::wrap(gh_decode(hashes));
    return __result;
END_RCPP
}
// gh_neighbours
DataFrame gh_neighbours(CharacterVector hashes);
RcppExport SEXP geohash_gh_neighbours(SEXP hashesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type hashes(hashesSEXP);
    __result = Rcpp::wrap(gh_neighbours(hashes));
    return __result;
END_RCPP
}
// gh_neighbour
CharacterVector gh_neighbour(CharacterVector hashes, IntegerVector direction);
RcppExport SEXP geohash_gh_neighbour(SEXP hashesSEXP, SEXP directionSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type hashes(hashesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type direction(directionSEXP);
    __result = Rcpp::wrap(gh_neighbour(hashes, direction));
    return __result;
END_RCPP
}
