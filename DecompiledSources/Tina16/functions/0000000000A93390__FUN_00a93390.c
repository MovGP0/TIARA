/* Ghidra address: 00a93390 */
/* Ghidra symbol: FUN_00a93390 */


ulonglong FUN_00a93390(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  *param_3 = 0;
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    iVar7 = *(int *)(lVar1 + 0x10);
    iVar6 = 0;
    if (-1 < iVar7 + -1) {
      do {
        lVar3 = FUN_00a72910(lVar1,iVar6);
        iVar2 = FUN_00416db0(*(undefined8 *)(lVar3 + 0x10),param_2);
        if (iVar2 == 0) {
          uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
          uVar4 = FUN_00a72910(lVar1,iVar6);
          *param_3 = uVar4;
          goto code_r0x00a9340e;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    uVar5 = 0;
code_r0x00a9340e:
    uVar5 = uVar5 & 0xffffffff;
  }
  return uVar5;
}

