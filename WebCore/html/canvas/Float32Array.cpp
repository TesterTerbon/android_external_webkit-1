/*
 * Copyright (C) 2009 Apple Inc. All rights reserved.
 * Copyright (C) 2009 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#include "config.h"

#if ENABLE(3D_CANVAS)

#include "Float32Array.h"

namespace WebCore {

PassRefPtr<Float32Array> Float32Array::create(unsigned length)
{
    return TypedArrayBase<float>::create<Float32Array>(length);
}

PassRefPtr<Float32Array> Float32Array::create(const float* array, unsigned length)
{
    return TypedArrayBase<float>::create<Float32Array>(array, length);
}

PassRefPtr<Float32Array> Float32Array::create(PassRefPtr<ArrayBuffer> buffer, unsigned byteOffset, unsigned length)
{
    return TypedArrayBase<float>::create<Float32Array>(buffer, byteOffset, length);
}

Float32Array::Float32Array(PassRefPtr<ArrayBuffer> buffer, unsigned byteOffset, unsigned length)
    : TypedArrayBase<float>(buffer, byteOffset, length)
{
}

PassRefPtr<ArrayBufferView> Float32Array::slice(int start, int end) const
{
    return sliceImpl<Float32Array>(start, end);
}

}

#endif // ENABLE(3D_CANVAS)