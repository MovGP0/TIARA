/* Ghidra address: 00a72810 */
/* Ghidra symbol: FUN_00a72810 */


ulonglong FUN_00a72810(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar2 = FUN_00a72910(param_1,iVar5);
      iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 0x10),param_2);
      if (iVar1 == 0) {
        uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
        uVar3 = FUN_00a72910(param_1,iVar5);
        *param_3 = uVar3;
        goto LAB_00a7287c;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar4 = 0;
LAB_00a7287c:
  return uVar4 & 0xffffffff;
}

