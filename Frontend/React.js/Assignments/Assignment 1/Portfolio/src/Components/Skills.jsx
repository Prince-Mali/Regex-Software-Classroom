const Skills = () => {
	return (
        <div className="w-full bg-[#f5eee6] py-20">
            <div className="px-6 mx-auto max-w-6xl">
                <h1 className="text-center text-3xl font-bold text-[#213454] mb-10">Skills</h1>

                <div className="grid grid-cols-2 md:grid-cols-4 gap-6 text-center">
                    <div className="bg-white p-4 shadow"><p>HTML</p></div>
                    <div className="bg-white p-4 shadow"><p>CSS</p></div>
                    <div className="bg-white p-4 shadow"><p>JavaScript</p></div>
                    <div className="bg-white p-4 shadow"><p>React.js</p></div>
                    <div className="bg-white p-4 shadow"><p>Node.js</p></div>
                    <div className="bg-white p-4 shadow"><p>Express.js</p></div>
                    <div className="bg-white p-4 shadow"><p>Tailwind CSS</p></div>
                    <div className="bg-white p-4 shadow"><p>MongoDB</p></div>
                    <div className="bg-white p-4 shadow"><p>Git & GitHub</p></div>
                </div>
            </div>
        </div>
    )
};

export default Skills;
