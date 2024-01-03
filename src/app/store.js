import { configureStore } from "@reduxjs/toolkit";
import ToDoReducer from "../feautures/ToDo/ToDoSlice";
export const store = configureStore({
    reducer: ToDoReducer
});