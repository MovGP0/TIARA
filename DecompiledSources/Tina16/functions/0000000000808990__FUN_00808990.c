/* Ghidra address: 00808990 */
/* Ghidra symbol: FUN_00808990 */


void FUN_00808990(longlong param_1,int param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      uVar1 = thunk_FUN_03978312(0,0x7f00);
      *(undefined8 *)(param_1 + 0x158) = uVar1;
    }
    else {
      *(longlong *)(param_1 + 0x158) = param_3;
    }
  }
  else if (param_2 != -1) {
    FUN_00808350(param_1,param_2);
    if (param_3 != 0) {
      FUN_00808470(param_1,param_2,param_3);
    }
  }
  return;
}

