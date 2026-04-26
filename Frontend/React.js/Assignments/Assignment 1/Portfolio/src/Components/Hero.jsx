import {Link} from 'react-scroll';
import Resume from '../assets/Resume.pdf';

const Hero = () => {
	return (
        <div className="w-full h-screen bg-[#3d5778] text-white flex justify-center items-center text-center px-6">
            <div>
                <h1 className="text-4xl md:text-6xl font-bold mb-4">Hi, I'm Prince Mali</h1>
                <p className="text-lg md:text-xl max-w-xl mx-auto">Frontend Developer passionate about building modern, user-friendly web applications.</p>

                <div className="mt-8 flex flex-col sm:flex-row gap-4 justify-center">
                    <Link to='projects' className="bg-[#d9c5b6] text-[#3d5778] px-6 py-3 rounded-lg font-semibold hover:bg-[#F5EFE7] transition cursor-pointer">View My Work</Link>

                    <a download={`Resume.pdf`} href={`${Resume}`} className="border-2 border-[#d9c5b6] text-white px-6 py-3 rounded-lg font-semibold hover:bg-[#d9c5b6] hover:text-[#3d5778] transition cursor-pointer">Download Resume</a>
                </div>
            </div>
        </div>
    )
};

export default Hero;
