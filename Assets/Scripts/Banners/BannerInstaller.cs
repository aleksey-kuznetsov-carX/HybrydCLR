using Zenject;

namespace Banners
{
	public sealed class BannerInstaller : Installer<BannerInstaller>
	{
		public override void InstallBindings()
		{
			Container.BindInterfacesAndSelfTo<BannerSystem>()
				.AsSingle()
				.NonLazy();
			
			Container.BindInterfacesAndSelfTo<CarBannerFactory>()
				.AsSingle()
				.NonLazy();
			
			Container.BindInterfacesAndSelfTo<PartBannerFactory>()
				.AsSingle()
				.NonLazy();
		}
	}
}