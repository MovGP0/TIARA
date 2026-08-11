/* Ghidra address: 01a56c20 */
/* Ghidra symbol: FUN_01a56c20 */


undefined8 FUN_01a56c20(undefined8 param_1)

{
  ulonglong uVar1;
  undefined1 local_222 [530];
  
  uVar1 = thunk_FUN_041bde6d(0,0x28,0,0,local_222);
  if ((uVar1 & 0x80000000) == 0) {
    FUN_00416830(param_1,local_222,0x105);
  }
  else {
    FUN_00414480(param_1);
  }
  return param_1;
}

