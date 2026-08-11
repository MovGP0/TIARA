/* Ghidra address: 01b38bb0 */
/* Ghidra symbol: FUN_01b38bb0 */


void FUN_01b38bb0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong local_res18 [2];
  int local_64;
  undefined4 *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_res18[0] = param_3;
  FUN_01b38b40(param_1,local_res18);
  iVar6 = *(int *)(param_2 + 0x10);
  local_64 = 0;
  if (-1 < iVar6 + -1) {
    do {
      puVar3 = (undefined8 *)FUN_004aeac0(param_2,local_64);
      if (puVar3[10] != 0) {
        FUN_00414b50(local_40,*puVar3);
        FUN_00414b50(&local_58,puVar3[4]);
        local_60 = (undefined4 *)puVar3[10];
        iVar7 = *(int *)((longlong)puVar3 + 0x34);
        if (0 < iVar7) {
          do {
            iVar5 = local_60[1] + 1;
            FUN_00414b50(&local_50,*(undefined8 *)(local_60 + 4));
            lVar4 = FUN_00418560(0x28,&DAT_01b385b8);
            if (lVar4 == 0) {
              FUN_00413fb0();
            }
            *(undefined8 *)(lVar4 + 0x20) = 0;
            lVar8 = *(longlong *)(local_res18[0] + 0x10 + (longlong)iVar5 * 0x18);
            lVar2 = lVar8;
            while (lVar1 = lVar8, lVar1 != 0) {
              lVar2 = lVar1;
              lVar8 = *(longlong *)(lVar1 + 0x20);
            }
            lVar8 = (longlong)iVar5;
            if (*(longlong *)(local_res18[0] + 0x10 + lVar8 * 0x18) == 0) {
              FUN_01b38990(iVar5,&local_48);
              if (local_50 == 0) {
                FUN_00416ba0(local_res18[0] + lVar8 * 0x18,&LAB_01b38e18,local_48);
              }
              else {
                FUN_00414ad0(local_res18[0] + lVar8 * 0x18,local_50);
              }
              *(int *)(local_res18[0] + 8 + lVar8 * 0x18) = iVar5;
              *(longlong *)(local_res18[0] + 0x10 + lVar8 * 0x18) = lVar4;
            }
            else {
              *(longlong *)(lVar2 + 0x20) = lVar4;
            }
            FUN_00414ad0(lVar4,local_40[0]);
            FUN_00414ad0(lVar4 + 8,local_58);
            *(undefined4 *)(lVar4 + 0x18) = *local_60;
            FUN_00414ad0(lVar4 + 0x10,*(undefined8 *)(local_60 + 2));
            local_60 = *(undefined4 **)(local_60 + 6);
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      local_64 = local_64 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_58,4);
  return;
}

