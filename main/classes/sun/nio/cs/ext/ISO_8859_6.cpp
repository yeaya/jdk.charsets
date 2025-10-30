#include <sun/nio/cs/ext/ISO_8859_6.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/ISO_8859_6$Holder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $ISO_8859_6$Holder = ::sun::nio::cs::ext::ISO_8859_6$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _ISO_8859_6_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ISO_8859_6::*)()>(&ISO_8859_6::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ISO_8859_6_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.ISO_8859_6$Holder", "sun.nio.cs.ext.ISO_8859_6", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ISO_8859_6_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.ISO_8859_6",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_ISO_8859_6_MethodInfo_,
	nullptr,
	nullptr,
	_ISO_8859_6_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.ISO_8859_6$Holder"
};

$Object* allocate$ISO_8859_6($Class* clazz) {
	return $of($alloc(ISO_8859_6));
}

int32_t ISO_8859_6::hashCode() {
	 return this->$Charset::hashCode();
}

bool ISO_8859_6::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* ISO_8859_6::toString() {
	 return this->$Charset::toString();
}

$Object* ISO_8859_6::clone() {
	 return this->$Charset::clone();
}

void ISO_8859_6::finalize() {
	this->$Charset::finalize();
}

void ISO_8859_6::init$() {
	$Charset::init$("ISO-8859-6"_s, $($ExtendedCharsets::aliasesFor("ISO-8859-6"_s)));
}

$String* ISO_8859_6::historicalName() {
	return "ISO8859_6"_s;
}

bool ISO_8859_6::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(ISO_8859_6, cs)));
}

$CharsetDecoder* ISO_8859_6::newDecoder() {
	$init($ISO_8859_6$Holder);
	return $new($SingleByte$Decoder, this, $ISO_8859_6$Holder::b2c, true, false);
}

$CharsetEncoder* ISO_8859_6::newEncoder() {
	$init($ISO_8859_6$Holder);
	return $new($SingleByte$Encoder, this, $ISO_8859_6$Holder::c2b, $ISO_8859_6$Holder::c2bIndex, true);
}

ISO_8859_6::ISO_8859_6() {
}

$Class* ISO_8859_6::load$($String* name, bool initialize) {
	$loadClass(ISO_8859_6, name, initialize, &_ISO_8859_6_ClassInfo_, allocate$ISO_8859_6);
	return class$;
}

$Class* ISO_8859_6::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun