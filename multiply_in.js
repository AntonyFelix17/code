<!DOCTYPE html>
<html>
<body>

<h2>Javascript file</h2>


<p id="demo"></p>

<script>
var x = window.prompt();
var y = window.prompt();
var z = x * y;

output("multiplying in js : " + x + " * " + y);
document.getElementById("demo").innerHTML = z;
</script>

</body>
</html>
