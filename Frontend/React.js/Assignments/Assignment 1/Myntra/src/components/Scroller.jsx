import product1 from '../assets/brand_deal/product_1.webp';
import product2 from '../assets/brand_deal/product_2.webp';
import product3 from '../assets/brand_deal/product_3.webp';
import product4 from '../assets/brand_deal/product_4.webp';

import superSaverPoster from '../assets/brand_deal/super_saver_poster.webp';
import superSaverPoster2 from '../assets/brand_deal/super_saver_poster2.webp';

const products = [product1, product2, product3, product4, product1, product2, product3, product4, product1, product2, product3, product4, product1, product2, product3, product4];

const Scroller = () => {
	return (
        <div className='w-full'>
            <div className='w-full mb-2'>
                <img src={superSaverPoster} alt="" />
                <div className='overflow-hidden mt-2'>
                    <div style={{animation: 'scroll 25s linear infinite'}} className='flex animate-scroll w-full'>
                        {
                            products.map((item, idx) => (
                                <div className='min-w-1/6 ' key={idx}>
                                    <img className='w-full p-2' src={item} alt="" />
                                </div>
                            ))
                        }
                    </div>
                </div>
            </div>
            <div className='w-full py-1'>
                <img src={superSaverPoster2} alt="" />
                <div className='overflow-hidden mt-2'>
                    <div style={{animation: 'scroll 25s linear infinite'}} className='flex animate-scroll w-full'>
                        {
                            products.map((item, idx) => (
                                <div className='min-w-1/6 ' key={idx}>
                                    <img className='w-full p-2' src={item} alt="" />
                                </div>
                            ))
                        }
                    </div>
                </div>
            </div>
        </div>
    )
};

export default Scroller;
