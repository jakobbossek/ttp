// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// runWTSPSolverC
List runWTSPSolverC(String pathToFile, IntegerVector packing, IntegerMatrix initTours, int mu, int mutation, int objectiveType, int survivalStrategy, int maxEvaluations);
RcppExport SEXP _TTP_runWTSPSolverC(SEXP pathToFileSEXP, SEXP packingSEXP, SEXP initToursSEXP, SEXP muSEXP, SEXP mutationSEXP, SEXP objectiveTypeSEXP, SEXP survivalStrategySEXP, SEXP maxEvaluationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type pathToFile(pathToFileSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type packing(packingSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type initTours(initToursSEXP);
    Rcpp::traits::input_parameter< int >::type mu(muSEXP);
    Rcpp::traits::input_parameter< int >::type mutation(mutationSEXP);
    Rcpp::traits::input_parameter< int >::type objectiveType(objectiveTypeSEXP);
    Rcpp::traits::input_parameter< int >::type survivalStrategy(survivalStrategySEXP);
    Rcpp::traits::input_parameter< int >::type maxEvaluations(maxEvaluationsSEXP);
    rcpp_result_gen = Rcpp::wrap(runWTSPSolverC(pathToFile, packing, initTours, mu, mutation, objectiveType, survivalStrategy, maxEvaluations));
    return rcpp_result_gen;
END_RCPP
}
// tspC
NumericVector tspC(IntegerVector tour, NumericMatrix D);
RcppExport SEXP _TTP_tspC(SEXP tourSEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type tour(tourSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(tspC(tour, D));
    return rcpp_result_gen;
END_RCPP
}
// wtspC
NumericVector wtspC(IntegerVector tour, List problem, IntegerVector itemPackingPlan, NumericVector itemWeights, IntegerVector itemAssignedNodes);
RcppExport SEXP _TTP_wtspC(SEXP tourSEXP, SEXP problemSEXP, SEXP itemPackingPlanSEXP, SEXP itemWeightsSEXP, SEXP itemAssignedNodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type tour(tourSEXP);
    Rcpp::traits::input_parameter< List >::type problem(problemSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type itemPackingPlan(itemPackingPlanSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type itemWeights(itemWeightsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type itemAssignedNodes(itemAssignedNodesSEXP);
    rcpp_result_gen = Rcpp::wrap(wtspC(tour, problem, itemPackingPlan, itemWeights, itemAssignedNodes));
    return rcpp_result_gen;
END_RCPP
}
// ttpC
NumericVector ttpC(IntegerVector tour, List problem, IntegerVector itemPackingPlan, NumericVector itemProfits, NumericVector itemWeights, IntegerVector itemAssignedNodes);
RcppExport SEXP _TTP_ttpC(SEXP tourSEXP, SEXP problemSEXP, SEXP itemPackingPlanSEXP, SEXP itemProfitsSEXP, SEXP itemWeightsSEXP, SEXP itemAssignedNodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type tour(tourSEXP);
    Rcpp::traits::input_parameter< List >::type problem(problemSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type itemPackingPlan(itemPackingPlanSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type itemProfits(itemProfitsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type itemWeights(itemWeightsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type itemAssignedNodes(itemAssignedNodesSEXP);
    rcpp_result_gen = Rcpp::wrap(ttpC(tour, problem, itemPackingPlan, itemProfits, itemWeights, itemAssignedNodes));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_TTP_runWTSPSolverC", (DL_FUNC) &_TTP_runWTSPSolverC, 8},
    {"_TTP_tspC", (DL_FUNC) &_TTP_tspC, 2},
    {"_TTP_wtspC", (DL_FUNC) &_TTP_wtspC, 5},
    {"_TTP_ttpC", (DL_FUNC) &_TTP_ttpC, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_TTP(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
