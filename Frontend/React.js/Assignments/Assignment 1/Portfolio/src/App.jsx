import './App.css';
import Header from "./Components/Header";
import Hero from './Components/Hero';
import About from './Components/About';
import Projects from './Components/Projects';
import Skills from './Components/Skills';
import Contact from './Components/Contact';
import Footer from './Components/Footer';

const App = () => {
	return (
        <>
            <Header />
            <section id='hero'><Hero /></section>
            <section id='about'><About /></section>
            <section id='projects'><Projects /></section>
            <section id='skills'><Skills /></section>
            <section id='contact'><Contact /></section>
            <Footer />
        </>
    );
};

export default App;
