#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/michele/catkinect/src/intera_sdk/intera_examples"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/michele/catkinect/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/michele/catkinect/install/lib/python2.7/dist-packages:/home/michele/catkinect/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/michele/catkinect/build" \
    "/usr/bin/python" \
    "/home/michele/catkinect/src/intera_sdk/intera_examples/setup.py" \
    build --build-base "/home/michele/catkinect/build/intera_sdk/intera_examples" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/michele/catkinect/install" --install-scripts="/home/michele/catkinect/install/bin"
