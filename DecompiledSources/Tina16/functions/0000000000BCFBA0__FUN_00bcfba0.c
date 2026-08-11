/* Ghidra address: 00bcfba0 */
/* Ghidra symbol: FUN_00bcfba0 */


undefined8 * FUN_00bcfba0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  int iVar8;
  undefined4 *local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  puVar2 = local_res18[0];
  if (*(int *)(param_1 + 0x40) == 0) {
    FUN_00414480(param_2);
  }
  else {
    iVar4 = 0;
    if (local_res18[0] != (undefined4 *)0x0) {
      iVar4 = local_res18[0][-1];
    }
    iVar5 = *(int *)(param_1 + 0x40) + -1;
    iVar3 = FUN_00bcf8a0(param_1,iVar5);
    lVar1 = *(longlong *)
             (*(longlong *)(param_1 + 0x38) + (longlong)(*(int *)(param_1 + 0x40) + -1) * 0x28);
    iVar8 = 0;
    if (lVar1 != 0) {
      iVar8 = *(int *)(lVar1 + -4);
    }
    FUN_004169f0(param_2,iVar5 * iVar4 + iVar3 + iVar8);
    puVar6 = (undefined4 *)*param_2;
    plVar7 = *(longlong **)(param_1 + 0x38);
    lVar1 = *plVar7;
    iVar8 = 0;
    if (lVar1 != 0) {
      iVar8 = *(int *)(lVar1 + -4);
    }
    if (iVar8 != 0) {
      FUN_00409a70(lVar1,puVar6,(longlong)(iVar8 * 2));
      puVar6 = (undefined4 *)((longlong)puVar6 + (longlong)iVar8 * 2);
    }
    iVar8 = *(int *)(param_1 + 0x40) + -1;
    if (0 < iVar8) {
      do {
        plVar7 = plVar7 + 5;
        if (iVar4 != 0) {
          if (iVar4 == 1) {
            *(undefined2 *)puVar6 = *(undefined2 *)puVar2;
            puVar6 = (undefined4 *)((longlong)puVar6 + 2);
          }
          else if (iVar4 == 2) {
            *puVar6 = *puVar2;
            puVar6 = puVar6 + 1;
          }
          else {
            FUN_00409a70(puVar2,puVar6,(longlong)(iVar4 * 2));
            puVar6 = (undefined4 *)((longlong)puVar6 + (longlong)iVar4 * 2);
          }
        }
        lVar1 = *plVar7;
        if (lVar1 != 0) {
          iVar3 = 0;
          if (lVar1 != 0) {
            iVar3 = *(int *)(lVar1 + -4);
          }
          FUN_00409a70(lVar1,puVar6,(longlong)(iVar3 * 2));
          puVar6 = (undefined4 *)((longlong)puVar6 + (longlong)iVar3 * 2);
        }
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  FUN_00414480(local_res18);
  return param_2;
}

