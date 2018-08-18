
[@bs.module "./demo.js"] external range' : (int,int) => array(int) = "range";
let range : (int,int) => list(int) = (a,b) => range'(a,b) |> Array.to_list;

let r = range(0,2);
let rs = r |> List.map(string_of_int) |> String.concat(",");

Js.log("hi: " ++ rs);