#include "Renderer.hpp"

Renderer::Renderer()
{

}

Renderer::~Renderer()
{

}

void Renderer::Draw(const VAO &vao, const EBO& ebo, const Shader& shader) const
{
	vao.bind();
	ebo.bind();
	shader.use();
	glDrawElements(GL_TRIANGLES, ebo.total_elements, GL_UNSIGNED_INT, 0);
	ebo.unbind();
	vao.unbind();
}

void Renderer::Draw(const VAO &vao, const EBO& ebo, const Texture &texture, const Shader& shader) const
{
	vao.bind();
	ebo.bind();
	shader.use();
	texture.bind();
	glDrawElements(GL_TRIANGLES, ebo.total_elements, GL_UNSIGNED_INT, 0);
	ebo.unbind();
	vao.unbind();
}
