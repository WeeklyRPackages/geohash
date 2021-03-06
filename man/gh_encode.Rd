% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{gh_encode}
\alias{gh_encode}
\title{Encode Latitude and Longitude Values}
\usage{
gh_encode(lats, lngs, precision = 6L)
}
\arguments{
\item{lats}{a numeric vector of latitude values.}

\item{lngs}{a numeric vector of longitude values. Must be the same length
as \code{lat}.}

\item{precision}{an integer representing the precision the hashes should have.
This should be between 1 and 10; if the precision requested is greater than 10, it will
use 10 - if less than 1, it will error.}
}
\value{
a character vector of hashes, the same length as \code{lat} and \code{lng},
with \code{NA} values where one of the equivalent lat/lng pair was NA.
}
\description{
\code{\link{gh_encode}} generates geohashes of a
given precision from vectors of latitude and longitude values.
}
\examples{
# A simple example:
gh_encode(lat = 42.60498046875, lng = -5.60302734375, precision = 5)
#[1] "ezs42"

}
\seealso{
\code{\link{gh_decode}}, for taking geohashes and turning them back into coordinates,
and \code{\link{gh_neighbours}} for retrieving the neighbouring hashes to a particular hash.
}

