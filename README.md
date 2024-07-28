<h1>Push_swap</h1>

<h2>Project Overview</h2>
<p>The <code>push_swap</code> project is about sorting data on a stack with a limited set of actions and the smallest number of moves possible. You will need to manipulate various sorting algorithms and choose the most optimal one for an efficient data sorting solution.</p>

<h2>Purpose</h2>
<p>The purpose of this project is to write a C program that takes integers as arguments and sorts them using the push_swap actions in the shortest possible way.</p>

<h2>What You Will Learn</h2>
<ul>
    <li>How to implement and manipulate sorting algorithms.</li>
    <li>How to analyze the complexity of algorithms.</li>
    <li>How to optimize data sorting for different groups of integers.</li>
    <li>How to manage and manipulate stacks in C.</li>
</ul>

<h2>Project Contents</h2>

<h3>Mandatory Part</h3>
<p>You must implement the following requirements:</p>
<ul>
    <li>Two stacks named <code>a</code> and <code>b</code>.</li>
    <li>Initially:
        <ul>
            <li><code>a</code> contains a random number of unique positive and/or negative integers.</li>
            <li><code>b</code> is empty.</li>
        </ul>
    </li>
    <li>The goal is to sort the numbers in stack <code>a</code> in ascending order using the following actions:
        <ul>
            <li><code>sa</code> (swap a): Swap the first two elements at the top of stack <code>a</code>. Do nothing if there is only one or no elements.</li>
            <li><code>sb</code> (swap b): Swap the first two elements at the top of stack <code>b</code>. Do nothing if there is only one or no elements.</li>
            <li><code>ss</code>: <code>sa</code> and <code>sb</code> at the same time.</li>
            <li><code>pa</code> (push a): Take the first element at the top of <code>b</code> and put it at the top of <code>a</code>. Do nothing if <code>b</code> is empty.</li>
            <li><code>pb</code> (push b): Take the first element at the top of <code>a</code> and put it at the top of <code>b</code>. Do nothing if <code>a</code> is empty.</li>
            <li><code>ra</code> (rotate a): Shift all elements of stack <code>a</code> up by 1. The first element becomes the last one.</li>
            <li><code>rb</code> (rotate b): Shift all elements of stack <code>b</code> up by 1. The first element becomes the last one.</li>
            <li><code>rr</code>: <code>ra</code> and <code>rb</code> at the same time.</li>
            <li><code>rra</code> (reverse rotate a): Shift all elements of stack <code>a</code> down by 1. The last element becomes the first one.</li>
            <li><code>rrb</code> (reverse rotate b): Shift all elements of stack <code>b</code> down by 1. The last element becomes the first one.</li>
            <li><code>rrr</code>: <code>rra</code> and <code>rrb</code> at the same time.</li>
        </ul>
    </li>
</ul>

<h4>Example</h4>
<p>To demonstrate the behavior of the defined actions, let's try sorting a random list of integers. In this example, we will assume both stacks grow from the right:</p>
<pre>
Initial state:
2 1 3 6 5 8
_ _
a b

Exec sa:
1 2 3 6 5 8
_ _
a b

Exec pb pb pb:
6 3
5 2
8 1
_ _
a b

Exec ra rb (equiv. to rr):
5 2
8 1
6 3
_ _
a b

Exec rra rrb (equiv. to rrr):
6 3
5 2
8 1
_ _
a b

Exec sa:
5 3
6 2
8 1
_ _
a b

Exec pa pa pa:
1 2 3 5 6 8
_ _
a b
</pre>

<p>The integers in stack <code>a</code> are sorted in 12 actions. Can you do better?</p>

<h4>Push_swap Program</h4>
<ul>
    <li>Program name: <code>push_swap</code></li>
    <li>Files to submit: <code>Makefile, *.h, *.c</code></li>
    <li>Makefile: <code>NAME, all, clean, fclean, re</code></li>
    <li>Arguments: <code>stack a</code>: A list of integers</li>
    <li>External functions:
        <ul>
            <li><code>read, write, malloc, free, exit</code></li>
            <li><code>ft_printf</code> or any equivalent you coded</li>
        </ul>
    </li>
    <li>Libft allowed: Yes</li>
    <li>Description: Sort the integers in the stacks.</li>
