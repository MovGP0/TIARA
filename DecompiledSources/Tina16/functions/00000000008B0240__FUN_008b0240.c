/* Ghidra address: 008b0240 */
/* Ghidra symbol: FUN_008b0240 */


undefined8 FUN_008b0240(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_10;
  
  local_10 = 0;
  FUN_008af330(&local_10,param_2);
  iVar1 = FUN_004170c0(&DAT_008b02f4,local_10,1);
  if (iVar1 < 1) {
    FUN_00414480(param_1);
  }
  else {
    uVar2 = 0;
    if (local_10 != 0) {
      uVar2 = *(undefined4 *)(local_10 + -4);
    }
    FUN_00416dc0(param_1,local_10,iVar1 + 1,uVar2);
  }
  FUN_00414480(&local_10);
  return param_1;
}

