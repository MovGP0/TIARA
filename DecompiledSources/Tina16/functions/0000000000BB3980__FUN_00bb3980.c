/* Ghidra address: 00bb3980 */
/* Ghidra symbol: FUN_00bb3980 */


undefined1 FUN_00bb3980(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_20 = auStack_48;
  FUN_00414ad0(param_1 + 0x78,param_2);
  local_10 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_004b9f40(local_10,param_2);
  local_11 = FUN_00bb3b90(param_1,local_10);
  FUN_00410f20(local_10);
  return local_11;
}

