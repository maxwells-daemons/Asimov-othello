#!/bin/bash
cd "$(dirname "$0")"
LD_LIBRARY_PATH=./asimov-ml_final_build ./asimov-ml_final_build/asimov $1
