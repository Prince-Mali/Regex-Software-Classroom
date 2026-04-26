import Navbar from './components/Navbar';
import Hero from './components/Hero';
import Scroller from './components/Scroller';
import Footer from './components/Footer';
import Category from './components/Category';

const App = () => {
	return (
        <>
            <Navbar />
            <div className='bg-[#f5f5f5] py-4 px-8'>
                <Hero />
                <Scroller />
                <Category />
            </div>
            <Footer />
        </>
    )
};

export default App;
