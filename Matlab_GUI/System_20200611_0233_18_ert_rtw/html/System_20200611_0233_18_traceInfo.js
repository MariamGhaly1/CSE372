function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "System_20200611_0233_18"};
	this.sidHashMap["System_20200611_0233_18"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "System_20200611_0233_18:8"};
	this.sidHashMap["System_20200611_0233_18:8"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/in1"] = {sid: "System_20200611_0233_18:1"};
	this.sidHashMap["System_20200611_0233_18:1"] = {rtwname: "<Root>/in1"};
	this.rtwnameHashMap["<Root>/in2"] = {sid: "System_20200611_0233_18:6"};
	this.sidHashMap["System_20200611_0233_18:6"] = {rtwname: "<Root>/in2"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "System_20200611_0233_18:8"};
	this.sidHashMap["System_20200611_0233_18:8"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/out2"] = {sid: "System_20200611_0233_18:5"};
	this.sidHashMap["System_20200611_0233_18:5"] = {rtwname: "<Root>/out2"};
	this.rtwnameHashMap["<S1>/in1"] = {sid: "System_20200611_0233_18:9"};
	this.sidHashMap["System_20200611_0233_18:9"] = {rtwname: "<S1>/in1"};
	this.rtwnameHashMap["<S1>/in2"] = {sid: "System_20200611_0233_18:10"};
	this.sidHashMap["System_20200611_0233_18:10"] = {rtwname: "<S1>/in2"};
	this.rtwnameHashMap["<S1>/1//S(z)"] = {sid: "System_20200611_0233_18:4"};
	this.sidHashMap["System_20200611_0233_18:4"] = {rtwname: "<S1>/1//S(z)"};
	this.rtwnameHashMap["<S1>/R(z)"] = {sid: "System_20200611_0233_18:7"};
	this.sidHashMap["System_20200611_0233_18:7"] = {rtwname: "<S1>/R(z)"};
	this.rtwnameHashMap["<S1>/Sum1"] = {sid: "System_20200611_0233_18:3"};
	this.sidHashMap["System_20200611_0233_18:3"] = {rtwname: "<S1>/Sum1"};
	this.rtwnameHashMap["<S1>/T(z)"] = {sid: "System_20200611_0233_18:2"};
	this.sidHashMap["System_20200611_0233_18:2"] = {rtwname: "<S1>/T(z)"};
	this.rtwnameHashMap["<S1>/out2"] = {sid: "System_20200611_0233_18:11"};
	this.sidHashMap["System_20200611_0233_18:11"] = {rtwname: "<S1>/out2"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
