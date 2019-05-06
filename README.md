<h1>Recommendation System(Graph Theory)</h1>

<h3>Is this thing going to recommend something usefull?</h3>
  <p>Ans:NO!</p>
  <hr />
<h3>About</h3>
  <p>Given an undirected graph, 
  we can determine if the graph can be colored with at most m(Chromatic number) 
  colors such that no two adjacent vertices of the graph are colored with same color aka <b>M-coloring problem</b>. 
  Here coloring of a graph means assignment of colors to all vertices.
  Let's take a look at the following picture:-
  </p>
  
  ![chromatic](https://user-images.githubusercontent.com/35224521/57229742-72508280-7034-11e9-85fc-a3abd87bf1be.PNG)
  
  <p>Here every colored vertex represents a users in a social network & edges represent virtual friendship.<br />
     As you can see there's no direct edge between 'a' and 'd' but they have a common friend 'c'. Now running the code
     we get a colored graph thus we can simply recommend same colored vertex to pop up in their recommendation sections.
  </p>
  
  <hr />
