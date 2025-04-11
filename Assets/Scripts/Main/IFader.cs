using UnityEngine.UI;

public interface IFader {
	void FadeIn(Image whatToFade, float seconds);

	void FadeOut(Image whatToFade, float seconds);
}