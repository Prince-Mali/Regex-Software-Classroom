
const Projects = () => {
	return (
        <div className="bg-[#d9c5b6] w-full py-20">
            <div className="max-w-6xl mx-auto px-6">

                <h1 className="text-3xl font-bold text-[#213454] text-center mb-10">Projects</h1>

                <div className="grid md:grid-cols-3 gap-8">
                    <div className="p-6 bg-white rounded-lg shadow">
                        <h2 className="text-xl font-semibold">New Bharat Footwear</h2>
                        <p className="mt-1">E-commerce website with authentication and payments.</p>
                    </div>
                    <div className="p-6 bg-white rounded-xl shadow">
                        <h2 className="text-xl font-semibold">Wanderlust</h2>
                        <p className="mt-1">Airbnb clone with listings and booking flow.</p>
                    </div>
                    <div className="p-6 bg-white rounded-xl shadow">
                        <h2 className="text-xl font-semibold">portfolio Website</h2>
                        <p className="mt-1">Personal portfolio built with modern UI.</p>
                    </div>
                </div>
            </div>
        </div>
    )
};

export default Projects;