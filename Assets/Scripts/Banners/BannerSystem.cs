using System.Collections.Generic;

namespace Banners
{
	public sealed class BannerSystem
	{
		private Dictionary<BannerType, IBannerFactory> m_bannersMap;

		public BannerSystem(IEnumerable<IBannerFactory> bannerFactories)
		{
			m_bannersMap = new Dictionary<BannerType, IBannerFactory>();
			foreach (IBannerFactory bannerFactory in bannerFactories)
			{
				m_bannersMap.Add(bannerFactory.Type, bannerFactory);
			}
		}

		public void SpawnBanner(BannerType type)
		{
			m_bannersMap[type].Create();
		}
	}
}