import SuperAdImg from '../assets/discount_ad.webp';
import womenSectionAdImg from '../assets/heropage_girl.webp';
import menSectionADImg from '../assets/heropage_boy.webp';
import leftBannerAd from '../assets/heropage_ad_left.webp';
import middleBannerAd from '../assets/heropage_ad_middle.webp';
import rightBannerAd from '../assets/heropage_ad_right.webp';
import bankAdImg from '../assets/heropage_bank_ads.gif';

const Hero = () => {
	return (
        <div className='w-full'>
            <div>
                <img className='max-w-full' src={SuperAdImg} alt="" />
            </div>
            <div className='flex'>
                <img className='max-w-1/2' src={womenSectionAdImg} alt="" />
                <img className='max-w-1/2' src={menSectionADImg} alt="" />
            </div>
            <div className='w-full flex items-center '>
                <img className='w-1/3' src={leftBannerAd} alt="" />
                <img className='w-1/3' src={middleBannerAd} alt="" />
                <img className='w-1/3' src={rightBannerAd} alt="" />
            </div>
            <div>
                <img className='w-full' src={bankAdImg} alt="" />
            </div>
        </div>
    )
};

export default Hero;
