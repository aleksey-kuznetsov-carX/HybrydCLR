using System.Linq;

namespace Banners
{
	public interface IBannerFactory
	{
		public BannerType Type { get; }
		public IBanner Create();
		
		public void Remove();
	}

	public abstract class BannerFactory<T> : IBannerFactory where T : IBanner
	{
		public abstract BannerType Type { get; }

		public abstract IBanner Create();
		
		public abstract void Remove();
	}

	public sealed class CarBannerFactory : BannerFactory<BannerCar>
	{
		public override BannerType Type { get; }

		public override IBanner Create()
		{
			throw new System.NotImplementedException();
		}

		public override void Remove()
		{
			throw new System.NotImplementedException();
		}
	}

	public sealed class PartBannerFactory : BannerFactory<BannerPart>
	{
		public override BannerType Type { get; }

		public override IBanner Create()
		{
			throw new System.NotImplementedException();
		}

		public override void Remove()
		{
			throw new System.NotImplementedException();
		}
	}


	public interface IBanner
	{
		public void Activate();
	}

	
	public sealed class BannerCar : IBanner
	{
		

		public void Activate()
		{
			
		}
	}

	public sealed class BannerPart : IBanner
	{
		
		public void Activate()
		{
			
		}
	}
	public enum BannerType
	{
		Car,
		Part
	}
}
