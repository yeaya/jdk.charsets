#include <sun/nio/cs/ext/JIS_X_0208_Solaris$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/JIS_X_0208_Solaris$DecodeHolder.h>
#include <sun/nio/cs/ext/JIS_X_0208_Solaris.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $JIS_X_0208_Solaris = ::sun::nio::cs::ext::JIS_X_0208_Solaris;
using $JIS_X_0208_Solaris$DecodeHolder = ::sun::nio::cs::ext::JIS_X_0208_Solaris$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _JIS_X_0208_Solaris$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0208_Solaris$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0208_Solaris$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _JIS_X_0208_Solaris$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JIS_X_0208_Solaris$EncodeHolder::*)()>(&JIS_X_0208_Solaris$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _JIS_X_0208_Solaris$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.JIS_X_0208_Solaris$EncodeHolder", "sun.nio.cs.ext.JIS_X_0208_Solaris", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _JIS_X_0208_Solaris$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.JIS_X_0208_Solaris$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_JIS_X_0208_Solaris$EncodeHolder_FieldInfo_,
	_JIS_X_0208_Solaris$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_JIS_X_0208_Solaris$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.JIS_X_0208_Solaris"
};

$Object* allocate$JIS_X_0208_Solaris$EncodeHolder($Class* clazz) {
	return $of($alloc(JIS_X_0208_Solaris$EncodeHolder));
}

$chars* JIS_X_0208_Solaris$EncodeHolder::c2b = nullptr;
$chars* JIS_X_0208_Solaris$EncodeHolder::c2bIndex = nullptr;

void JIS_X_0208_Solaris$EncodeHolder::init$() {
}

