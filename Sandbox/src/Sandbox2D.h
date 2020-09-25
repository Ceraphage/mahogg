#pragma once

#include "Engine.h"

class Sandbox2D : public Engine::Layer
{
public:
  Sandbox2D();
  virtual ~Sandbox2D() = default;
  virtual void OnAttach() override;
  virtual void OnDetach() override;
  void OnUpdate(Engine::Timestep dt) override;
  virtual void OnImGuiRender() override;
  void OnEvent(Engine::Event& event) override;
private:
  Engine::OrthographicCameraController m_CameraController;

  // Temp
  Engine::Ref<Engine::VertexArray> m_SquareVA;
  Engine::Ref<Engine::Shader> m_FlatColorShader;
  Engine::Ref<Engine::Texture2D> m_CheckerboardTexture;

  //struct ProfileResult
  //{
  //  const char* _name;
  //  float _time;
  //};
  //std::vector<ProfileResult> m_ProfileResults;

  glm::vec4 m_SquareColor = { 0.2f, 0.3f, 0.8f, 1.0f };
};

