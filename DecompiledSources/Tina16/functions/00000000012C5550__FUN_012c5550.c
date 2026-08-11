/* Ghidra address: 012c5550 */
/* Ghidra symbol: FUN_012c5550 */


void FUN_012c5550(longlong param_1,undefined8 param_2,short *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (*param_3 == 0x2e) {
    lVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    iVar1 = FUN_006e5350();
    iVar5 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar3 = FUN_006e5360(*(undefined8 *)(param_1 + 0x748),iVar5);
        if ((*(uint *)(*(longlong *)(lVar3 + 0x18) + 0x62c) & 0x20) == 0x20) {
          FUN_004ae7e0(lVar2,lVar3);
        }
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar1 = *(int *)(lVar2 + 0x10);
    iVar5 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar4 = FUN_004aeac0(lVar2,iVar5);
        FUN_006ded10(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x550),uVar4);
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00410f20(lVar2);
  }
  return;
}

