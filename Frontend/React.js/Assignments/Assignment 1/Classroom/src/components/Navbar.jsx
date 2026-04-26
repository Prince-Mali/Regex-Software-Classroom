import { FaBars, FaPlus } from "react-icons/fa";
import homeLogo from '../assets/Home logo.png';
import { TbGridDots } from "react-icons/tb";
import profileImg from '../assets/Prince.jpg';

const Navbar = () => {
	return (
        <div className="w-full flex justify-between items-center py-3 px-10 text-xl bg-[#f7fcff]">
            <div className="flex items-center gap-4">
                <FaBars />
                <div className="flex items-center gap-2">
                    <img className="h-8" src={homeLogo} alt="" />
                    <p>Classroom</p>
                </div>
            </div>
            <div className="flex items-center gap-4">
                <FaPlus />
                <TbGridDots />
                <div className="border-3 rounded-full border-t-red-600 border-r-blue-600 border-b-green-600 border-l-yellow-500">
                    <img className="h-10 rounded-full" src={profileImg} alt="" />
                </div>
            </div>
        </div>
    )
};

export default Navbar;
