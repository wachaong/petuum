// Copyright (c) 2014, Sailing Lab
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
// this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright
// notice, this list of conditions and the following disclaimer in the
// documentation and/or other materials provided with the distribution.
//
// 3. Neither the name of the <ORGANIZATION> nor the names of its contributors
// may be used to endorse or promote products derived from this software
// without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
#ifndef __ZMQ_UTIL_HPP__
#define __ZMQ_UTIL_HPP__

#include "comm_handler.hpp"
#include <zmq.hpp>
#include <assert.h>
#include <boost/shared_array.hpp>
/*
 * return number of bytes received, negative if error 
 */
int recv_msg_async(zmq::socket_t &sock, boost::shared_array<uint8_t> &data);

/*
 * return number of bytes received, negative if error
 */
int recv_msg_async(zmq::socket_t &sock, commtest::cliid_t &cid, boost::shared_array<uint8_t> &data);

/*
 * return number of bytes received, negative if error 
 */
int recv_msg(zmq::socket_t &sock, boost::shared_array<uint8_t> &data);

/*
 * return number of bytes received, negative if error
 */
int recv_msg(zmq::socket_t &sock, commtest::cliid_t &cid, boost::shared_array<uint8_t> &data);


/*
 * return number of bytes sent, negative if error
 */
int send_msg(zmq::socket_t &sock, uint8_t *data, size_t len, int flag);

int send_msg(zmq::socket_t &sock, commtest::cliid_t cid, uint8_t *data, size_t len, int flag);

#endif
