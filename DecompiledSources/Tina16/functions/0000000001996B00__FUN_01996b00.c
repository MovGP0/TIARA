/* Ghidra address: 01996b00 */
/* Ghidra symbol: FUN_01996b00 */


longlong FUN_01996b00(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_00410920(param_1,local_res10);
  if (lVar1 != -1) {
    FUN_00b95480(lVar1,0,1000,500);
    *(undefined1 *)(lVar1 + 0x21) = 1;
    param_1 = lVar1;
  }
  return param_1;
}

