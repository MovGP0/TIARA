/* Ghidra address: 00a24760 */
/* Ghidra symbol: FUN_00a24760 */


void FUN_00a24760(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int local_48 [6];
  
  lVar2 = *(longlong *)(param_1 + 0x1f0);
  FUN_00a24b00(lVar2);
  iVar1 = *(int *)(param_1 + 0x19c);
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  iVar3 = *(int *)(param_1 + 0x144);
  if (0 < iVar3) {
    lVar8 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x148 + lVar8 * 8);
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x1a4) == 0) {
          piVar5 = (int *)(lVar6 + 0x14);
          goto LAB_00a247c1;
        }
      }
      else {
        piVar5 = (int *)(lVar6 + 0x18);
LAB_00a247c1:
        lVar6 = (longlong)*piVar5;
        if (local_48[lVar6] == 0) {
          plVar7 = (longlong *)(param_1 + 0xa0 + lVar6 * 8);
          if (iVar1 == 0) {
            plVar7 = (longlong *)(param_1 + 0x80 + lVar6 * 8);
          }
          lVar4 = *plVar7;
          if (lVar4 == 0) {
            lVar4 = FUN_00a1bde0(param_1);
            *plVar7 = lVar4;
          }
          FUN_00a25e20(param_1,lVar4,*(undefined8 *)(lVar2 + 0x90 + lVar6 * 8));
          local_48[lVar6] = 1;
          iVar3 = *(int *)(param_1 + 0x144);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar3);
  }
  return;
}

