
const Contact = () => {
	return (
        <div className="w-full py-20 bg-[#d9c5b6]">
            <div className="max-w-6xl px-6 mx-auto">
                <h1 className="text-center text-3xl font-bold text-[#213454] mb-6">Contact</h1>
                <p className="text-center text-lg font-light text-[#213454] mb-6">Feel free to reach out for collaboration, opportunities, or just a friendly hello 👋</p>
                <div className="flex flex-col gap-2 md:flex-row md:justify-evenly md:items-center text-center ">
                    <div className="bg-white py-6 px-8 rounded-lg">
                        <h3 className="text-xl font-semibold mb-2">📞 Phone</h3>
                        <p>+91 9468722453</p>
                    </div>
                    <div className="bg-white py-6 px-8 rounded-lg">
                        <h3 className="text-xl font-semibold mb-2">📧 Email</h3>
                        <a href='mailto:maliprince909@gmail.com'>maliprince909@gmail.com</a>
                    </div>
                    <div className="bg-white py-6 px-8 rounded-lg">
                        <h3 className="text-xl font-semibold mb-2">💼 LinkedIn</h3>
                        <a href="https://www.linkedin.com/in/princemali909">princemali909</a>
                    </div>
                    <div className="bg-white py-6 px-8 rounded-lg">
                        <h3 className="text-xl font-semibold mb-2">💻 GitHub</h3>
                        <a href="https://github.com/Prince-Mali">Prince-Mali</a>
                    </div>
                </div>
            </div>
        </div>
    )
};

export default Contact;
