# Calls

A phone dialer and call handler.

## License

Calls is licensed under the GPLv3+.

## Dependencies

    sudo apt-get install libgtk-3-dev libhandy-0.0-dev

## Building

We use the meson and thereby Ninja.  The quickest way to get going is
to do the following:

    meson ../calls-build
    ninja -C ../calls-build
    ninja -C ../calls-build install


## Running
Calls depends on oFono Modem objects being present on D-Bus.  To run
oFono with useful output:

    sudo OFONO_AT_DEBUG=1 ofonod -n -d

The test programs within the [oFono source
tree](https://git.kernel.org/pub/scm/network/ofono/ofono.git) are
useful to bring up a modem to a suitable state.  For example:

    cd $OFONO_SOURCE/test
    ./list-modems
    ./enable-modem /sim7100
    ./online-modem /sim7100

Then run Calls:

    cd $CALLS_SOURCE
    ../calls-build/src/calls


### Phonesim
One can also make use of the modem simulator, phonesim (in the
ofono-phonesim package in Debian):

    ofono-phonesim -p 12345 -gui /usr/local/share/phonesim/default.xml

then, ensuring /etc/ofono/phonesim.conf has appropriate contents like:

    [phonesim]
    Address=127.0.0.1
    Port=12345

run oFono as above, then:

    cd $OFONO_SOURCE/test
    ./enable-modem /phonesim
    ./online-modem /phonesim

And again run Calls.
