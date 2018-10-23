#pragma once

#include "seq.h"

#include <algorithm>
#include <cassert>
#include <cstddef>
#include <tuple>
#include <type_traits>

namespace bdm
{

// Scalar types
using dim_t = std::size_t;

// Sequence type
template <dim_t... Ds>
using dim_seq = seq::iseq<dim_t, Ds...>;

// Specializations of generic seq operations
template <dim_t N, dim_t S = dim_t{}, std::make_signed_t<dim_t> I = 1>
using make_dim_seq = seq::make<dim_t, N, S, I>;

// Vector types

template <dim_t L, typename T>
struct vec;

template <typename T>
using vec2 = vec<2, T>;

template <typename T>
using vec3 = vec<3, T>;

template <typename T>
using vec4 = vec<4, T>;

// Common vec types

template <dim_t L>
using ivec = vec<L, int>;

using ivec2 = ivec<2>;
using ivec3 = ivec<3>;
using ivec4 = ivec<4>;

template <dim_t L>
using fvec = vec<L, float>;

using fvec2 = fvec<2>;
using fvec3 = fvec<3>;
using fvec4 = fvec<4>;

// Matrix types

template <dim_t R, dim_t C, typename T>
struct mat;

template <typename T>
using mat2 = mat<2, 2, T>;

template <typename T>
using mat3 = mat<3, 3, T>;

template <typename T>
using mat4 = mat<4, 4, T>;

// Common mat types

template <dim_t R, dim_t C>
using imat = mat<R, C, int>;

using imat2 = imat<2, 2>;
using imat3 = imat<3, 3>;
using imat4 = imat<4, 4>;

template <dim_t R, dim_t C>
using fmat = mat<R, C, float>;

using fmat2 = fmat<2, 2>;
using fmat3 = fmat<3, 3>;
using fmat4 = fmat<4, 4>;

}  // namespace bdm
