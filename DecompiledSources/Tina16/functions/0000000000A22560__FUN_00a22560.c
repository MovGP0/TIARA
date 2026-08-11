/* Ghidra address: 00a22560 */
/* Ghidra symbol: FUN_00a22560 */


void FUN_00a22560(longlong *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  
  puVar5 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x68);
  param_1[0x3c] = (longlong)puVar5;
  *puVar5 = &DAT_00a22740;
  puVar5[1] = FUN_00a22750;
  *(undefined4 *)(puVar5 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x10c) != 0) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
  iVar8 = *(int *)((longlong)param_1 + 0x4c);
  if (0 < iVar8) {
    piVar6 = (int *)(param_1[0xb] + 0xc);
    bVar4 = true;
    lVar7 = 0;
    do {
      iVar1 = piVar6[-1];
      iVar2 = (int)param_1[0x27];
      if ((iVar1 == iVar2) && (*piVar6 == *(int *)((longlong)param_1 + 0x13c))) {
        if ((int)param_1[0x22] == 0) {
          puVar5[lVar7 + 3] = FUN_00a22a60;
        }
        else {
          puVar5[lVar7 + 3] = FUN_00a227e0;
          *(undefined4 *)(puVar5 + 2) = 1;
        }
      }
      else if (iVar1 * 2 == iVar2) {
        if (*piVar6 == *(int *)((longlong)param_1 + 0x13c)) {
          puVar5[lVar7 + 3] = FUN_00a22ba0;
          bVar4 = false;
        }
        else {
          if (*piVar6 * 2 != *(int *)((longlong)param_1 + 0x13c)) goto LAB_00a226b0;
          if ((int)param_1[0x22] == 0) {
            puVar5[lVar7 + 3] = FUN_00a230e0;
          }
          else {
            puVar5[lVar7 + 3] = FUN_00a22d40;
            *(undefined4 *)(puVar5 + 2) = 1;
          }
        }
      }
      else {
LAB_00a226b0:
        if ((iVar2 % iVar1 == 0) && (*(int *)((longlong)param_1 + 0x13c) % *piVar6 == 0)) {
          puVar5[lVar7 + 3] = FUN_00a232b0;
          bVar4 = false;
        }
        else {
          puVar3 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar3 + 5) = 0x26;
          (*(code *)*puVar3)(param_1);
          iVar8 = *(int *)((longlong)param_1 + 0x4c);
        }
      }
      lVar7 = lVar7 + 1;
      piVar6 = piVar6 + 0x18;
    } while (lVar7 < iVar8);
    if ((!bVar4) && ((int)param_1[0x22] != 0)) {
      lVar7 = *param_1;
      *(undefined4 *)(lVar7 + 0x28) = 99;
                    /* WARNING: Could not recover jumptable at 0x00a22720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar7 + 8))(param_1,0);
      return;
    }
  }
  return;
}

