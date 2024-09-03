# ASDE_Prismforce_test
<h3>Question and solution of the test given for the ASDE role at Prismforce</h3>

<p>
  <h1>Question</h1>
  <h3>ASDE Algorithm Test</h3>

Imagine Abhimanyu in Chakravyuha. There are 11 circles in the Chakravyuha surrounded by different enemies. Abhimanyu is located in the innermost circle and has to cross all the 11 circles to reach Pandavas army back. 
 <br>
Given:
 <ol>
 <li>Each circle is guarded by different enemy where enemy is equipped with k1, k2……k11 powers. </li>
  <li>Abhmanyu start from the innermost circle with <em>p</em> power.</li> 
  <li>Abhimanyu has a boon to skip fighting enemy <em>a</em> times. </li>
  <li>Abhmanyu can recharge himself with power <em>b</em> times. </li>
  <li>Battling in each circle will result in loss of the same power from Abhimanyu as the enemy. </li>
  <li>If Abhmanyu enter the circle with energy less than the respective enemy, he will lose the battle. </li>
  <li> k3 and k7 enemies are endured with power to regenerate themselves once with half of their initial power and can attack Abhimanyu from behind if he is battling in iteratively next circle. </li>
 </ol>
 
<h4>Write an algorithm to find if Abhimanyu can cross the Chakravyuh and test it with two sets of test cases.</h4>

</p>
<p>
  <h1>Test Case</h1>
  <h3>Test Case 1</h3>



    Input:-

    3 2 32
    12 18 16 6 8 11 20 10 7 8 10

    where,
    no_of_boons = 3
    no_of_recharges = 2
    initial_power = 32
    enemy_power = {12, 18, 16, 6, 8, 11, 20, 10, 7, 8, 10}

    Output:-

    Yes, Abhimanyu can cross the Chakravyuh.




<h3>Test Case 2</h3>
    
    Input:-
    
    1 1 100
    45 70 55 90 60 85 75 110 95 120 80

    where,
    no_of_boons = 1
    no_of_recharges = 1
    initial_power = 100
    enemy_power[11] = {45, 70, 55, 90, 60, 85, 75, 110, 95, 120, 80};

    Output:-
    No, Abhimanyu cannot cross the Chakravyuh.


 
 
<h4>Write an algorithm to find if Abhimanyu can cross the Chakravyuh and test it with two sets of test cases.</h4>

</p>

