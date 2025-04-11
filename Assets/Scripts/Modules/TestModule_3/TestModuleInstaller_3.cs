using Zenject;

namespace Modules.TestModule_3
{
	public sealed class TestModuleInstaller_3 : Installer<TestModuleInstaller_3>
	{
		public override void InstallBindings()
		{
			Container.Bind<TestSystem_3>().AsSingle();
		}
	}
}