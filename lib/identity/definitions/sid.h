/******************************************************************************
 * THIS FILE IS GENERATED - ANY EDITS WILL BE OVERWRITTEN
 */

#pragma once

#include "converters.h"

namespace QMatrixClient {
    // Data structures

    struct Sid {
        /// The session ID. Session IDs are opaque strings generated by the
        /// identity server. They must consist entirely of the characters
        /// ``[0-9a-zA-Z.=_-]``. Their length must not exceed 255 characters and
        /// they must not be empty.
        QString sid;
    };
    template <> struct JsonObjectConverter<Sid> {
        static void dumpTo(QJsonObject& jo, const Sid& pod);
        static void fillFrom(const QJsonObject& jo, Sid& pod);
    };

} // namespace QMatrixClient
