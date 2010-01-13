
#include <string>
#include <boost/python.hpp>
#include <boost/python/extract.hpp>
#include <pyublas/numpy.hpp>
#include  <boost/type_traits/is_base_of.hpp>

#include <dev_vector.hpp>
#include <host_vector.hpp>
#include <vector_ops/vector_ops.hpp>
#include <convert.hpp>

using namespace std;
using namespace boost::python;
using namespace cuv;
namespace ublas = boost::numeric::ublas;

void export_0ary_functors(){
    enum_<cuv::NullaryFunctor>("nullary_functor")
        .value("FILL", NF_FILL)
        .value("SEQ", NF_SEQ);

}
void export_scalar_functors() {
    enum_<cuv::ScalarFunctor>("scalar_functor")
        .value("EXACT_EXP", SF_EXACT_EXP)
        .value("EXP", SF_EXP)
        .value("LOG", SF_LOG)
        .value("SIGN", SF_SIGN)
        .value("SIGM", SF_SIGM)
        .value("EXACT_SIGM", SF_EXACT_SIGM)
        .value("DSIGM", SF_DSIGM)
        .value("TANH", SF_TANH)
        .value("DTANH", SF_DTANH)
        .value("SQUARE", SF_SQUARE)
        .value("SUBLIN", SF_SUBLIN)
        .value("ENERG", SF_ENERG)
        .value("INV", SF_INV)
        .value("SQRT", SF_SQRT)
        .value("NEGATE", SF_NEGATE)
        .value("ABS", SF_ABS)

        .value("ADD", SF_ADD)
        .value("SUBTRACT", SF_SUBTRACT)
        .value("MULT", SF_MULT)
        .value("DIV", SF_DIV)
        ;

}

void export_binary_functors(){
    enum_<cuv::BinaryFunctor>("binary_functor")
        .value("ADD", BF_ADD)
        .value("SUBTRACT", BF_SUBTRACT)
        .value("MULT", BF_MULT)
        .value("DIV", BF_DIV)
        .value("COPY", BF_COPY)

        .value("AXPY", BF_AXPY)
        .value("YPBY", BF_AXPY)
        .value("AXPBY", BF_AXPBY)
        ;
}

void export_vector_ops(){
	export_scalar_functors();
	export_binary_functors();
	export_0ary_functors();
}

