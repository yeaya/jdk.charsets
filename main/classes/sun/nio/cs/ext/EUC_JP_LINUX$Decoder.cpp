#include <sun/nio/cs/ext/EUC_JP_LINUX$Decoder.h>

#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/ext/EUC_JP$Decoder.h>
#include <sun/nio/cs/ext/EUC_JP_LINUX.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $EUC_JP$Decoder = ::sun::nio::cs::ext::EUC_JP$Decoder;
using $EUC_JP_LINUX = ::sun::nio::cs::ext::EUC_JP_LINUX;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _EUC_JP_LINUX$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(EUC_JP_LINUX$Decoder::*)($Charset*)>(&EUC_JP_LINUX$Decoder::init$))},
	{}
};

$InnerClassInfo _EUC_JP_LINUX$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.EUC_JP_LINUX$Decoder", "sun.nio.cs.ext.EUC_JP_LINUX", "Decoder", $PRIVATE | $STATIC},
	{"sun.nio.cs.ext.EUC_JP$Decoder", "sun.nio.cs.ext.EUC_JP", "Decoder", $STATIC},
	{}
};

$ClassInfo _EUC_JP_LINUX$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.EUC_JP_LINUX$Decoder",
	"sun.nio.cs.ext.EUC_JP$Decoder",
	nullptr,
	nullptr,
	_EUC_JP_LINUX$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_EUC_JP_LINUX$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.EUC_JP_LINUX"
};

$Object* allocate$EUC_JP_LINUX$Decoder($Class* clazz) {
	return $of($alloc(EUC_JP_LINUX$Decoder));
}

void EUC_JP_LINUX$Decoder::init$($Charset* cs) {
	$init($EUC_JP$Decoder);
	$EUC_JP$Decoder::init$(cs, 1.0f, 1.0f, $EUC_JP$Decoder::DEC0201, $EUC_JP$Decoder::DEC0208, nullptr);
}

EUC_JP_LINUX$Decoder::EUC_JP_LINUX$Decoder() {
}

$Class* EUC_JP_LINUX$Decoder::load$($String* name, bool initialize) {
	$loadClass(EUC_JP_LINUX$Decoder, name, initialize, &_EUC_JP_LINUX$Decoder_ClassInfo_, allocate$EUC_JP_LINUX$Decoder);
	return class$;
}

$Class* EUC_JP_LINUX$Decoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun