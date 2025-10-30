#include <sun/nio/cs/ext/Big5_Solaris.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/Big5.h>
#include <sun/nio/cs/ext/Big5_Solaris$Holder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <jcpp.h>

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $Big5 = ::sun::nio::cs::ext::Big5;
using $Big5_Solaris$Holder = ::sun::nio::cs::ext::Big5_Solaris$Holder;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _Big5_Solaris_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Big5_Solaris::*)()>(&Big5_Solaris::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _Big5_Solaris_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.Big5_Solaris$Holder", "sun.nio.cs.ext.Big5_Solaris", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Big5_Solaris_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.Big5_Solaris",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_Big5_Solaris_MethodInfo_,
	nullptr,
	nullptr,
	_Big5_Solaris_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.Big5_Solaris$Holder"
};

$Object* allocate$Big5_Solaris($Class* clazz) {
	return $of($alloc(Big5_Solaris));
}

int32_t Big5_Solaris::hashCode() {
	 return this->$Charset::hashCode();
}

bool Big5_Solaris::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* Big5_Solaris::toString() {
	 return this->$Charset::toString();
}

$Object* Big5_Solaris::clone() {
	 return this->$Charset::clone();
}

void Big5_Solaris::finalize() {
	this->$Charset::finalize();
}

void Big5_Solaris::init$() {
	$Charset::init$("x-Big5-Solaris"_s, $($ExtendedCharsets::aliasesFor("x-Big5-Solaris"_s)));
}

$String* Big5_Solaris::historicalName() {
	return "Big5_Solaris"_s;
}

bool Big5_Solaris::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf($Big5, cs)) || ($instanceOf(Big5_Solaris, cs)));
}

$CharsetDecoder* Big5_Solaris::newDecoder() {
	$init($Big5_Solaris$Holder);
	return $new($DoubleByte$Decoder, this, $Big5_Solaris$Holder::b2c, $Big5_Solaris$Holder::b2cSB, 64, 254, true);
}

$CharsetEncoder* Big5_Solaris::newEncoder() {
	$init($Big5_Solaris$Holder);
	return $new($DoubleByte$Encoder, this, $Big5_Solaris$Holder::c2b, $Big5_Solaris$Holder::c2bIndex, true);
}

Big5_Solaris::Big5_Solaris() {
}

$Class* Big5_Solaris::load$($String* name, bool initialize) {
	$loadClass(Big5_Solaris, name, initialize, &_Big5_Solaris_ClassInfo_, allocate$Big5_Solaris);
	return class$;
}

$Class* Big5_Solaris::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun