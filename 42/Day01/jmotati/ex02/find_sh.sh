#!/bin/bash
basename $(find . -name "*.sh") | sed 's/.\{3\}$//'