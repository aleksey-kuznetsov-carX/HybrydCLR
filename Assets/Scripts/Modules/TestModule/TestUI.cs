using Modules.TestModule_2;
using Modules.TestModule_3;
using TMPro;
using UnityEngine;
using Zenject;

namespace Modules.TestModule
{
	public sealed class TestUI : MonoBehaviour
	{
		[SerializeField] private TMP_Text _resultText;
		private TestSystem _testSystem;
		private TestSystem_2 _testSystem2;
		private TestSystem_3 _testSystem3;

		[Inject]
		private void Construct(TestSystem testSystem, TestSystem_2 testSystem2,  TestSystem_3 testSystem3)
		{
			_testSystem3 = testSystem3;
			_testSystem2 = testSystem2;
			_testSystem = testSystem;
		}
		
		private void Start()
		{
			_resultText.text = _testSystem2.GetSum(2, 5).ToString();
			Debug.Log(_testSystem3.GetSum(2, 5).ToString());
		}
	}
}