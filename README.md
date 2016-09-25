Cinder-AbletonLink
============

Cinder block for AbletonLink ( https://www.ableton.com/en/link/ )

# Building and Running

Link relies on `asio-standalone` and `catch` as submodules. After checking out the
main repositories, those submodules have to be loaded using, in the /lib/link folder:

```
git submodule update --init --recursive
```

Add to the preprocessor:
_SCL_SECURE_NO_WARNINGS
LINK_BUILD_VLD=0
_CRT_SECURE_NO_WARNINGS
LINK_PLATFORM_WINDOWS=1