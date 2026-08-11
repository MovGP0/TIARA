/* Ghidra address: 00dd9820 */
/* Ghidra symbol: FUN_00dd9820 */


void FUN_00dd9820(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  char local_49;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_60 = auStack_88;
  puVar2 = auStack_88;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    local_49 = '\0';
    local_48 = 0x18;
    lVar1 = *(longlong *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(lVar1 + 0x18);
    cVar3 = FUN_004113d0(uVar5,&PTR_FUN_005f92e8);
    if (cVar3 == '\0') {
      cVar3 = FUN_004113d0(uVar5,&PTR_FUN_005fa0c8);
      if (cVar3 == '\0') {
        local_44 = 4;
        cVar3 = FUN_004113d0(uVar5,&PTR_FUN_005f86c8);
        if (cVar3 == '\0') {
          local_30 = (longlong *)FUN_00605cc0(&PTR_FUN_005f86c8,1);
          uVar4 = FUN_00605610(*(undefined8 *)(param_1 + 0x38));
          (**(code **)(*local_30 + 0x88))(local_30,uVar4);
          uVar4 = FUN_00605640(*(undefined8 *)(param_1 + 0x38));
          (**(code **)(*local_30 + 0x70))(local_30,uVar4);
          local_28 = (longlong *)FUN_006056e0(&PTR_FUN_005f7f40,1,local_30,0);
          (**(code **)(*local_28 + 0x88))
                    (local_28,0,0,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18));
          FUN_00410f20(local_28);
          local_40 = FUN_00607230(local_30);
          local_49 = '\x01';
          FUN_00410f20(local_30);
        }
        else {
          uVar5 = FUN_00603cc0(lVar1);
          local_40 = FUN_006060c0(uVar5);
        }
      }
      else {
        local_44 = 3;
        uVar5 = FUN_00603c90(lVar1);
        local_40 = FUN_0060ce20(uVar5);
      }
    }
    else {
      local_44 = 1;
      local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      (**(code **)(*local_20 + 0x10))
                (local_20,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18));
      local_40 = FUN_0060c2f0(local_20);
      local_38 = FUN_0060c370(local_20);
      local_49 = '\x01';
      FUN_00410f20(local_20);
    }
    uVar5 = FUN_0041b800(param_2);
    uVar4 = FUN_00dda4b0(&local_48,&DAT_00dd9ad8,-(uint)(local_49 != '\0'),uVar5);
    FUN_006245b0(uVar4);
    FUN_00dd8c50(param_1,*param_2);
    puVar2 = local_60;
  }
  local_60 = puVar2;
  FUN_0041b890(param_2,*(undefined8 *)(param_1 + 0x18),&LAB_00dd9ae8);
  return;
}

