import {Link} from 'react-scroll';

const Header = () => {
	return (
        <nav className='fixed w-full bg-[#213555] text-white shadow z-50 flex justify-between mx-auto px-6 py-4'>

            <h2 className='text-xl font-semibold'>Prince Mali</h2>

            <div className="flex">
                <ul className='flex gap-6'>
                    <li className='cursor-pointer hover:text-[#D8C4B6]'><Link to="hero" >Home</Link></li>
                    <li className='cursor-pointer hover:text-[#D8C4B6]'><Link to="about">About</Link></li>
                    <li className='cursor-pointer hover:text-[#D8C4B6]'><Link to="projects">Projects</Link></li>
                    <li className='cursor-pointer hover:text-[#D8C4B6]'><Link to="skills">Skills</Link></li>
                    <li className='cursor-pointer hover:text-[#D8C4B6]'><Link to="contact">Contact</Link></li>
                </ul>
            </div>
        </nav>
    )
};

export default Header;
