// -----------------------------------------------------------------------------
// Fern © Geoneric
//
// This file is part of Geoneric Fern which is available under the terms of
// the GNU General Public License (GPL), version 2. If you do not want to
// be bound by the terms of the GPL, you may purchase a proprietary license
// from Geoneric (http://www.geoneric.eu/contact).
// -----------------------------------------------------------------------------
#pragma once
#include "fern/core/assert.h"
#include "fern/algorithm/policy/policies.h"
#include "fern/algorithm/algebra/boole/detail/and.h"


namespace fern {
namespace algorithm {
namespace algebra {

/*!
    @brief      Determine the boolean and result of @a value1 and @a value2
                and write the result to @a result.
    @ingroup    fern_algorithm_algebra_boole_group
    @sa         fern::algorithm::binary_local_operation

    The value types of @a value1, @a value2 and @a result must be arithmetic.

    Truth table:

    arg1  | arg2  | result
    ------|-------|-------
    false | false | false
    false | true  | false
    true  | false | false
    true  | true  | true
*/
template<
    typename InputNoDataPolicy,
    typename OutputNoDataPolicy,
    typename ExecutionPolicy,
    typename Value1,
    typename Value2,
    typename Result
>
void and_(
    InputNoDataPolicy const& input_no_data_policy,
    OutputNoDataPolicy& output_no_data_policy,
    ExecutionPolicy& execution_policy,
    Value1 const& value1,
    Value2 const& value2,
    Result& result)
{
    FERN_STATIC_ASSERT(std::is_arithmetic, value_type<Value1>)
    FERN_STATIC_ASSERT(std::is_arithmetic, value_type<Value2>)
    FERN_STATIC_ASSERT(std::is_arithmetic, value_type<Result>)

    and_::detail::and_<>(input_no_data_policy, output_no_data_policy,
        execution_policy, value1, value2, result);
}


/*!
    @ingroup    fern_algorithm_algebra_boole_group
    @overload
*/
template<
    typename ExecutionPolicy,
    typename Value1,
    typename Value2,
    typename Result
>
void and_(
    ExecutionPolicy& execution_policy,
    Value1 const& value1,
    Value2 const& value2,
    Result& result)
{
    using InputNoDataPolicy = InputNoDataPolicies<SkipNoData, SkipNoData>;
    using OutputNoDataPolicy = DontMarkNoData;

    OutputNoDataPolicy output_no_data_policy;
    and_<>(InputNoDataPolicy{{}, {}}, output_no_data_policy, execution_policy,
        value1, value2, result);
}

} // namespace algebra
} // namespace algorithm
} // namespace fern
