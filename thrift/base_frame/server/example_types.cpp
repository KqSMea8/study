/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "example_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>




People::~People() throw() {
}


void People::__set_name(const std::string& val) {
  this->name = val;
}

void People::__set_age(const int16_t val) {
  this->age = val;
}

void People::__set_male(const bool val) {
  this->male = val;
}

const char* People::ascii_fingerprint = "4ECC75419270D065D1AD939BF064A2C7";
const uint8_t People::binary_fingerprint[16] = {0x4E,0xCC,0x75,0x41,0x92,0x70,0xD0,0x65,0xD1,0xAD,0x93,0x9B,0xF0,0x64,0xA2,0xC7};

uint32_t People::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->age);
          this->__isset.age = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->male);
          this->__isset.male = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t People::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("People");

  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("age", ::apache::thrift::protocol::T_I16, 2);
  xfer += oprot->writeI16(this->age);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("male", ::apache::thrift::protocol::T_BOOL, 3);
  xfer += oprot->writeBool(this->male);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(People &a, People &b) {
  using ::std::swap;
  swap(a.name, b.name);
  swap(a.age, b.age);
  swap(a.male, b.male);
  swap(a.__isset, b.__isset);
}

People::People(const People& other0) {
  name = other0.name;
  age = other0.age;
  male = other0.male;
  __isset = other0.__isset;
}
People& People::operator=(const People& other1) {
  name = other1.name;
  age = other1.age;
  male = other1.male;
  __isset = other1.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const People& obj) {
  using apache::thrift::to_string;
  out << "People(";
  out << "name=" << to_string(obj.name);
  out << ", " << "age=" << to_string(obj.age);
  out << ", " << "male=" << to_string(obj.male);
  out << ")";
  return out;
}


Nation::~Nation() throw() {
}


void Nation::__set_peoples(const std::vector<People> & val) {
  this->peoples = val;
}

const char* Nation::ascii_fingerprint = "CEC42DA1585E4B9B54818010EA281AD4";
const uint8_t Nation::binary_fingerprint[16] = {0xCE,0xC4,0x2D,0xA1,0x58,0x5E,0x4B,0x9B,0x54,0x81,0x80,0x10,0xEA,0x28,0x1A,0xD4};

uint32_t Nation::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->peoples.clear();
            uint32_t _size2;
            ::apache::thrift::protocol::TType _etype5;
            xfer += iprot->readListBegin(_etype5, _size2);
            this->peoples.resize(_size2);
            uint32_t _i6;
            for (_i6 = 0; _i6 < _size2; ++_i6)
            {
              xfer += this->peoples[_i6].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.peoples = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Nation::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("Nation");

  xfer += oprot->writeFieldBegin("peoples", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->peoples.size()));
    std::vector<People> ::const_iterator _iter7;
    for (_iter7 = this->peoples.begin(); _iter7 != this->peoples.end(); ++_iter7)
    {
      xfer += (*_iter7).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(Nation &a, Nation &b) {
  using ::std::swap;
  swap(a.peoples, b.peoples);
  swap(a.__isset, b.__isset);
}

Nation::Nation(const Nation& other8) {
  peoples = other8.peoples;
  __isset = other8.__isset;
}
Nation& Nation::operator=(const Nation& other9) {
  peoples = other9.peoples;
  __isset = other9.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const Nation& obj) {
  using apache::thrift::to_string;
  out << "Nation(";
  out << "peoples=" << to_string(obj.peoples);
  out << ")";
  return out;
}


Exception::~Exception() throw() {
}


void Exception::__set_message(const std::string& val) {
  this->message = val;
}

const char* Exception::ascii_fingerprint = "EFB929595D312AC8F305D5A794CFEDA1";
const uint8_t Exception::binary_fingerprint[16] = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

uint32_t Exception::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Exception::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("Exception");

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(Exception &a, Exception &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

Exception::Exception(const Exception& other10) : TException() {
  message = other10.message;
  __isset = other10.__isset;
}
Exception& Exception::operator=(const Exception& other11) {
  message = other11.message;
  __isset = other11.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const Exception& obj) {
  using apache::thrift::to_string;
  out << "Exception(";
  out << "message=" << to_string(obj.message);
  out << ")";
  return out;
}


