import categoryPoster from '../assets/category/poster.webp';

import img1 from '../assets/category/img1.webp';
import img2 from '../assets/category/img2.webp';
import img3 from '../assets/category/img3.webp';
import img4 from '../assets/category/img4.webp';
import img5 from '../assets/category/img5.webp';
import img6 from '../assets/category/img6.webp';
import img7 from '../assets/category/img7.webp';
import img8 from '../assets/category/img8.webp';
import img9 from '../assets/category/img9.webp';
import img10 from '../assets/category/img10.webp';
import img11 from '../assets/category/img11.webp';
import img12 from '../assets/category/img12.webp';
import img13 from '../assets/category/img13.webp';
import img14 from '../assets/category/img14.webp';
import img15 from '../assets/category/img15.webp';
import img16 from '../assets/category/img16.webp';
import img17 from '../assets/category/img17.webp';
import img18 from '../assets/category/img18.webp';


const images = [img1, img2, img3, img4, img5, img6, img7, img8, img9, img10, img11, img12, img13, img14, img15, img16, img17, img18];

const Category = () => {
	return (
        <div className='my-2'>
            <img src={categoryPoster} alt="" />
            <div className='w-full grid grid-cols-[repeat(6,0fr)]'>
                {
                    images.map((img, idx) => (
                        <img className='min-w-[calc((100vw-5rem)/6)]' key={idx} src={img} alt="" />
                    ))
                }
            </div>
        </div>
    )
};

export default Category;
