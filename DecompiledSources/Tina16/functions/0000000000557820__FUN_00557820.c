/* Ghidra address: 00557820 */
/* Ghidra symbol: FUN_00557820 */


longlong FUN_00557820(longlong *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  
  local_60 = auStack_88;
  local_50 = 0;
  local_38 = param_1[6];
  puVar1 = auStack_88;
  if (local_38 == 0) {
    uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
    cVar2 = (**(code **)(*param_1 + 0x60))(param_1);
    local_30 = FUN_0055aac0(&DAT_0052b0a0,1,uVar4,cVar2 == '\0');
    cVar2 = (**(code **)(*param_1 + 0x60))(param_1);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*param_1 + 0x58))(param_1);
      if (cVar2 == '\0') {
        uVar8 = FUN_005586e0(param_1);
        uVar8 = FUN_005466a0(uVar8);
        FUN_0055abe0(local_30,uVar8,0,1);
      }
      else {
        FUN_0055abe0(local_30,&DAT_00401428,0,1);
      }
    }
    (**(code **)(*param_1 + 0x70))(param_1,&local_50);
    local_48 = 0;
    while( true ) {
      local_58 = local_50;
      if (local_50 != 0) {
        local_58 = *(ulonglong *)(local_50 - 8);
      }
      if (local_58 <= local_48) break;
      local_40 = *(longlong **)(local_50 + local_48 * 8);
      lVar7 = (**(code **)(*local_40 + 0x20))(local_40);
      if (lVar7 == 0) {
        FUN_0055abe0(local_30,0,1,1);
      }
      else {
        uVar8 = (**(code **)(*local_40 + 0x20))(local_40);
        uVar5 = FUN_005466a0(uVar8);
        bVar3 = (**(code **)(*local_40 + 0x18))(local_40);
        uVar8 = 0;
        if ((bVar3 & 0x21) == 0) {
          uVar8 = (**(code **)(*local_40 + 0x20))(local_40);
          uVar8 = FUN_005466a0(uVar8);
          uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
          uVar6 = (**(code **)(*local_40 + 0x18))(local_40);
          cVar2 = FUN_00535260(uVar8,uVar4,(uVar6 & 2) != 0);
          if (cVar2 != '\0') goto LAB_005579fe;
          uVar4 = 0;
        }
        else {
LAB_005579fe:
          uVar4 = (undefined4)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
        }
        uVar6 = (**(code **)(*local_40 + 0x18))(local_40);
        FUN_0055abe0(local_30,uVar5,uVar4,(uVar6 & 2) != 0);
      }
      local_48 = local_48 + 1;
    }
    FUN_00419430(&local_50,&DAT_00531510);
    lVar7 = (**(code **)(*param_1 + 0x30))(param_1);
    if (lVar7 != 0) {
      uVar8 = (**(code **)(*param_1 + 0x30))(param_1);
      uVar8 = FUN_005466a0(uVar8);
      FUN_0055b520(local_30,uVar8);
    }
    FUN_0055b2c0(local_30);
    LOCK();
    lVar7 = param_1[6];
    if (lVar7 == 0) {
      param_1[6] = local_30;
      lVar7 = 0;
    }
    UNLOCK();
    if (lVar7 == 0) {
      local_30 = 0;
    }
    else {
      FUN_00410f20(local_30);
    }
    local_38 = param_1[6];
    puVar1 = local_60;
  }
  local_60 = puVar1;
  FUN_00419430(&local_50,&DAT_00531510);
  return local_38;
}

