/* Ghidra address: 00966c50 */
/* Ghidra symbol: FUN_00966c50 */


longlong FUN_00966c50(longlong param_1,undefined8 param_2)

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
  local_10 = FUN_0096fb60(&PTR_FUN_0091e218,1,0,param_1);
  FUN_00414b90(local_10 + 0x88,param_2);
  return local_10;
}

