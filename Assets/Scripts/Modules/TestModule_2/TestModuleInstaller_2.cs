using Zenject;

namespace Modules.TestModule_2
{
	public sealed class TestModuleInstaller_2 : Installer<TestModuleInstaller_2>
	{
		public override void InstallBindings()
		{
			Container.Bind<TestSystem_2>().AsSingle();
		}
	}
}