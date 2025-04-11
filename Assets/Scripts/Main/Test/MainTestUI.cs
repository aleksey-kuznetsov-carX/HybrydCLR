using TMPro;
using UnityEngine;

namespace Main.Test
{
	public sealed class MainTestUI : MonoBehaviour
	{
		[SerializeField] private TMP_Text _resultText;
		private Calculator m_calculator;
		
		private void Start()
		{
			m_calculator = new Calculator();
			_resultText.text = m_calculator.GetSum(200, 900).ToString();
			//https://gitee.com/focus-creative-games/hybridclr
			//https://gitee.com/focus-creative-games/il2cpp_plus
		}
	}
}