#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
double meanC(NumericVector x) {
  int n = x.size();
  double total = 0;

  for(int i = 0; i < n; ++i) {
    total += x[i];
  }
  return total / n;
}

/*** R
library(rbenchmark)
x <- runif(1e5)
benchmark(
  mean(x),
  meanC(x),
  columns = c("test", "replications", "elapsed", "relative"), 
  order = "relative"
)
*/
