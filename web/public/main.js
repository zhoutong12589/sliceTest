
var socket = io();


function net_href_click()
{
    socket.emit('printString', 'test ok');
    var obj = JSON.parse('{ "name":"runoob", "alexa":10000, "site":"www.runoob.com" }');
    var s = JSON.stringify(obj);
    alert(s);
}


