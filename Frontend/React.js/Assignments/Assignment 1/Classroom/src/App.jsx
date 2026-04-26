import Content from "./components/Content";
import Navbar from "./components/Navbar";
import Sidebar from "./components/Sidebar";


const App = () => {
	return (
		<>
			<Navbar />
			<div className="w-full max-h-[90vh] flex justify-start gap-0.5 bg-[#f7f9fc]">
				<Sidebar />
				<Content />
			</div>
		</>
	)
};

export default App;
