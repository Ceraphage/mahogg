#pragma once

#include "Engine/Core/Core.h"
#include "Engine/Core/Layer.h"
#include <vector>

namespace Engine
{
  class ENGINE_API LayerStack
  {
  public:
    LayerStack() = default;
    ~LayerStack();

    void PushLayer(Layer* layer);
    void PushOverlay(Layer* overlay);
    void PopLayer(Layer* layer);
    void PopOverlay(Layer* overlay);

    std::vector<Layer*>::iterator begin() { return m_Layers.begin(); }
    std::vector<Layer*>::iterator end() { return m_Layers.end(); }
  private:
    std::vector<Layer*> m_Layers;
    //std::vector<Layer*>::iterator m_LayerInsert;
    unsigned int m_LayerInsertIndex = 0;
  };
}

