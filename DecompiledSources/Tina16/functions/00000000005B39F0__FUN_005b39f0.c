/* Ghidra address: 005b39f0 */
/* Ghidra symbol: FUN_005b39f0 */


bool FUN_005b39f0(undefined8 param_1,longlong param_2,longlong param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  if (param_4 == '\0') {
    bVar5 = false;
  }
  else {
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = *(int *)(param_2 + -4);
    }
    iVar3 = 0;
    if (param_3 != 0) {
      iVar3 = *(int *)(param_3 + -4);
    }
    bVar5 = iVar2 < iVar3;
  }
  if (bVar5) {
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = *(int *)(param_2 + -4);
    }
    bVar5 = *(short *)(param_3 + (longlong)iVar2 * 2) == 0x2e;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = *(undefined4 *)(param_2 + -4);
    }
    iVar2 = FUN_00456270(param_2,0,param_3,0,uVar1,1,*(undefined4 *)PTR_DAT_02005bd0);
  }
  else {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = *(undefined4 *)(param_2 + -4);
    }
    uVar4 = 0;
    if (param_3 != 0) {
      uVar4 = *(undefined4 *)(param_3 + -4);
    }
    iVar2 = FUN_00456090(param_2,0,param_3,0,uVar1,uVar4,1,*(undefined4 *)PTR_DAT_02005bd0);
  }
  return iVar2 == 0;
}

