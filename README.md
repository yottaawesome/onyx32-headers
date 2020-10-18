# onyx32-headers

## Introduction

This repo contains (or rather will contain) the shared interface definitions for the [Onyx32](https://github.com/yottaawesome/onyx32) dynamic library. The definitions are held separately because it's intended that the [Boring32](https://github.com/yottaawesome/boring32) static library will provide runtime implementations of these interfaces, thus allowing Onyx32 to use these static implementations without having to duplicate interface definitions and implementations. This allows Onyx32 and Boring32 to have a unified interface.

## Using this repo

These headers are only useful if you're intending to use the Onyx32 DLL. If you're using Boring32, you can just link directly to the Boring32 headers. To use the headers in your own project, you must define `ONYX32IMPORT` to create the correct macro that resolves to the `__declspec(dllimport)` directive.

## Status

Currently, only `ISemaphore` has been ported to this repo as a (successful) proof of concept. The other headers will be ported as part of ongoing work.
