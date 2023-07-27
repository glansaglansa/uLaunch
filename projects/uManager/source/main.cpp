#include <ul/man/ui/ui_MainApplication.hpp>

ul::man::ui::MainApplication::Ref g_MainApplication;

int main() {
    auto renderer_opts = pu::ui::render::RendererInitOptions(SDL_INIT_EVERYTHING, pu::ui::render::RendererHardwareFlags);
    renderer_opts.UseImage(pu::ui::render::IMGAllFlags);
    renderer_opts.UseTTF();
    renderer_opts.SetExtraDefaultFontSize(35);
    renderer_opts.UseRomfs();
    auto renderer = pu::ui::render::Renderer::New(renderer_opts);

    g_MainApplication = ul::man::ui::MainApplication::New(renderer);
    g_MainApplication->Prepare();
    g_MainApplication->ShowWithFadeIn();

    return 0;
}