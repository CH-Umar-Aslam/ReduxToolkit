import { useState } from "react";
import reactLogo from "./assets/react.svg";
import viteLogo from "/vite.svg";
import "./App.css";
import Todos from "./components/ToDo";
import AddTodo from "./components/AddToDo";

function App() {
  return (
    <div className="h-screen flex justify-center items-center flex-col">
      <h1>Redux Toolkit</h1>
      <AddTodo />
      <div className="mb-10"></div>
      <Todos />
    </div>
  );
}

export default App;
