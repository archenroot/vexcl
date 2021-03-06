#ifndef VEXCL_IMAGE_HPP
#define VEXCL_IMAGE_HPP

/*
The MIT License

Copyright (c) 2012-2016 Denis Demidov <dennis.demidov@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

/**
 * \file   vexcl/image.hpp
 * \author Denis Demidov <dennis.demidov@gmail.com>
 * \brief  Allow using OpenCL images/CUDA textures in vector expressions.
 */

#if defined(VEXCL_BACKEND_CUDA)
#  include <vexcl/backend/cuda/texture_object.hpp>
#elif defined (CL_VERSION_1_2)
#  if defined(VEXCL_BACKEND_COMPUTE)
#    include <vexcl/backend/compute/image.hpp>
#  else // either defined(VEXCL_BACKEND_OPENCL) or by default
#    include <vexcl/backend/opencl/image.hpp>
#  endif
#endif

#endif
