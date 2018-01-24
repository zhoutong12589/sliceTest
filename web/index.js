
//ICE
var Ice = require("ice").Ice;
var Demo = require("./head").modes;

//web
var express = require('express');
var app = express();
var path = require('path');
var server = require('http').createServer(app);
var io = require('socket.io')(server);
var port = 8000

// Routing
app.use(express.static(path.join(__dirname, 'public')));
server.listen(port, function () {
  console.log('Server listening at port %d', port);
});


var communicator = Ice.initialize();
var proxy=communicator.stringToProxy("SimplePrinter:default -p 10000");



io.on('connection', function (socket) {
    
    console.log('on connection');
    
    socket.on('printString', function(res){
      console.log(res);
      
      (async function(){
        var objPrx = await Demo.actionsPrx.checkedCast(proxy);
        var v = await objPrx.printStringWithRet(res);
        console.log(v);
      }());
  });
    
    
    
});




