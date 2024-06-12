<h2><a href="https://www.geeksforgeeks.org/problems/maximum-tip-calculator2631/1">Maximum Tip Calculator</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p dir="ltr" style="line-height: 1.38; margin-top: 0pt; margin-bottom: 0pt;"><span style="font-size: 14pt; font-family: Arial, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor=""><span style="vertical-align: super;">In a restaurant, two waiters, <strong>A</strong> and <strong>B</strong>, receive n orders per day, earning tips as per arrays <strong>arr[i]</strong> and <strong>brr[i]</strong> respectively. If A takes the ith order, the tip is <strong>arr[i]</strong> rupees; if B takes it, the tip is <strong>brr[i]</strong> rupees.</span></span></p>
<p dir="ltr" style="line-height: 1.38; margin-top: 0pt; margin-bottom: 0pt;"><span style="font-size: 14pt; font-family: Arial, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor=""><span style="vertical-align: super;">To <strong>maximize </strong>total tips, they must distribute the orders such that:</span></span></p>
<ul>
<li><span style="font-size: 14pt;">A can handle at most <strong>x</strong> orders</span></li>
<li><span style="font-size: 14pt;">B can handle at most <strong>y </strong>orders</span></li>
</ul>
<p><span style="font-size: 14pt;"><span style="font-family: Arial, sans-serif; white-space-collapse: preserve;">Given that <strong>x + y ≥ n</strong>, all orders can be managed by either A or B. </span><strong style="font-family: Arial, sans-serif; white-space-collapse: preserve;">Return </strong><span style="font-family: Arial, sans-serif; white-space-collapse: preserve;">the <strong>maximum </strong>possible total tip after processing all the orders.</span></span></p>
<p><strong><span style="font-size: 14pt;"><span style="font-family: Arial, sans-serif; white-space-collapse: preserve;">Examples</span></span></strong></p>
<pre dir="ltr" style="line-height: 1.38; margin-top: 0pt; margin-bottom: 0pt;"><span style="font-size: 14pt;"><span style="font-family: Arial, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">Input: </span><span style="font-family: Arial, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">n = 5, x = 3, y = 3, arr = {1, 2, 3, 4, 5}, brr = {5, 4, 3, 2, 1}</span></span><br><span style="font-size: 14pt;"><span style="font-family: Arial, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">Output:</span><span style="font-family: Arial, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor=""> 21</span></span><br><span style="font-size: 14pt;"><span style="font-family: Arial, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">Explanation:</span><span style="font-family: Arial, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor=""> Person </span><span style="font-family: Arial, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">A</span><span style="font-family: Arial, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor=""> will serve the 3rd, 4th and 5th order while person </span><span style="font-family: Arial, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">B</span><span style="font-family: Arial, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor=""> will serve the rest so the total tip from A = 3+4+5 &amp; B = 5 + 4 i.e. 21. </span></span></pre>
<p dir="ltr" style="line-height: 1.38; margin-top: 0pt; margin-bottom: 0pt;">&nbsp;</p>
<pre dir="ltr" style="line-height: 1.38; margin-top: 0pt; margin-bottom: 0pt;"><span style="font-size: 14pt;"><span style="font-family: Arial, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">Input: </span><span style="font-family: Arial, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">n = 8, x = 4, y = 4, arr = {1, 4, 3, 2, 7, 5, 9, 6}, brr = {1, 2, 3, 6, 5, 4, 9, 8}</span></span><br><span style="font-size: 14pt;"><span style="font-family: Arial, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">Output:</span><span style="font-family: Arial, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor=""> 43</span></span><br><span style="font-size: 14pt;"><span style="font-family: Arial, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">Explanation:</span><span style="font-family: Arial, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor=""> Person A will serve 1st, 2nd, 5th and 6th order while Person B will serve the rest &amp; the total tip will be 43.</span></span></pre>
<p dir="ltr" style="line-height: 1.38; margin-top: 0pt; margin-bottom: 0pt;">&nbsp;</p>
<pre dir="ltr" style="line-height: 1.38; margin-top: 0pt; margin-bottom: 0pt;"><span style="font-size: 14pt;"><span style="font-family: Nunito, sans-serif; color: rgb(39, 50, 57); background-color: rgb(249, 249, 249); font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #d4cfc8; --darkreader-inline-bgcolor: #1c2021;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">Input: </span><span style="font-family: Nunito, sans-serif; color: rgb(39, 50, 57); background-color: rgb(249, 249, 249); font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #d4cfc8; --darkreader-inline-bgcolor: #1c2021;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">n = 7, x = 3, y = 4, arr[] = {8, 7, 15, 19, 16, 16, 18}, brr[] = {1, 7, 15, 11, 12, 31, 9}</span></span><br><span style="font-size: 14pt;"><span style="font-family: Nunito, sans-serif; color: rgb(39, 50, 57); background-color: rgb(249, 249, 249); font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #d4cfc8; --darkreader-inline-bgcolor: #1c2021;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">Output</span><span style="font-family: Nunito, sans-serif; color: rgb(39, 50, 57); background-color: rgb(249, 249, 249); font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #d4cfc8; --darkreader-inline-bgcolor: #1c2021;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">: 110</span></span><br><span style="font-size: 14pt;"><span style="font-family: Nunito, sans-serif; color: rgb(39, 50, 57); background-color: rgb(249, 249, 249); font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #d4cfc8; --darkreader-inline-bgcolor: #1c2021;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">Explanation: </span><span style="font-family: Nunito, sans-serif; color: rgb(39, 50, 57); background-color: rgb(249, 249, 249); font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #d4cfc8; --darkreader-inline-bgcolor: #1c2021;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">Person A will serve orders 8,19,18 while person B will serve 7,15, 12 &amp; 31.</span></span></pre>
<p dir="ltr" style="line-height: 1.38; margin-top: 12pt; margin-bottom: 12pt;"><span style="font-size: 14pt;"><span style="font-family: Roboto, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">Expected Time Complexity:</span><span style="font-family: Roboto, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor=""> O(n*logn)</span><span style="font-family: Roboto, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor=""><br></span><span style="font-family: Roboto, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">Expected Auxiliary Space:</span><span style="font-family: Roboto, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor=""> O(n)</span></span></p>
<p dir="ltr" style="line-height: 1.38; margin-top: 12pt; margin-bottom: 12pt;"><span style="font-size: 14pt;"><span style="font-family: Roboto, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">Constraints:</span><span style="font-family: Roboto, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor=""><br></span><span style="font-family: Roboto, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">1 ≤ n ≤ 10</span><span style="font-family: Roboto, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor=""><span style="vertical-align: super;">5</span></span><span style="font-family: Roboto, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor=""><span style="vertical-align: super;"><br></span></span><span style="font-family: Roboto, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">1 ≤ x, y ≤ n</span><span style="font-family: Roboto, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor=""><br></span><span style="font-family: Roboto, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor="">1 ≤ arr[i], brr[i] ≤ 10</span><span style="font-family: Roboto, sans-serif; color: rgb(0, 0, 0); background-color: transparent; font-weight: 400; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap; --darkreader-inline-color: #f4f2ee; --darkreader-inline-bgcolor: transparent;" data-darkreader-inline-color="" data-darkreader-inline-bgcolor=""><span style="vertical-align: super;">9</span></span></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>TCS</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Dynamic Programming</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;<code>Sorting</code>&nbsp;