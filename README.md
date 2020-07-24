# VSCode Containerized Development: C++ with CMake and Conan

> See [here](https://github.com/axel-op/vscode-containerdevelopment-cpp-vcpkg) for a similar example with vcpkg

This template demonstrates how to build and execute a C++ program inside a container.

All the C++ related VSCode extensions are defined in the [`devcontainer.json`](./.devcontainer/devcontainer.json) file and are automatically installed with the container.

## How to use it

You need to have [Visual Studio Code](https://code.visualstudio.com/) and the [Remote Development extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.vscode-remote-extensionpack) installed on your computer.

Open the `.cpp` file to debug, then press F5 to launch the instructions defined in [`launch.json`](./.vscode/launch.json).
