/* Ghidra address: 01a67a80 */
/* Ghidra symbol: FUN_01a67a80 */


void FUN_01a67a80(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_d8 [36];
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_88;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  int local_24;
  undefined8 local_20 [2];
  
  local_90 = auStack_d8;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_38[0] = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0x18))
            (*(longlong **)(param_1 + 0x748),local_38,param_2);
  local_60 = (longlong *)FUN_01b21300(local_38[0],&DAT_01a67efc,0);
  FUN_01a679e0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0x18))
            (*(longlong **)(param_1 + 0x738),&local_98,param_2);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),local_98);
  iVar1 = (**(code **)(*local_60 + 0x28))(local_60);
  *(int *)(param_1 + 0x72c) = iVar1 + -1;
  *(undefined4 *)(param_1 + 0x730) = param_2;
  (**(code **)(*local_60 + 0x18))(local_60,&local_a0,0);
  FUN_00414ad0(param_1 + 0x758,local_a0);
  local_b4 = (**(code **)(*local_60 + 0x28))(local_60);
  local_b4 = local_b4 + -1;
  local_24 = 1;
  if (0 < local_b4) {
    do {
      (**(code **)(*local_60 + 0x18))(local_60,&local_40,local_24);
      local_68 = (longlong *)FUN_01b21480(local_40);
      (**(code **)(*local_68 + 0x18))(local_68,&local_48,0);
      (**(code **)(*local_68 + 0x18))(local_68,&local_50,1);
      (**(code **)(*local_68 + 0x18))(local_68,&local_58,2);
      if (local_24 == 1) {
        local_70 = *(longlong **)(param_1 + 0x6e8);
        local_78 = *(longlong **)(param_1 + 0x6f8);
      }
      if (local_24 == 2) {
        local_70 = *(longlong **)(param_1 + 0x6f0);
        local_78 = *(longlong **)(param_1 + 0x700);
      }
      (**(code **)(*local_70 + 0x128))(local_70,1);
      FUN_0064dbe0(local_70,1);
      (**(code **)(*local_78 + 0x128))(local_78,1);
      FUN_0064dbe0(local_78,1);
      FUN_0064de00(local_70,local_48);
      FUN_0064de00(local_78,local_50);
      iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x758),L"butterworth");
      if (iVar1 == 0) {
        if (local_24 == 1) {
          FUN_0043f750(&local_a8,*(undefined4 *)(*(longlong *)(param_1 + 0xc18) + 0xc));
          FUN_0064de00(local_78,local_a8);
        }
        if (local_24 == 2) {
          FUN_00414480(local_20);
          local_88 = *(undefined8 *)(*(longlong *)(param_1 + 0xc18) + 0x18);
          FUN_00448450(local_20,local_88,PTR_DAT_02004830);
          FUN_0064de00(local_78,local_20[0]);
          FUN_00414480(local_20);
        }
      }
      else if (local_24 == 1) {
        FUN_0043f750(&local_b0,*(undefined4 *)(*(longlong *)(param_1 + 0xc18) + 0x10));
        FUN_0064de00(local_78,local_b0);
      }
      local_24 = local_24 + 1;
      local_b4 = local_b4 + -1;
    } while (local_b4 != 0);
  }
  FUN_00410f20(local_60);
  FUN_00414560(&local_b0,4);
  FUN_00414560(&local_58,5);
  FUN_00414480(local_20);
  return;
}

