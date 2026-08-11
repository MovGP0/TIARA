/* Ghidra address: 005948c0 */
/* Ghidra symbol: FUN_005948c0 */


undefined8 FUN_005948c0(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = 0;
  if (param_2 != 0) {
    iVar5 = *(int *)(param_2 + -4);
  }
  iVar2 = 0;
  if (param_3 != 0) {
    iVar2 = *(int *)(param_3 + -4);
  }
  if (iVar5 == iVar2) {
    uVar3 = FUN_00416740(param_2);
    uVar4 = FUN_00416740(param_3);
    cVar1 = FUN_0043e2c0(uVar3,uVar4,iVar5 * 2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

