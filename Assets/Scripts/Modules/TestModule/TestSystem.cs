
using JetBrains.Annotations;

namespace Modules.TestModule
{
	[UsedImplicitly]
	public sealed class TestSystem
	{
		public int GetSum(int a, int b)
		{
			return a * b;
		}
	}
}