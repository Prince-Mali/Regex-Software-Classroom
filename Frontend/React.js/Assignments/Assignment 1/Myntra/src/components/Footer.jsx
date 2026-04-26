import googlePlayImg from '../assets/google_play.png';
import appleStoreImg from '../assets/apple_store.png';

import fbIconImg from '../assets/fb.png';
import twitterImg from '../assets/twitter.png';
import youtubeImg from '../assets/youtube.png';
import instagramImg from '../assets/insta.png';

import originalTagImg from '../assets/original-tag.png';
import returnWindowImg from '../assets/Return-Window-image.png';


const onlineShoppingLinks = ['Men', 'Women', 'Kids', 'Home', 'Beauty', 'Genz', 'Gift Cards', 'Myntra Insider'];

const usefulLinks = ['Blog', 'Careers', 'Site Map', 'Corporate Information', 'Whitehat', 'Cleartrip', 'Myntra Global'];

const customerPolicies = ['Contact Us', 'FAQ', 'T&C', 'Terms Of Use', 'Track Orders', 'Shipping', 'Cancellation', 'Returns', 'Privacy Policy', 'Grievance Redressal', 'FSSAI Food Safety', 'Connect app'];

const popularSearches = ['Makeup', 'Dresses For Girls', 'T-Shirts', 'Sandals', 'Headphones', 'Babydolls', 'Blazers For Men', 'Handbags', 'Ladies Watches', 'Bags', 'Sport Shoes', 'Reebok Shoes', 'Puma Shoes', 'Boxers', 'Makeup', 'Dresses For Girls', 'T-Shirts', 'Sandals', 'Headphones', 'Babydolls', 'Blazers For Men', 'Handbags', 'Ladies Watches', 'Bags', 'Sport Shoes', 'Reebok Shoes', 'Puma Shoes', 'Boxers', 'Makeup', 'Dresses For Girls', 'T-Shirts', 'Sandals', 'Headphones', 'Babydolls', 'Blazers For Men', 'Handbags', 'Ladies Watches', 'Bags', 'Sport Shoes', 'Reebok Shoes'];

const Footer = () => {
	return (
        <div className='w-full px-30 py-16'>
            <div className='w-full flex justify-between mb-4'>
                <div>
                    <div className='mb-4'>
                        <h3 className='font-bold text-sm mb-2'>ONLINE SHOPPING</h3>
                        {
                            onlineShoppingLinks.map((link, idx) => (
                                <p className='font-light' key={idx}>{link}</p>
                            ))
                        }
                    </div>
                    <div>
                        <h3 className='font-bold text-sm mb-2'>USEFUL LINKS</h3>
                        {
                            usefulLinks.map((link, idx) => (
                                <p className='font-light' key={idx}>{link}</p>
                            ))
                        }
                    </div>
                </div>

                <div>
                    <h3 className='font-bold text-sm mb-2'>CUSTOMER POLICIES</h3>
                    {
                        customerPolicies.map((link, idx) => (
                            <p className='font-light' key={idx}>{link}</p>
                        ))
                    }
                </div>
                <div>
                    <div className='mb-4'>
                        <h3 className='font-bold text-sm mb-2'>EXPERIENCE MYNTRA APP ON MOBILE</h3>
                        <div className='flex gap-2'>
                            <img className='w-30' src={googlePlayImg} alt="" />
                            <img className='w-30' src={appleStoreImg} alt="" />
                        </div>
                    </div>
                    <div>
                        <h3 className='font-bold text-sm mb-2'>KEEP IN TOUCH</h3>
                        <div className='flex gap-4'>
                            <img className='h-6' src={fbIconImg} alt="" />
                            <img className='h-6' src={twitterImg} alt="" />
                            <img className='h-6' src={youtubeImg} alt="" />
                            <img className='h-6' src={instagramImg} alt="" />
                        </div>
                    </div>
                </div>
                <div className='flex flex-col gap-4'>
                    <div className='flex gap-2'>
                        <img className='w-12' src={originalTagImg} alt="" />
                        <p className='font-light'>100% ORIGINAL guarntee for<br />all products at myntra.com</p>
                    </div>
                    <div className='flex gap-2'>
                        <img className='w-12' src={returnWindowImg} alt="" />
                        <p className='font-light'>Return within 14days of<br />receiving your order</p>
                    </div>
                </div>
            </div>

            <div className='w-full'>
                <div className='w-full'>
                    <h3 className='font-bold text-sm mb-2'>POPULAR SEARCHES</h3>
                    <div className='flex justify-start gap-2 flex-wrap'>
                        {
                            popularSearches.map((link, idx) => (
                                <p className={`font-light ${popularSearches.length-1 != idx ? "after:content-['|'] after:ml-2" : ""}`} key={idx}>{link}</p>
                            ))
                        }
                    </div>
                </div>
                <div className='font-light flex justify-between my-6'>
                    <p>In case of any concern, <span className='text-[#0062ff] font-bold'>Contact Us</span></p>
                    <p>© 2025 www.myntra.com. All rights reserved.</p>
                    <p>A Flipkart company</p>
                </div>
            </div>
        </div>
    )
};

export default Footer;
