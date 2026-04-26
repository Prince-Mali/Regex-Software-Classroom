import { TbUserSquare } from "react-icons/tb";
import { BiFolder } from "react-icons/bi";
import { BsThreeDotsVertical } from "react-icons/bs";


const classes = [
    {
        batch: "REACT BATCH- R",
        institute: "REGex Software",
    },
    {
        batch: "Advanced CPP - 4",
        institute: "REGex Software"
    },
    {
        batch: "Intermediate CPP - 6",
        institute: "REGex Software"
    },
    {
        batch: "BEGINNER CPP - 11",
        institute: "REGex Software"
    },
    {
        batch: "BEGINNER CPP - 12",
        institute: "REGex Software"
    },
    {
        batch: "Frontend BATCH - L",
        institute: "REGex Software"
    },
    {
        batch: "C Logical Batch - 46",
        institute: "REGex Software"
    }
];


const Content = () => {
	return (
        <div className="rounded-tl-4xl h-[90vh] overflow-y-scroll bg-white w-full p-6">
            <div className="grid grid-cols-3 gap-4 w-fit">
                {
                    classes.map((batch, idx) => (
                        <div className="w-[20vw] h-75 rounded-2xl border relative flex flex-col justify-between" key={idx}>
                            <div className={`rounded-t-2xl border-b p-5 bg-[url('assets/classroom-background.jpg')] bg-cover bg-center text-white`}>
                                <h3 className="text-2xl mb-1">{batch.batch}</h3>
                                <p className="text-sm font-[450]">{batch.institute}</p>
                            </div>
                            <p className="bg-[#679e37] text-white font-light text-5xl rounded-full p-2 w-15 h-15 flex items-center justify-center absolute top-15 right-4">R</p>
                            <div className="flex justify-end border-t gap-2 px-3 py-2 text-xl">
                                <div className="hover:bg-slate-200 p-2 rounded-full cursor-pointer"><TbUserSquare /></div>
                                <div className="hover:bg-slate-200 p-2 rounded-full cursor-pointer"><BiFolder /></div>
                                <div className="hover:bg-slate-200 p-2 rounded-full cursor-pointer"><BsThreeDotsVertical /></div>
                            </div>
                        </div>
                    ))
                }
            </div>
        </div>
    )
};

export default Content;
