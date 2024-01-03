import React from "react";
import { useSelector, useDispatch } from "react-redux";
import { removeToDo } from "../feautures/ToDo/ToDoSlice";

export default function Todos() {
  const todos = useSelector((state) => state.todos);
  const dispatch = useDispatch();

  return (
    <div className="bg-white-500">
      <div>
        {todos.map((todo) => (
          <div key={todo.id} className="flex gap-x-60">
            <li className="list-none text-2xl w-10">{todo.text}</li>
            <button
              onClick={() => dispatch(removeToDo(todo.id))}
              className="text-red-600 shadow-md text-2xl"
            >
              X
            </button>
          </div>
        ))}
      </div>
    </div>
  );
}
