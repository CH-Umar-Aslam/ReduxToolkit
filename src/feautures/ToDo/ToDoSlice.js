import { createSlice, nanoid } from "@reduxjs/toolkit";
const initialState = {
    todos: [
        {
            id: 10,
            text: "Umar"
        }
    ]
}

export const ToDoSlice = createSlice({
    name: 'todo',
    initialState,
    reducers: ({
        addToDo: (state, action) => {
            const todo = {
                id: nanoid(),
                text: action.payload
            }
            state.todos.push(todo);
        },
        removeToDo: (state, action) => {
            state.todos = state.todos.filter((prev) => prev.id !== action.payload)
        }

    })
});

export const { addToDo, removeToDo } = ToDoSlice.actions;
export default ToDoSlice.reducer