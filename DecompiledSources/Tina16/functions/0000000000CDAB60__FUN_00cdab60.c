/* Ghidra address: 00cdab60 */
/* Ghidra symbol: FUN_00cdab60 */


undefined8 FUN_00cdab60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_res20 = param_4;
  FUN_0041b910(param_4);
  local_10 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_00cdad00(param_1,param_3,local_10);
  FUN_004b6dc0(local_10,0);
  FUN_0086f700(&local_res20,2);
  FUN_008787b0(param_2,local_10,0xffffffff,local_res20);
  FUN_00410f20(local_10);
  FUN_0041b800(&local_res20);
  return param_2;
}

