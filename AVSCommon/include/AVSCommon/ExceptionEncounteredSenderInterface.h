/*
 * ExceptionEncounteredSenderInterface.h
 *
 * Copyright 2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#ifndef ALEXA_CLIENT_SDK_AVS_COMMON_INCLUDE_AVS_COMMON_EXCEPTION_ENCOUNTERED_SENDER_INTERFACE_H_
#define ALEXA_CLIENT_SDK_AVS_COMMON_INCLUDE_AVS_COMMON_EXCEPTION_ENCOUNTERED_SENDER_INTERFACE_H_

#include "ExceptionEncountered.h"

namespace alexaClientSDK {
namespace avsCommon {

/**
 * This specifies the interface to send an ExceptionEncountered event to AVS.
 */
class ExceptionEncounteredSenderInterface {
public:
    /**
     * Virtual destructor to ensure proper cleanup by derived types.
     */
    virtual ~ExceptionEncounteredSenderInterface() = default;

    /**
     * Send a @c System::ExceptionEncountered message to AVS.
     *
     * @param unparsedDirective The unparsed JSON of the directive.
     * @param error The type of error encountered.
     * @param errorDescription Additional error details for logging and troubleshooting.
     */
    virtual void sendExceptionEncountered(
        const std::string& unparsedDirective, ExceptionErrorType error, const std::string& errorDescription) = 0;
};

} // namespace avsCommon
} // namespace alexaClientSDK

#endif // ALEXA_CLIENT_SDK_AVS_COMMON_INCLUDE_AVS_COMMON_EXCEPTION_ENCOUNTERED_SENDER_INTERFACE_H_