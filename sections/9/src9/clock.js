var clock = document.getElementById('clock');
setInterval(function() {
  // generate clock here
  var date = new Date();
  var html = '';
  html += '<h1>' + date.getHours() + ':' + date.getMinutes() + ':' + date.getSeconds() + '</h1>';
  clock.innerHTML = html;
}, 100)