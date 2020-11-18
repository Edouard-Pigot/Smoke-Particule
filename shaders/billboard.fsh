varying vec4 uv;
uniform sampler2D texture;
uniform float elapsed;
uniform vec3 color;

uniform vec2 tilePosition;

const float tilesWidth = 4.0;
const float tilesHeight = 4.0;

const float scaleX = 1.0 / tilesWidth;
const float scaleY = 1.0 / tilesHeight;

void main() {
    gl_FragColor = texture2D(texture, uv.st * (1.0/tilesHeight) + vec2((1.0/tilesWidth) * tilePosition.x,(1.0/tilesHeight) * tilePosition.y)) * vec4(color, elapsed);
}
