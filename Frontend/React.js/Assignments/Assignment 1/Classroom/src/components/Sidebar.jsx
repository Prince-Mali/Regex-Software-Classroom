
import { CgHomeAlt } from "react-icons/cg";
import { SlCalender } from "react-icons/sl";
import { MdOutlineSchool } from "react-icons/md";
import { BsSave } from "react-icons/bs";
import { CiSettings } from "react-icons/ci";

const Sidebar = () => {
	return (
        <div className="flex flex-col items-baseline w-[25vw] px-6 gap-6 bg-[#f7f9fc]">
            <div className="min-w-full">
                <div className="flex items-center gap-6 px-6 py-3 rounded-3xl hover:bg-slate-200 min-w-full cursor-pointer">
                    <CgHomeAlt className="text-xl"/>
                    <p className="">Home</p>
                </div>
                <div className="flex items-center gap-6 px-6 py-3 rounded-3xl hover:bg-slate-200 min-w-full cursor-pointer">
                    <SlCalender className="text-xl"/>
                    <p>Calender</p>
                </div>
            </div>
            <div className="min-w-full">
                <div className="flex items-center gap-6 px-6 py-3 rounded-3xl hover:bg-slate-200 min-w-full cursor-pointer">
                    <MdOutlineSchool className="text-xl"/>
                    <p>Enrolled</p>
                </div>
            </div>
            <div className="min-w-full">
                <div className="flex items-center gap-6 px-6 py-3 rounded-3xl hover:bg-slate-200 min-w-full cursor-pointer">
                    <BsSave className="text-xl"/>
                    <p>Archived Classes</p>
                </div>
                <div className="flex items-center gap-6 px-6 py-3 rounded-3xl hover:bg-slate-200 min-w-full cursor-pointer">
                    <CiSettings className="text-xl"/>
                    <p>Settings</p>
                </div>
            </div>
        </div>
    )
};

export default Sidebar;
