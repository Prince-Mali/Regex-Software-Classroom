import PrinceImage from '../assets/Prince.jpg';

const About = () => {
	return (
		<div className="py-20 bg-[#f5eee6]">
			<div className='max-w-6xl mx-auto px-6 text-center md:text-left md:flex items-center gap-10'>
				<div className='md:w-1/2'>
					<h3 className="text-3xl font-bold mb-4">About Me</h3>
					<p className="text-lg">
						I'm a frontend developer skilled in HTML, CSS, JavaScript,
						React, and Tailwind CSS. I love building clean UI, solving
						problems, and continuously learning new technologies.
					</p>
				</div>
				<div className='md:w-1/2 mt-8 md:mt-0'>
					<div className="w-48 h-48 bg-accent rounded-full mx-auto">
						<img className="rounded-full" src={`${PrinceImage}`} />
					</div>
				</div>
			</div>
		</div>
	);
};

export default About;
