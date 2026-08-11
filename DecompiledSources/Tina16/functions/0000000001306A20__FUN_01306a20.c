/* Ghidra address: 01306a20 */
/* Ghidra symbol: FUN_01306a20 */


void FUN_01306a20(longlong param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x700);
  uVar4 = FUN_006e2530(lVar5);
  uVar1 = FUN_006dd6f0(uVar4);
  lVar5 = FUN_006df500(*(undefined8 *)(lVar5 + 0x550),uVar1);
  if ((((*(uint *)(*(longlong *)(lVar5 + 0x18) + 4) & 0x20) == 0x20) &&
      (*(longlong *)(param_1 + 0xaf8) != 0)) &&
     (iVar2 = FUN_00654c00(*(undefined8 *)(param_1 + 0x850)), iVar2 != 0)) {
    uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
    iVar2 = FUN_006dd6f0(uVar4);
    FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
    iVar2 = FUN_012e58b0();
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        if (param_2 == 0) {
          if (param_3 == 0) {
            uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
            iVar3 = FUN_006dd6f0(uVar4);
            uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
            FUN_012e5eb0(uVar4,iVar6);
          }
          else if (param_3 == 1) {
            uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
            iVar3 = FUN_006dd6f0(uVar4);
            uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
            FUN_012e5f00(uVar4,iVar6,1);
          }
        }
        else if (param_2 == 1) {
          if (param_3 == 0) {
            uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
            iVar3 = FUN_006dd6f0(uVar4);
            uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
            FUN_012e5eb0(uVar4,iVar6);
          }
          else if (param_3 == 1) {
            uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
            iVar3 = FUN_006dd6f0(uVar4);
            uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
            FUN_012e5f00(uVar4,iVar6,0);
          }
        }
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

