/* Ghidra address: 01b22c50 */
/* Ghidra symbol: FUN_01b22c50 */


undefined8 FUN_01b22c50(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_222 [530];
  
  iVar1 = thunk_FUN_0412858d(0,local_222,param_2,0);
  if (iVar1 == 0) {
    FUN_00414480(param_1);
  }
  else {
    FUN_00416830(param_1,local_222,0x105);
  }
  return param_1;
}

