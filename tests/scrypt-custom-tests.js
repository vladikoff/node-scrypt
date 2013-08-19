var test = require('tap').test;
var scrypt = require('../build/Debug/scrypt');


//Key Derivation Tests
test("Asynchronous: Password hashing with custom arguments", function(t) {
    console.log("Password Hash Functionality\nCustom arguments\n");
      var password = "f84913e3d8e6d624689d0a3e9678ac8dcc79d2c2f3d9641488cd9d6ef6cd83dd";
      var salt = "identity.mozilla.com/picl/v1/scrypt";
      var N = 64 * 1024;
      var r = 8;
      var p = 1;
      var len = 32;
      var passwordHex = new Buffer(password, "hex").toString("binary")

      scrypt.passwordHashWithCustomOptions(passwordHex, salt, N, r, p, len, function(err, hash) {
        t.equal(err, null);
        //var hash = new Buffer(hash, "base64").toString("hex")
        var hashHex = new Buffer(hash, "base64").toString("hex")
        console.log(hashHex)
        t.equal(hashHex, "5b82f146a64126923e4167a0350bb181feba61f63cb1714012b19cb0be0119c5");
        t.end();
      });
});
