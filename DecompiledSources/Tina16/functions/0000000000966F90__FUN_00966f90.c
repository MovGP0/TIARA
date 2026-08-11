/* Ghidra address: 00966f90 */
/* Ghidra symbol: FUN_00966f90 */


longlong FUN_00966f90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6)

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
  local_10 = FUN_0096fb60(&PTR_FUN_00920220,1,0,param_1);
  FUN_00414b90(local_10 + 0x88,param_6);
  FUN_00414b90(local_10 + 0x90,param_2);
  FUN_00414b90(local_10 + 0x98,param_3);
  FUN_00414b90(local_10 + 0xa0,param_4);
  FUN_00414b90(local_10 + 0xa8,param_5);
  return local_10;
}

