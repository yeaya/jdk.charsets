#include <sun/nio/cs/ext/MacThai$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/MacThai.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $MacThai = ::sun::nio::cs::ext::MacThai;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _MacThai$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacThai$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacThai$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacThai$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacThai$Holder, c2bIndex)},
	{}
};

$MethodInfo _MacThai$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MacThai$Holder::*)()>(&MacThai$Holder::init$))},
	{}
};

$InnerClassInfo _MacThai$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacThai$Holder", "sun.nio.cs.ext.MacThai", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacThai$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.MacThai$Holder",
	"java.lang.Object",
	nullptr,
	_MacThai$Holder_FieldInfo_,
	_MacThai$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_MacThai$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacThai"
};

$Object* allocate$MacThai$Holder($Class* clazz) {
	return $of($alloc(MacThai$Holder));
}

$String* MacThai$Holder::b2cTable = nullptr;
$chars* MacThai$Holder::b2c = nullptr;
$chars* MacThai$Holder::c2b = nullptr;
$chars* MacThai$Holder::c2bIndex = nullptr;

void MacThai$Holder::init$() {
}

void clinit$MacThai$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MacThai$Holder::b2cTable, $cstr({0xAB, 0xBB, 0x2026, 0xF88C, 0xF88F, 0xF892, 0xF895, 0xF898, 0xF88B, 0xF88E, 0xF891, 0xF894, 0xF897, 0x201C, 0x201D, 0xF899, 0xFFFD, 0x2022, 0xF884, 0xF889, 0xF885, 0xF886, 0xF887, 0xF888, 0xF88A, 0xF88D, 0xF890, 0xF893, 0xF896, 0x2018, 0x2019, 0xFFFD, 0xA0, 0xE01, 0xE02, 0xE03, 0xE04, 0xE05, 0xE06, 0xE07, 0xE08, 0xE09, 0xE0A, 0xE0B, 0xE0C, 0xE0D, 0xE0E, 0xE0F, 0xE10, 0xE11, 0xE12, 0xE13, 0xE14, 0xE15, 0xE16, 0xE17, 0xE18, 0xE19, 0xE1A, 0xE1B, 0xE1C, 0xE1D, 0xE1E, 0xE1F, 0xE20, 0xE21, 0xE22, 0xE23, 0xE24, 0xE25, 0xE26, 0xE27, 0xE28, 0xE29, 0xE2A, 0xE2B, 0xE2C, 0xE2D, 0xE2E, 0xE2F, 0xE30, 0xE31, 0xE32, 0xE33, 0xE34, 0xE35, 0xE36, 0xE37, 0xE38, 0xE39, 0xE3A, 0xFEFF, 0x200B, 0x2013, 0x2014, 0xE3F, 0xE40, 0xE41, 0xE42, 0xE43, 0xE44, 0xE45, 0xE46, 0xE47, 0xE48, 0xE49, 0xE4A, 0xE4B, 0xE4C, 0xE4D, 0x2122, 0xE4F, 0xE50, 0xE51, 0xE52, 0xE53, 0xE54, 0xE55, 0xE56, 0xE57, 0xE58, 0xE59, 0xAE, 0xA9, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(MacThai$Holder::b2c, $nc(MacThai$Holder::b2cTable)->toCharArray());
	$assignStatic(MacThai$Holder::c2b, $new($chars, 1792));
	$assignStatic(MacThai$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MacThai$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MacThai$Holder::c2b, MacThai$Holder::c2bIndex);
	}
}

MacThai$Holder::MacThai$Holder() {
}

$Class* MacThai$Holder::load$($String* name, bool initialize) {
	$loadClass(MacThai$Holder, name, initialize, &_MacThai$Holder_ClassInfo_, clinit$MacThai$Holder, allocate$MacThai$Holder);
	return class$;
}

$Class* MacThai$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun