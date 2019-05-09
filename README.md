<h1>Recommendation System(Graph Theory)</h1>

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
  <h3>Snapshots from code</h3>
  
    <p>Main Screen</p>
    
   ![main](https://user-images.githubusercontent.com/35224521/57433743-dd799f00-7256-11e9-8f40-cc52356e620f.PNG)
   
   <br />
   <p>Screen 2 </p>
   
   ![size](https://user-images.githubusercontent.com/35224521/57433884-3ba68200-7257-11e9-9aec-279273d4ddb2.PNG)
   
   <br />
   <p>Screen 3</p>
   
   ![Users](https://user-images.githubusercontent.com/35224521/57434189-03ec0a00-7258-11e9-99aa-65b97db773a6.PNG)
   
   <br />
   <p>Screen 4</p>
   
   ![matrix](https://user-images.githubusercontent.com/35224521/57434070-b374ac80-7257-11e9-8ffa-c9dee108d01c.PNG)
   
   <br />
   <p>Outputs</p>
   
  ![cluster1](https://user-images.githubusercontent.com/35224521/57434383-7fe65200-7258-11e9-8f93-c3871ad20103.PNG)
  ![cluster2](https://user-images.githubusercontent.com/35224521/57434427-9391b880-7258-11e9-8402-ced92f8cd33a.PNG)      
  
  
  
  <hr />
 <h3>Project inspiration and resources</h3>
  <ul>
    <li>https://towardsdatascience.com/graph-based-recommendation-engine-for-amazon-products-1a373e639263</li>
    <li>https://www.geeksforgeeks.org/m-coloring-problem-backtracking-5/</li>
    <li>https://codepen.io/bartezic/pen/CKtog</li>
  </ul>
