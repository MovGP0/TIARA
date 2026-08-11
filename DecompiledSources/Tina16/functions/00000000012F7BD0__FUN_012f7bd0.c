/* Ghidra address: 012f7bd0 */
/* Ghidra symbol: FUN_012f7bd0 */


void FUN_012f7bd0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  if (lVar2 != 0) {
    uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
    iVar1 = FUN_006dd6f0(uVar3);
    if (-1 < iVar1 + -1) {
      uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
      iVar1 = FUN_006dd6f0(uVar3);
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar1 + -1);
      FUN_012e5850(uVar3,2);
      lVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
      if (((*(uint *)(*(longlong *)(lVar2 + 0x18) + 4) & 0x20) == 0x20) &&
         (*(char *)(param_1 + 0xabb) == '\0')) {
        uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
        FUN_01301140(param_1,uVar3,0,0,0);
      }
      if (*(char *)(param_1 + 0xabb) == '\0') {
        uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
        FUN_01304bb0(param_1,uVar3);
        uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
        FUN_013056e0(param_1,1,uVar3);
        FUN_01306350(param_1,0);
        uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
        iVar1 = FUN_006dd6f0(uVar3);
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar1 + -1);
        iVar1 = FUN_012e6020(uVar3,0);
        if (iVar1 == 0) {
          uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
          iVar1 = FUN_006dd6f0(uVar3);
          FUN_013060b0(param_1,0,iVar1 + -1,0);
        }
      }
    }
  }
  return;
}

