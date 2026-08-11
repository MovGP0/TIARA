/* Ghidra address: 015f4a70 */
/* Ghidra symbol: FUN_015f4a70 */


void FUN_015f4a70(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (longlong *)0x0) {
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
  }
  return;
}

