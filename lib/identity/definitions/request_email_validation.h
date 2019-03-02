/******************************************************************************
 * THIS FILE IS GENERATED - ANY EDITS WILL BE OVERWRITTEN
 */

#pragma once

#include "converters.h"

#include "converters.h"

namespace QMatrixClient {
    // Data structures

    struct RequestEmailValidation {
        /// A unique string generated by the client, and used to identify the
        /// validation attempt. It must be a string consisting of the characters
        /// ``[0-9a-zA-Z.=_-]``. Its length must not exceed 255 characters and
        /// it must not be empty.
        QString clientSecret;
        /// The email address to validate.
        QString email;
        /// The server will only send an email if the ``send_attempt``
        /// is a number greater than the most recent one which it has seen,
        /// scoped to that ``email`` + ``client_secret`` pair. This is to
        /// avoid repeatedly sending the same email in the case of request
        /// retries between the POSTing user and the identity server.
        /// The client should increment this value if they desire a new
        /// email (e.g. a reminder) to be sent.
        int sendAttempt;
        /// Optional. When the validation is completed, the identity
        /// server will redirect the user to this URL.
        QString nextLink;
    };
    template <> struct JsonObjectConverter<RequestEmailValidation> {
        static void dumpTo(QJsonObject& jo, const RequestEmailValidation& pod);
        static void fillFrom(const QJsonObject& jo,
                             RequestEmailValidation& pod);
    };

} // namespace QMatrixClient
