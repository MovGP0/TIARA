/* Ghidra address: 00eaab90 */
/* Ghidra symbol: FUN_00eaab90 */


char FUN_00eaab90(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_c8 [44];
  int local_9c;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  char local_21;
  undefined8 local_20 [2];
  
  local_70 = auStack_c8;
  local_98 = 0;
  local_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_21 = '\0';
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar1 = (**(code **)(*param_1 + 0x28))();
  local_9c = iVar1 + -1;
  local_4c = 0;
  if (-1 < local_9c) {
    do {
      local_9c = iVar1;
      (**(code **)(*local_30 + 0x90))(local_30);
      (**(code **)(*param_1 + 0x18))(param_1,&local_38,local_4c);
      while (iVar1 = FUN_004170c0(&DAT_00eaaf80,local_38,1), 0 < iVar1) {
        iVar1 = FUN_004170c0(&DAT_00eaaf80,local_38,1);
        FUN_00416dc0(&local_78,local_38,1,iVar1 + -1);
        (**(code **)(*local_30 + 0x78))(local_30,local_78);
        uVar2 = FUN_004170c0(&DAT_00eaaf80,local_38,1);
        FUN_00416e20(&local_38,1,uVar2);
      }
      (**(code **)(*local_30 + 0x18))(local_30,&local_80,param_2);
      (**(code **)(*local_30 + 0x18))(local_30,&local_88,param_2);
      iVar1 = FUN_004170c0(&LAB_00eaaf90,local_88,1);
      FUN_00416dc0(&local_40,local_80,1,iVar1 + -1);
      local_20[0] = 0;
      (**(code **)(*local_30 + 0x18))(local_30,local_20,param_2);
      (**(code **)(*local_30 + 0x18))(local_30,&local_90,param_2);
      local_60 = FUN_004170c0(&LAB_00eaaf90,local_90,1);
      local_60 = local_60 + 1;
      (**(code **)(*local_30 + 0x18))(local_30,&local_98,param_2);
      local_58 = local_98;
      local_5c = 0;
      if (local_98 != 0) {
        local_5c = *(undefined4 *)(local_98 + -4);
      }
      FUN_00416dc0(&local_48,local_20[0],local_60,local_5c);
      FUN_00414480(local_20);
      if ((local_21 == '\0') && (iVar1 = FUN_00416db0(local_40,local_48), iVar1 == 0)) {
        local_21 = '\0';
      }
      else {
        local_21 = '\x01';
      }
      iVar1 = FUN_00416db0(local_40,local_48);
      if (iVar1 != 0) {
        FUN_00414ad0(param_3,local_48);
      }
      local_4c = local_4c + 1;
      local_9c = local_9c + -1;
      iVar1 = local_9c;
    } while (local_9c != 0);
  }
  FUN_00410f20(local_30);
  FUN_00414560(&local_98,5);
  FUN_00414560(&local_48,3);
  return local_21;
}

