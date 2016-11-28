/*
 * Copyright (C) 2013 Daniel Himmelein
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MINDROID_LOGGER_H_
#define MINDROID_LOGGER_H_

#include <stdint.h>
#include "mindroid/lang/Object.h"

namespace mindroid {

class Logger {
public:
    Logger() {
    }

    virtual ~Logger() {
    }

    virtual int println(int bufferId, uint8_t priority, const char* tag, const char* msg);

protected:
    static const char PRIORITIES[];

private:
    NO_COPY_CONSTRUCTOR_AND_ASSIGNMENT_OPERATOR(Logger)
};

} /* namespace mindroid */

#endif /* MINDROID_LOGGER_H_ */