</ul>

<p>Your project must comply with the following rules:</p>
<ul>
    <li>You must create a Makefile to compile your source files and upload it to your project repository. The Makefile must not relink.</li>
    <li>Global variables are forbidden.</li>
    <li>You have to write a program named <code>push_swap</code> that takes <code>stack a</code> as an argument, formatted as a list of integers. The first argument should be at the top of the stack (be careful about the order).</li>
    <li>The program should output the list of actions to sort <code>stack a</code> with the smallest possible number of actions.</li>
    <li>Actions must be separated by a '\n' character. No other characters are accepted.</li>
    <li>The goal is to sort the stack with the minimum number of actions. During the evaluation process, the number of actions will be compared to a predefined limit. If your program generates a longer list of actions or fails to sort the integers correctly, your grade will be 0.</li>
    <li>If no arguments are given, the program should not display anything and should exit cleanly.</li>
    <li>In case of an error, the program should display "Error" followed by a '\n' on standard error. Examples of errors include: some arguments not being integers, arguments larger than an integer, or duplicate arguments.</li>
</ul>

<pre>
$>./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
$>./push_swap 0 bir 2 3
Error
$>
</pre>

<p>During the evaluation process, a checker program will be provided to test your program. The checker program will work as follows:</p>

<pre>
$>ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
6

$>ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_OS $ARG
OK
$>
</pre>

<p>If the checker_OS program outputs "KO", it means that your push_swap program generated an incorrect list of actions to sort the given integers.</p>

<h3>Bonus Part</h3>
<p>Due to the simplicity of this project, there isn't much room for extra features. However, how about writing your own checker program?</p>

<p>The checker program will test whether the actions specified by the push_swap program correctly sort the list of integers.</p>

<h4>Checker Program</h4>
<ul>
    <li>Program name: <code>checker</code></li>
    <li>Files to submit: <code>*.h, *.c</code></li>
    <li>Makefile: <code>bonus</code></li>
    <li>Arguments: <code>stack a</code>: A list of integers</li>
    <li>External functions:
        <ul>
            <li><code>read, write, malloc, free, exit</code></li>
            <li><code>ft_printf</code> or any equivalent you coded</li>
        </ul>
    </li>
    <li>Libft allowed: Yes</li>
    <li>Description: Execute the sorting actions.</li>
</ul>

<p>Write a program named <code>checker</code> that takes <code>stack a</code> as an argument (a list of integers). The first argument should be at the top of the stack (be careful about the order). If no arguments are given, the program should not display anything and should exit cleanly.</p>

<p>When the program starts, it will wait and read actions from standard input. Each action is followed by a '\n' character. After reading all the actions, the program will apply them to the stack.</p>

<p>If the stack <code>a</code> is correctly sorted and stack <code>b</code> is empty after applying the actions, the program should output "OK" followed by a '\n'. In all other cases, it should output "KO" followed by a '\n'.</p>

<p>In case of an error, the program should output "Error" followed by a '\n' on standard error. Examples of errors include: arguments not being integers, arguments larger than an integer, duplicate arguments, invalid or incorrectly formatted actions.</p>

<pre>
$>./checker 3 2 1 0
rra
pb
sa
rra
pa
OK
$>./checker 3 2 1 0
sa
rra
pb
KO
$>./checker 3 2 one 0
Error
$>./checker "" 1
Error
$>
</pre>

<p>Your program does not have to work exactly the same as the provided checker program. You must handle errors, but how you parse the arguments is up to you.</p>

<p>The bonus part will only be assessed if the mandatory part is perfect. Perfect means that the mandatory part has been fully completed and works without any issues. If you have not passed all the mandatory requirements, your bonus part will not be evaluated at all.</p>

<h2>Submission and Peer-Evaluation</h2>
<p>Submit your project to your assigned Git repository as usual. Only the work in your repository will be evaluated during the defense. Double-check the names of your files to ensure they are correct.</p>

<p>This project will not be checked by the Moulinette, so feel free to organize your files as you wish, as long as you submit the required files and meet the project requirements.</p>
