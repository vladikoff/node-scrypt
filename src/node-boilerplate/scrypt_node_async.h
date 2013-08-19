/*
scrypt_node_async.h

Copyright (C) 2013 Barry Steyn (http://doctrina.org/Scrypt-Authentication-For-Node.html)

This source code is provided 'as-is', without any express or implied
warranty. In no event will the author be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this source code must not be misrepresented; you must not
claim that you wrote the original source code. If you use this source code
in a product, an acknowledgment in the product documentation would be
appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be
misrepresented as being the original source code.

3. This notice may not be removed or altered from any source distribution.

Barry Steyn barry.steyn@gmail.com

*/


//Forward declarations
using namespace v8;

Handle<Value> HashAsyncBefore(const Arguments& args);
void HashWork(uv_work_t* req);
void HashAsyncAfter(uv_work_t* req);

Handle<Value> HashAsyncOptionsBefore(const Arguments& args);
void HashWorkOptions(uv_work_t* req);
void HashAsyncOptionsAfter(uv_work_t* req);

Handle<Value> VerifyAsyncBefore(const Arguments& args);
void VerifyWork(uv_work_t* req);
void VerifyAsyncAfter(uv_work_t* req);

Handle<Value> EncryptAsyncBefore(const Arguments& args);
void EncryptWork(uv_work_t* req);
void EncryptAsyncAfter(uv_work_t* req);

Handle<Value> DecryptAsyncBefore(const Arguments& args);
void DecryptWork(uv_work_t* req);
void DecryptAsyncAfter(uv_work_t* req);
