/****************************************************************************
**
** This file is part of the Ponder library, formerly CAMP.
**
** The MIT License (MIT)
**
** Copyright (C) 2009-2014 TEGESO/TEGESOFT and/or its subsidiary(-ies) and mother company.
** Copyright (C) 2015-2016 Billy Quith.
**
** Permission is hereby granted, free of charge, to any person obtaining a copy
** of this software and associated documentation files (the "Software"), to deal
** in the Software without restriction, including without limitation the rights
** to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
** copies of the Software, and to permit persons to whom the Software is
** furnished to do so, subject to the following conditions:
** 
** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Software.
** 
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
** OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
** THE SOFTWARE.
**
****************************************************************************/


#ifndef PONDER_TYPE_HPP
#define PONDER_TYPE_HPP


namespace ponder
{
/**
 * \brief Special empty type associated to \c noType
 *
 * This type is mainly used when writing custom \c Value visitors
 */
struct NoType
{
};

/**
 * \brief Enumeration of abstract value types supported by Ponder
 *
 * \sa ValueMapper
 */
enum class ValueType
{
    None,       ///< No type has been defined yet
    Boolean,    ///< Boolean type (bool)
    Integer,    ///< Integer types (unsigned/signed char short int long)
    Real,       ///< Real types (float, double)
    String,     ///< String types (char*, ponder::String)
    Enum,       ///< Enumerated types
    Array,      ///< Array types (std::vector, std::list, T[])
    User        ///< User-defined classes
};

} // namespace ponder


#endif // PONDER_TYPE_HPP
