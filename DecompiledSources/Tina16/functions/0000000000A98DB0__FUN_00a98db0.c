/* Ghidra address: 00a98db0 */
/* Ghidra symbol: FUN_00a98db0 */


void FUN_00a98db0(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_b8 [40];
  int local_90;
  int local_8c;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  int local_64;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  longlong *local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20 [2];
  
  local_70 = auStack_b8;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_38 = 0;
  local_20[0] = 0;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  local_90 = iVar2 + -1;
  local_24 = 0;
  puVar1 = auStack_b8;
  if (-1 < local_90) {
    do {
      local_70 = puVar1;
      local_90 = iVar2;
      local_40 = (longlong *)FUN_00ac1a90(*(undefined8 *)(param_1 + 0x30),local_24);
      (**(code **)(*local_40 + 0x188))(local_40);
      local_30 = 0;
      iVar2 = (**(code **)(*param_2 + 0x28))();
      local_8c = iVar2 + -1;
      local_28 = 0;
      if (-1 < local_8c) {
        do {
          local_8c = iVar2;
          local_50 = local_40[0x19];
          FUN_004b3cf0(param_2,&local_78,local_28);
          local_58 = local_78;
          iVar2 = FUN_0043e420(local_50,local_78);
          if (iVar2 == 0) {
            (**(code **)(*param_2 + 0x18))(param_2,&local_80,local_28);
            local_2c = FUN_004170c0(&DAT_00a990bc,local_80,1);
            if (0 < local_2c) {
              local_20[0] = 0;
              (**(code **)(*param_2 + 0x18))(param_2,local_20,local_28);
              (**(code **)(*param_2 + 0x18))(param_2,&local_88,local_28);
              local_60 = local_88;
              local_64 = 0;
              if (local_88 != 0) {
                local_64 = *(int *)(local_88 + -4);
              }
              FUN_00416dc0(&local_38,local_20[0],local_2c + 1,local_64 - local_2c);
              FUN_00414480(local_20);
              (**(code **)(*local_40 + 0x180))(local_40,local_30,local_38);
              local_30 = local_30 + 1;
            }
          }
          local_28 = local_28 + 1;
          local_8c = local_8c + -1;
          iVar2 = local_8c;
        } while (local_8c != 0);
      }
      local_24 = local_24 + 1;
      local_90 = local_90 + -1;
      iVar2 = local_90;
      puVar1 = local_70;
    } while (local_90 != 0);
  }
  FUN_00414560(&local_88,3);
  FUN_00414480(&local_38);
  return;
}

