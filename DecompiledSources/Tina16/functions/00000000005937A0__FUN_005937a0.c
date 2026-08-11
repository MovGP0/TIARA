/* Ghidra address: 005937a0 */
/* Ghidra symbol: FUN_005937a0 */


undefined8 FUN_005937a0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + -8);
  }
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_3 + -8);
  }
  if (lVar1 == lVar3) {
    uVar2 = FUN_0043e2c0(param_2,param_3,*(int *)(param_1 + 0x14) * (int)lVar1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

