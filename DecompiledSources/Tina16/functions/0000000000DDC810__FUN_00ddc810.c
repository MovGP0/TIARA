/* Ghidra address: 00ddc810 */
/* Ghidra symbol: FUN_00ddc810 */


longlong FUN_00ddc810(longlong param_1,char param_2,undefined4 param_3,int param_4,longlong *param_5
                     )

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  int local_64;
  undefined1 *local_60;
  int local_4c;
  longlong local_48;
  undefined4 *local_40;
  undefined8 local_30;
  int local_24;
  undefined4 *local_20 [2];
  
  local_60 = auStack_98;
  local_30 = 0;
  local_res8 = param_1;
  puVar2 = auStack_98;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_60;
  }
  local_60 = puVar2;
  *(undefined4 *)(local_res8 + 8) = param_3;
  *(int *)(local_res8 + 0xc) = param_4;
  uVar4 = FUN_00409570((longlong)(param_4 << 4));
  *(undefined8 *)(local_res8 + 0x10) = uVar4;
  local_64 = param_4 + -1;
  local_24 = 0;
  iVar1 = param_4;
  if (-1 < local_64) {
    do {
      local_64 = iVar1;
      uVar3 = (**(code **)(*param_5 + 0x30))(param_5,local_24,local_20);
      FUN_006245b0(uVar3);
      local_78 = 0;
      local_70 = 0;
      uVar3 = (**(code **)(*param_5 + 0x60))(param_5,*local_20[0],&local_30,0);
      FUN_006245b0(uVar3);
      local_40 = (undefined4 *)(*(longlong *)(local_res8 + 0x10) + (longlong)local_24 * 0x10);
      *local_40 = *(undefined4 *)(*(longlong *)(local_20[0] + 4) + 8);
      FUN_004168b0(local_40 + 2,local_30);
      while( true ) {
        local_48 = *(longlong *)(local_40 + 2);
        local_4c = 0;
        if (local_48 != 0) {
          local_4c = *(int *)(local_48 + -4);
        }
        if ((local_4c < 2) || (**(short **)(local_40 + 2) != 0x5f)) break;
        FUN_00416e20(local_40 + 2,1,1);
      }
      (**(code **)(*param_5 + 0xa8))(param_5,local_20[0]);
      local_24 = local_24 + 1;
      local_64 = local_64 + -1;
      iVar1 = local_64;
    } while (local_64 != 0);
  }
  FUN_00414520(&local_30);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

