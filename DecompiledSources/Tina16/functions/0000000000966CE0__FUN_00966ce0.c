/* Ghidra address: 00966ce0 */
/* Ghidra symbol: FUN_00966ce0 */


longlong FUN_00966ce0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x98;
  }
  local_10 = FUN_0096fb60(&PTR_FUN_0091ef88,1,0,param_1);
  FUN_00414b90(local_10 + 0x90,param_2);
  FUN_00414b90(local_10 + 0x88,param_3);
  *(undefined1 *)(local_10 + 0x98) = param_4;
  return local_10;
}

