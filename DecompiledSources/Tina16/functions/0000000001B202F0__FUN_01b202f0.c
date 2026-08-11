/* Ghidra address: 01b202f0 */
/* Ghidra symbol: FUN_01b202f0 */


void FUN_01b202f0(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1[2];
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(param_1,iVar2);
      FUN_00410f20(uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}

