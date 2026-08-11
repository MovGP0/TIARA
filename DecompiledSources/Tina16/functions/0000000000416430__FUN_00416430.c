/* Ghidra address: 00416430 */
/* Ghidra symbol: FUN_00416430 */


undefined8 FUN_00416430(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_2 + -4) >> 1;
  }
  if (param_3 < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_3 - 1U;
    if ((int)uVar2 < (int)(param_3 - 1U)) {
      uVar1 = uVar2;
    }
  }
  if (param_4 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = uVar2 - uVar1;
    if (param_4 < (int)(uVar2 - uVar1)) {
      iVar3 = param_4;
    }
  }
  FUN_004147a0(param_1,param_2 + (longlong)(int)uVar1 * 2,iVar3);
  return param_1;
}

