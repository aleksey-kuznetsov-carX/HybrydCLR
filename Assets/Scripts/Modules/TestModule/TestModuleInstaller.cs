
using Modules.TestModule_2;
using Modules.TestModule_3;
using Zenject;

namespace Modules.TestModule
{
	public sealed class TestModuleInstaller : MonoInstaller
	{
		public override void InstallBindings()
		{
			TestModuleInstaller_2.Install(Container);
			TestModuleInstaller_3.Install(Container);
			Container.Bind<TestSystem>().AsSingle();
		}
	}
}