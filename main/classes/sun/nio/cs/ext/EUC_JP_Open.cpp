#include <sun/nio/cs/ext/EUC_JP_Open.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/JIS_X_0201.h>
#include <sun/nio/cs/ext/EUC_JP$Decoder.h>
#include <sun/nio/cs/ext/EUC_JP$Encoder.h>
#include <sun/nio/cs/ext/EUC_JP.h>
#include <sun/nio/cs/ext/EUC_JP_Open$Decoder.h>
#include <sun/nio/cs/ext/EUC_JP_Open$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $JIS_X_0201 = ::sun::nio::cs::JIS_X_0201;
using $EUC_JP = ::sun::nio::cs::ext::EUC_JP;
using $EUC_JP$Decoder = ::sun::nio::cs::ext::EUC_JP$Decoder;
using $EUC_JP$Encoder = ::sun::nio::cs::ext::EUC_JP$Encoder;
using $EUC_JP_Open$Decoder = ::sun::nio::cs::ext::EUC_JP_Open$Decoder;
using $EUC_JP_Open$Encoder = ::sun::nio::cs::ext::EUC_JP_Open$Encoder;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _EUC_JP_Open_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EUC_JP_Open::*)()>(&EUC_JP_Open::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _EUC_JP_Open_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.EUC_JP_Open$Encoder", "sun.nio.cs.ext.EUC_JP_Open", "Encoder", $PRIVATE | $STATIC},
	{"sun.nio.cs.ext.EUC_JP_Open$Decoder", "sun.nio.cs.ext.EUC_JP_Open", "Decoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _EUC_JP_Open_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.EUC_JP_Open",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_EUC_JP_Open_MethodInfo_,
	nullptr,
	nullptr,
	_EUC_JP_Open_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.EUC_JP_Open$Encoder,sun.nio.cs.ext.EUC_JP_Open$Decoder"
};

$Object* allocate$EUC_JP_Open($Class* clazz) {
	return $of($alloc(EUC_JP_Open));
}

int32_t EUC_JP_Open::hashCode() {
	 return this->$Charset::hashCode();
}

bool EUC_JP_Open::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* EUC_JP_Open::toString() {
	 return this->$Charset::toString();
}

$Object* EUC_JP_Open::clone() {
	 return this->$Charset::clone();
}

void EUC_JP_Open::finalize() {
	this->$Charset::finalize();
}

void EUC_JP_Open::init$() {
	$Charset::init$("x-eucJP-Open"_s, $($ExtendedCharsets::aliasesFor("x-eucJP-Open"_s)));
}

$String* EUC_JP_Open::historicalName() {
	return "EUC_JP_Solaris"_s;
}

bool EUC_JP_Open::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf($JIS_X_0201, cs)) || ($instanceOf($EUC_JP, cs)));
}

$CharsetDecoder* EUC_JP_Open::newDecoder() {
	return $new($EUC_JP_Open$Decoder, this);
}

$CharsetEncoder* EUC_JP_Open::newEncoder() {
	return $new($EUC_JP_Open$Encoder, this);
}

EUC_JP_Open::EUC_JP_Open() {
}

$Class* EUC_JP_Open::load$($String* name, bool initialize) {
	$loadClass(EUC_JP_Open, name, initialize, &_EUC_JP_Open_ClassInfo_, allocate$EUC_JP_Open);
	return class$;
}

$Class* EUC_JP_Open::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun