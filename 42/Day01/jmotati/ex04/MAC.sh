#!/bin/bash 
ifconfig -a link | grep "ether" | cut -b 8-24