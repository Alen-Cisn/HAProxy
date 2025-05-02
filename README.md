# HAProxy con scheduling basado en aprendizaje por refuerzo

[![HAProxy](https://github.com/haproxy/haproxy)](https://github.com/haproxy/haproxy)

![HAProxy logo](doc/HAProxyCommunityEdition_60px.png)

Este repositorio consta de un fork de HAProxy con un algoritmo de balanceo de carga agregado. Investigamos la posibildad del aprendiajo por refuerzo profundo para el scheduling eficiente.

## Pasos para ejecutar



Los cambios están configurados para un sistema GNU/Linux-glibc.

Es necesario tener instalado:
 - GNU Make >= 3.8
 - GCC >= 4.7 (c11 atomics)
 - GNU ld

Consulte con su soporte de sistemas operativos para saber cómo instalar los paquetes necesarios para una compilación.
Ejemplos:
### Arch Linux & Arch-based
```
  sudo pacman -Syu base-devel
```
### Debian, Ubuntu & Debian-based
```
  sudo apt-get update
  sudo apt-get install build-essential
```
### Fedora, CentOS, RHEL & derivados
```
  sudo yum groupinstall "Development Tools"
```


Se deben contar con las siguientes bibilotecas:
 - PCRE2
 - jemalloc
 - ONNX Runtime
 - OpenSSL
 - libslz

## Documentation

The HAProxy documentation has been split into a number of different files for
ease of use. It is available in text format as well as HTML. The wiki is also meant to replace the old architecture
guide.

- [HTML documentation](http://docs.haproxy.org/)
- [HTML HAProxy LUA API Documentation](https://www.arpalert.org/haproxy-api.html)
- [Wiki](https://github.com/haproxy/wiki/wiki)

Please refer to the following files depending on what you're looking for:

  - [INSTALL](INSTALL) for instructions on how to build and install HAProxy
  - [BRANCHES](BRANCHES) to understand the project's life cycle and what version to use
  - [LICENSE](LICENSE) for the project's license
  - [CONTRIBUTING](CONTRIBUTING) for the process to follow to submit contributions

The more detailed documentation is located into the doc/ directory:

  - [ doc/intro.txt ](doc/intro.txt) for a quick introduction on HAProxy
  - [ doc/configuration.txt ](doc/configuration.txt) for the configuration's reference manual
  - [ doc/lua.txt ](doc/lua.txt) for the Lua's reference manual
  - [ doc/SPOE.txt ](doc/SPOE.txt) for how to use the SPOE engine
  - [ doc/network-namespaces.txt ](doc/network-namespaces.txt) for how to use network namespaces under Linux
  - [ doc/management.txt ](doc/management.txt) for the management guide
  - [ doc/regression-testing.txt ](doc/regression-testing.txt) for how to use the regression testing suite
  - [ doc/peers.txt ](doc/peers.txt) for the peers protocol reference
  - [ doc/coding-style.txt ](doc/coding-style.txt) for how to adopt HAProxy's coding style
  - [ doc/internals ](doc/internals) for developer-specific documentation (not all up to date)

## License

HAProxy está licenciado bajo [GPL 2](doc/gpl.txt) o cualquier versión siguiente, los headers bajo [LGPL 2.1](doc/lgpl.txt). Lee
[LICENSE](LICENSE) para una explicación más detallada.
Los cambios realizados por nosotros caen bajo la licencia [GPL 3](docs/gpl3.txt).