void clinit$JIS_X_0208_Solaris$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JIS_X_0208_Solaris$EncodeHolder::c2b, $new($chars, 20992));
	$assignStatic(JIS_X_0208_Solaris$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, u"\u7921\u7e8a\u7922\u891c\u7923\u9348\u7924\u9288\u7925\u84dc\u7926\u4fc9\u7927\u70bb\u7928\u6631\u7929\u68c8\u792a\u92f9\u792b\u66fb\u792c\u5f45\u792d\u4e28\u792e\u4ee1\u792f\u4efc\u7930\u4f00\u7931\u4f03\u7932\u4f39\u7933\u4f56\u7934\u4f92\u7935\u4f8a\u7936\u4f9a\u7937\u4f94\u7938\u4fcd\u7939\u5040\u793a\u5022\u793b\u4fff\u793c\u501e\u793d\u5046\u793e\u5070\u793f\u5042\u7940\u5094\u7941\u50f4\u7942\u50d8\u7943\u514a\u7944\u5164\u7945\u519d\u7946\u51be\u7947\u51ec\u7948\u5215\u7949\u529c\u794a\u52a6\u794b\u52c0\u794c\u52db\u794d\u5300\u794e\u5307\u794f\u5324\u7950\u5372\u7951\u5393\u7952\u53b2\u7953\u53dd\u7954\ufa0e\u7955\u549c\u7956\u548a\u7957\u54a9\u7958\u54ff\u7959\u5586\u795a\u5759\u795b\u5765\u795c\u57ac\u795d\u57c8\u795e\u57c7\u795f\ufa0f\u7960\ufa10\u7961\u589e\u7962\u58b2\u7963\u590b\u7964\u5953\u7965\u595b\u7966\u595d\u7967\u5963\u7968\u59a4\u7969\u59ba\u796a\u5b56\u796b\u5bc0\u796c\u752f\u796d\u5bd8\u796e\u5bec\u796f\u5c1e\u7970\u5ca6\u7971\u5cba\u7972\u5cf5\u7973\u5d27\u7974\u5d53\u7975\ufa11\u7976\u5d42\u7977\u5d6d\u7978\u5db8\u7979\u5db9\u797a\u5dd0\u797b\u5f21\u797c\u5f34\u797d\u5f67\u797e\u5fb7\u7a21\u5fde\u7a22\u605d\u7a23\u6085\u7a24\u608a\u7a25\u60de\u7a26\u60d5\u7a27\u6120\u7a28\u60f2\u7a29\u6111\u7a2a\u6137\u7a2b\u6130\u7a2c\u6198\u7a2d\u6213\u7a2e\u62a6\u7a2f\u63f5\u7a30\u6460\u7a31\u649d\u7a32\u64ce\u7a33\u654e\u7a34\u6600\u7a35\u6615\u7a36\u663b\u7a37\u6609\u7a38\u662e\u7a39\u661e\u7a3a\u6624\u7a3b\u6665\u7a3c\u6657\u7a3d\u6659\u7a3e\ufa12\u7a3f\u6673\u7a40\u6699\u7a41\u66a0\u7a42\u66b2\u7a43\u66bf\u7a44\u66fa\u7a45\u670e\u7a46\uf929\u7a47\u6766\u7a48\u67bb\u7a49\u6852\u7a4a\u67c0\u7a4b\u6801\u7a4c\u6844\u7a4d\u68cf\u7a4e\ufa13\u7a4f\u6968\u7a50\ufa14\u7a51\u6998\u7a52\u69e2\u7a53\u6a30\u7a54\u6a6b\u7a55\u6a46\u7a56\u6a73\u7a57\u6a7e\u7a58\u6ae2\u7a59\u6ae4\u7a5a\u6bd6\u7a5b\u6c3f\u7a5c\u6c5c\u7a5d\u6c86\u7a5e\u6c6f\u7a5f\u6cda\u7a60\u6d04\u7a61\u6d87\u7a62\u6d6f\u7a63\u6d96\u7a64\u6dac\u7a65\u6dcf\u7a66\u6df8\u7a67\u6df2\u7a68\u6dfc\u7a69\u6e39\u7a6a\u6e5c\u7a6b\u6e27\u7a6c\u6e3c\u7a6d\u6ebf\u7a6e\u6f88\u7a6f\u6fb5\u7a70\u6ff5\u7a71\u7005\u7a72\u7007\u7a73\u7028\u7a74\u7085\u7a75\u70ab\u7a76\u710f\u7a77\u7104\u7a78\u715c\u7a79\u7146\u7a7a\u7147\u7a7b\ufa15\u7a7c\u71c1\u7a7d\u71fe\u7a7e\u72b1\u7b21\u72be\u7b22\u7324\u7b23\ufa16\u7b24\u7377\u7b25\u73bd\u7b26\u73c9\u7b27\u73d6\u7b28\u73e3\u7b29\u73d2\u7b2a\u7407\u7b2b\u73f5\u7b2c\u7426\u7b2d\u742a\u7b2e\u7429\u7b2f\u742e\u7b30\u7462\u7b31\u7489\u7b32\u749f\u7b33\u7501\u7b34\u756f\u7b35\u7682\u7b36\u769c\u7b37\u769e\u7b38\u769b\u7b39\u76a6\u7b3a\ufa17\u7b3b\u7746\u7b3c\u52af\u7b3d\u7821\u7b3e\u784e\u7b3f\u7864\u7b40\u787a\u7b41\u7930\u7b42\ufa18\u7b43\ufa19\u7b44\ufa1a\u7b45\u7994\u7b46\ufa1b\u7b47\u799b\u7b48\u7ad1\u7b49\u7ae7\u7b4a\ufa1c\u7b4b\u7aeb\u7b4c\u7b9e\u7b4d\ufa1d\u7b4e\u7d48\u7b4f\u7d5c\u7b50\u7db7\u7b51\u7da0\u7b52\u7dd6\u7b53\u7e52\u7b54\u7f47\u7b55\u7fa1\u7b56\ufa1e\u7b57\u8301\u7b58\u8362\u7b59\u837f\u7b5a\u83c7\u7b5b\u83f6\u7b5c\u8448\u7b5d\u84b4\u7b5e\u8553\u7b5f\u8559\u7b60\u856b\u7b61\ufa1f\u7b62\u85b0\u7b63\ufa20\u7b64\ufa21\u7b65\u8807\u7b66\u88f5\u7b67\u8a12\u7b68\u8a37\u7b69\u8a79\u7b6a\u8aa7\u7b6b\u8abe\u7b6c\u8adf\u7b6d\ufa22\u7b6e\u8af6\u7b6f\u8b53\u7b70\u8b7f\u7b71\u8cf0\u7b72\u8cf4\u7b73\u8d12\u7b74\u8d76\u7b75\ufa23\u7b76\u8ecf\u7b77\ufa24\u7b78\ufa25\u7b79\u9067\u7b7a\u90de\u7b7b\ufa26\u7b7c\u9115\u7b7d\u9127\u7b7e\u91da\u7c21\u91d7\u7c22\u91de\u7c23\u91ed\u7c24\u91ee\u7c25\u91e4\u7c26\u91e5\u7c27\u9206\u7c28\u9210\u7c29\u920a\u7c2a\u923a\u7c2b\u9240\u7c2c\u923c\u7c2d\u924e\u7c2e\u9259\u7c2f\u9251\u7c30\u9239\u7c31\u9267\u7c32\u92a7\u7c33\u9277\u7c34\u9278\u7c35\u92e7\u7c36\u92d7\u7c37\u92d9\u7c38\u92d0\u7c39\ufa27\u7c3a\u92d5\u7c3b\u92e0\u7c3c\u92d3\u7c3d\u9325\u7c3e\u9321\u7c3f\u92fb\u7c40\ufa28\u7c41\u931e\u7c42\u92ff\u7c43\u931d\u7c44\u9302\u7c45\u9370\u7c46\u9357\u7c47\u93a4\u7c48\u93c6\u7c49\u93de\u7c4a\u93f8\u7c4b\u9431\u7c4c\u9445\u7c4d\u9448\u7c4e\u9592\u7c4f\uf9dc\u7c50\ufa29\u7c51\u969d\u7c52\u96af\u7c53\u9733\u7c54\u973b\u7c55\u9743\u7c56\u974d\u7c57\u974f\u7c58\u9751\u7c59\u9755\u7c5a\u9857\u7c5b\u9865\u7c5c\ufa2a\u7c5d\ufa2b\u7c5e\u9927\u7c5f\ufa2c\u7c60\u999e\u7c61\u9a4e\u7c62\u9ad9\u7c63\u9adc\u7c64\u9b75\u7c65\u9b72\u7c66\u9b8f\u7c67\u9bb1\u7c68\u9bbb\u7c69\u9c00\u7c6a\u9d70\u7c6b\u9d6b\u7c6c\ufa2d\u7c6d\u9e19\u7c6e\u9ed1\u7c71\u2170\u7c72\u2171\u7c73\u2172\u7c74\u2173\u7c75\u2174\u7c76\u2175\u7c77\u2176\u7c78\u2177\u7c79\u2178\u7c7a\u2179\u7c7b\u3052\u7c7c\u00a6\u7c7d\uff07\u7c7e\uff02\u932b\u2160\u932c\u2161\u932d\u2162\u932e\u2163\u932f\u2164\u9330\u2165\u9331\u2166\u9332\u2167\u9333\u2168\u9334\u2169\u9339\u3231\u933a\u2116\u933b\u2121"_s);
		$var($String, c2bNR, nullptr);
		$init($JIS_X_0208_Solaris$DecodeHolder);
		$DoubleByte$Encoder::initC2B($JIS_X_0208_Solaris$DecodeHolder::b2cStr, $JIS_X_0208_Solaris$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 33, 126, JIS_X_0208_Solaris$EncodeHolder::c2b, JIS_X_0208_Solaris$EncodeHolder::c2bIndex);
	}
}

JIS_X_0208_Solaris$EncodeHolder::JIS_X_0208_Solaris$EncodeHolder() {
}

$Class* JIS_X_0208_Solaris$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(JIS_X_0208_Solaris$EncodeHolder, name, initialize, &_JIS_X_0208_Solaris$EncodeHolder_ClassInfo_, clinit$JIS_X_0208_Solaris$EncodeHolder, allocate$JIS_X_0208_Solaris$EncodeHolder);
	return class$;
}

$Class* JIS_X_0208_Solaris$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun