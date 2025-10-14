#include <TestWrite.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/PrintStream.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintStream = ::java::io::PrintStream;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TestWrite_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestWrite::*)()>(&TestWrite::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestWrite::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TestWrite_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestWrite",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestWrite_MethodInfo_
};

$Object* allocate$TestWrite($Class* clazz) {
	return $of($alloc(TestWrite));
}

void TestWrite::init$() {
}

void TestWrite::main($StringArray* args) {
	$var($ByteArrayOutputStream, bos, nullptr);
	$var($OutputStreamWriter, osw, nullptr);
	$var($bytes, array, nullptr);
	try {
		$assign(bos, $new($ByteArrayOutputStream));
		$assign(osw, $new($OutputStreamWriter, static_cast<$OutputStream*>(bos), "EUCJIS"_s));
		osw->write((int32_t)u'a');
		for (int32_t count = 0; count < 10000; ++count) {
			osw->write((int32_t)(char16_t)0x3042);
		}
		osw->close();
		$assign(array, bos->toByteArray());
	} catch ($UnsupportedEncodingException&) {
		$var($UnsupportedEncodingException, e, $catch());
		$init($System);
		$nc($System::err)->println("Unsupported encoding - EUCJIS. ext  may not be properly installed. ext is   required for the test to run properly "_s);
		$throwNew($Exception, "Environment is incorrect"_s);
	}
}

TestWrite::TestWrite() {
}

$Class* TestWrite::load$($String* name, bool initialize) {
	$loadClass(TestWrite, name, initialize, &_TestWrite_ClassInfo_, allocate$TestWrite);
	return class$;
}

$Class* TestWrite::class$ = nullptr;