
#ifdef KORE_G4

#include "pch.h"

#include "Graphics.h"

#include <limits>

using namespace Kore;

namespace {
	int samples = 1;
	bool window = true;
}

#if !defined(KORE_WINDOWS) && !defined(KORE_METAL)
void Graphics4::setup() {}
#endif

int Graphics4::antialiasingSamples() {
	return ::samples;
}

void Graphics4::setAntialiasingSamples(int samples) {
	::samples = samples;
}

bool Graphics4::hasWindow() {
	return ::window;
}

void Graphics4::setWindow(bool value) {
	::window = value;
}

bool Kore::Graphics4::fullscreen = false;

void Graphics4::setFloat2(ConstantLocation position, vec2 value) {
	setFloat2(position, value.x(), value.y());
}

void Graphics4::setFloat3(ConstantLocation position, vec3 value) {
	setFloat3(position, value.x(), value.y(), value.z());
}

void Graphics4::setFloat4(ConstantLocation position, vec4 value) {
	setFloat4(position, value.x(), value.y(), value.z(), value.w());
}

void Graphics4::setVertexBuffer(VertexBuffer& vertexBuffer) {
	VertexBuffer* vertexBuffers[1] = {&vertexBuffer};
	setVertexBuffers(vertexBuffers, 1);
}

#endif
