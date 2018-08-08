Boost Example
=============

Very simple program to dust off my C++ cobwebs and also learn [Boost].

Areas of learning
-----------------

* Investigate [Boost] libraries.
* Build via [Boost.Build].
* Test via [Boost.Test].

How to Build
------------

See: [Root README] for Travis build status.

* Install [Boost][Boost.Build] from your package manager / source.
* Build with:

```bash
b2 toolset=gcc
```

* Test artefact via:

```bash
echo 1 2 3 | bin/gcc-<version>/debug/./boost_example
```


[Boost]: https://www.boost.org
[Boost.Build]: https://boostorg.github.io/build/
[Boost.Test]: https://www.boost.org/doc/libs/1_67_0/libs/test/doc/html/index.html
[Root README]: ../README.md
