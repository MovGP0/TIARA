/* Ghidra address: 01c72fc0 */
/* Ghidra symbol: FUN_01c72fc0 */


void FUN_01c72fc0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                 undefined8 *param_5,byte param_6)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  int local_res18;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_38;
  int local_30;
  undefined4 uStack_2c;
  
  local_38 = *param_5;
  local_30 = (int)param_5[1];
  _local_30 = CONCAT44((int)((ulonglong)param_5[1] >> 0x20),local_30 + -1);
  if ((param_6 & 0x10) != 0) {
    *(int *)(param_1 + 0x1b40) = param_3;
  }
  lVar5 = FUN_00b89270();
  local_res18 = param_3;
  if (*(char *)(lVar5 + 0x2e) != '\0') {
    local_res18 = (*(int *)(*(longlong *)(param_1 + 0x700) + 0x4a4) - param_3) + -1;
  }
  plVar1 = *(longlong **)(param_1 + 0x27a0);
  if (plVar1 != (longlong *)0x0) {
    iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (local_res18 < iVar2) {
      if (((param_6 & 0x10) == 0) && ((param_6 & 1) == 0)) {
        FUN_01c72f20(auStack_88,&PTR_PTR_00efefef);
      }
      else {
        FUN_01c72f20(auStack_88,&DAT_0071d8f0);
      }
      bVar9 = (param_6 & 1) == 0;
      if (bVar9) {
        uVar3 = 0xff000014;
        uVar4 = 0xff000010;
      }
      else {
        uVar3 = 0xff000010;
        uVar4 = 0xff000014;
      }
      uVar8 = (uint)!bVar9;
      local_68 = 1;
      FUN_00741000(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x490),&local_38,uVar3,uVar4);
      FUN_005fdab0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x700) + 0x490) + 0x80),
                   0xff00000f);
      if (-1 < local_res18) {
        uVar3 = FUN_004230a0(&local_38);
        uVar4 = FUN_004230c0(&local_38);
        lVar5 = (**(code **)(**(longlong **)(param_1 + 0x27a0) + 0x30))
                          (*(longlong **)(param_1 + 0x27a0),local_res18);
        lVar7 = (**(code **)(**(longlong **)(param_1 + 0x27a0) + 0x30))
                          (*(longlong **)(param_1 + 0x27a0),local_res18);
        local_58 = *(undefined4 *)(lVar5 + 0x50);
        local_50 = *(undefined8 *)(lVar7 + 0x40);
        local_48 = *PTR_DAT_02002480;
        local_68 = uVar3;
        local_60 = uVar4;
        FUN_00c85c40(*(undefined8 *)PTR_DAT_02002c40,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x490),(int)local_38 + uVar8,
                     local_38._4_4_ + uVar8);
      }
    }
    else {
      uVar6 = FUN_00781840();
      uVar3 = FUN_00779380(uVar6,4);
      FUN_01c72f20(auStack_88,uVar3);
    }
  }
  return;
}

