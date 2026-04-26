import Logo from '../assets/logo.png';
import { FaRegUser, FaRegHeart, FaShoppingBag } from "react-icons/fa";
import { IoIosSearch } from "react-icons/io";

const NavLinks = ["MEN", "WOMEN", "KIDS", "HOME", "BEAUTY", "GENZ", "STUDIO"];

const Navbar = () => {

	return (
        <div className='sticky top-0 w-full h-20 flex justify-between items-center gap-6 px-8 py-2 bg-white z-9999'>
            <div className='flex gap-6 max-w-1/2'>
                <img src={`${Logo}`} />

                <div className='flex gap-6 items-center'>
                    {
                        NavLinks.map((link, idx) => (
                            <div key={idx}>
                                <p className='font-semibold text-sm hover:border-b-2'>
                                    {
                                        (link == 'STUDIO') ?
                                        <>
                                            {link}<sup className='text-pink-500'>NEW</sup>
                                        </>
                                        :
                                        link
                                    }
                                </p>
                            </div>
                        ))
                    }
                </div>
            </div>
            <div className='flex justify-evenly items-center gap-8 max-w-1/2'>
                <div className='w-[25vw] flex justify-start items-center rounded-lg bg-gray-200 px-4 py-1 gap-2'>
                    <IoIosSearch />
                    <input className='w-full text-sm px-2 py-2 outline-0' type="text" placeholder='Search for products, brand' />
                </div>
                <div>
                    <p className='flex items-center font-semibold hover:border-b-2 gap-1'><FaRegUser />Profile</p>
                </div>
                <div>
                    <p className='flex items-center font-semibold hover:border-b-2 gap-1'><FaRegHeart />Wishlist</p>
                </div>
                <div>
                    <p className='flex items-center font-semibold hover:border-b-2 gap-1'><FaShoppingBag />Bag</p>
                </div>
            </div>
        </div>
    )
};

export default Navbar;
