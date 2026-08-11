/* Ghidra address: 00bca040 */
/* Ghidra symbol: FUN_00bca040 */


undefined4 FUN_00bca040(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar3;
  int iVar2;
  
  uVar3 = 0;
  if ((param_1[1] == 0) || (param_1[0x10] == 0)) {
    (**(code **)*param_1)(param_1,0x3ef);
  }
  else {
    iVar2 = (int)((longlong)(param_1[0x10] - param_1[0x32]) / 2);
    iVar1 = iVar2 + 1;
    if (param_1[0x10] == param_1[1]) {
      iVar1 = iVar2 + 2;
    }
    uVar3 = FUN_00bc9e50(param_1,iVar1);
  }
  return uVar3;
}

