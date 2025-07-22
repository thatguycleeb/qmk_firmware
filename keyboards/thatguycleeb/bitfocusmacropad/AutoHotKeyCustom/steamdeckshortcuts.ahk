#Persistent
#SingleInstance, Force
return

F13::
	HttpGet("http://10.0.200.54:8888/press/bank/4/0/0")
return

F14::
	HttpGet("http://10.0.200.54:8888/press/bank/4/0/1")
return

F15::
	HttpGet("http://10.0.200.54:8888/press/bank/4/0/2")
return

F16::
	HttpGet("http://10.0.200.54:8888/press/bank/4/0/3")
return

F17::
	HttpGet("http://10.0.200.54:8888/press/bank/4/0/4")
return

F18::
	HttpGet("http://10.0.200.54:8888/press/bank/4/0/5")
return

F19::
	HttpGet("http://10.0.200.54:8888/press/bank/4/0/6")
return

F20::
	HttpGet("http://10.0.200.54:8888/press/bank/4/0/7")
return

F21::
	HttpGet("http://10.0.200.54:8888/press/bank/4/1/0")
return

F22::
	HttpGet("http://10.0.200.54:8888/press/bank/4/1/1")
return

F23::
	HttpGet("http://10.0.200.54:8888/press/bank/4/1/2")
return

F24::
	HttpGet("http://10.0.200.54:8888/press/bank/4/1/3")
return

;f13 to 24 pressed with Left Control
<^F13::
	HttpGet("http://10.0.200.54:8888/press/bank/4/1/4")
return

<^F14::
	HttpGet("http://10.0.200.54:8888/press/bank/4/1/5")
return

<^F15::
	HttpGet("http://10.0.200.54:8888/press/bank/4/1/6")
return

<^F16::
	HttpGet("http://10.0.200.54:8888/press/bank/4/1/7")
return

<^F17::
	HttpGet("http://10.0.200.54:8888/press/bank/4/2/0")
return

<^F18::
	HttpGet("http://10.0.200.54:8888/press/bank/4/2/1")
return

<^F19::
	HttpGet("http://10.0.200.54:8888/press/bank/4/2/2")
return

<^F20::
	HttpGet("http://10.0.200.54:8888/press/bank/4/2/3")
return

<^F21::
	HttpGet("http://10.0.200.54:8888/press/bank/4/2/4")
return

<^F22::
	HttpGet("http://10.0.200.54:8888/press/bank/4/2/5")
return

<^F23::
	HttpGet("http://10.0.200.54:8888/press/bank/4/2/6")
return

<^F24::
	HttpGet("http://10.0.200.54:8888/press/bank/4/2/7")
return


;F13 to F24 with Left Alt
<!F13::
	HttpGet("http://10.0.200.54:8888/press/bank/4/3/0")
return

<!F14::
	HttpGet("http://10.0.200.54:8888/press/bank/4/3/1")
return

<!F15::
	HttpGet("http://10.0.200.54:8888/press/bank/4/3/2")
return

<!F16::
	HttpGet("http://10.0.200.54:8888/press/bank/4/3/3")
return

<!F17::
	HttpGet("http://10.0.200.54:8888/press/bank/4/3/4")
return

<!F18::
	HttpGet("http://10.0.200.54:8888/press/bank/4/3/5")
return

<!F19::
	HttpGet("http://10.0.200.54:8888/press/bank/4/3/6")
return

<!F20::
	HttpGet("http://10.0.200.54:8888/press/bank/4/3/7")
return

HttpGet(URL) {
	static req := ComObjCreate("Msxml2.XMLHTTP")
	req.open("GET", URL, false)
	req.SetRequestHeader("If-Modified-Since", "Sat, 1 Jan 2000 00:00:00 GMT")
	req.send()
}