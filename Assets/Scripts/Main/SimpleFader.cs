using DG.Tweening;
using UnityEngine.UI;

public class SimpleFader : IFader {
	private static SimpleFader _instance;

	public static SimpleFader Instance {
		get {
			if (_instance == null) {
				_instance = new SimpleFader();
			}

			return _instance;
		}
	}

	public void FadeIn(Image whatToFade, float seconds) {
		whatToFade.DOFade(1, seconds);
	}

	public void FadeOut(Image whatToFade, float seconds) {
		whatToFade.DOFade(0, seconds);
	}
}