/* Ghidra address: 00457520 */
/* Ghidra symbol: FUN_00457520 */


bool FUN_00457520(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  
  if (param_1 == 0) {
    bVar6 = true;
  }
  else {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + -4);
    }
    iVar4 = 0;
    if (param_1 != 0) {
      iVar4 = *(int *)(param_1 + -4);
    }
    if (iVar1 < iVar4) {
      bVar6 = false;
    }
    else {
      uVar5 = 0;
      if (param_1 != 0) {
        uVar5 = *(undefined4 *)(param_1 + -4);
      }
      uVar2 = FUN_00416740(param_1);
      uVar3 = FUN_00416740(param_2);
      iVar1 = FUN_0043e7e0(uVar2,uVar3,uVar5);
      bVar6 = iVar1 == 0;
    }
  }
  return bVar6;
}

