/* Ghidra address: 01cfda50 */
/* Ghidra symbol: FUN_01cfda50 */


void FUN_01cfda50(longlong *param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((param_1[0x1c] != 0) &&
      (iVar1 = (**(code **)(*param_1 + 0x1d0))(param_1), param_2 <= iVar1 + -1)) && (-1 < param_2))
  {
    iVar2 = 0;
    iVar1 = *(int *)(param_3 + 0x10);
    if (-1 < iVar1 + -1) {
      do {
        uVar3 = FUN_004aeac0(param_3,iVar2);
        FUN_004ae7e0(*(undefined8 *)(param_1[0x1c] + (longlong)param_2 * 8),uVar3);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

