/* Ghidra address: 01c97d70 */
/* Ghidra symbol: FUN_01c97d70 */


void FUN_01c97d70(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  bool local_25;
  int local_24;
  longlong local_20;
  char local_11;
  longlong *local_10;
  
  local_30 = auStack_88;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  puVar1 = auStack_88;
  if (*(longlong *)(param_1 + 0x2788) != 0) {
    cVar2 = FUN_019ac250(*(longlong *)(param_1 + 0x2788));
    puVar1 = local_30;
    if (cVar2 == '\0') {
      local_10 = (longlong *)FUN_007fc180(&PTR_FUN_01bae998,1,*(undefined8 *)PTR_DAT_02004030);
      local_11 = '\0';
      while (local_11 == '\0') {
        iVar3 = (**(code **)(*local_10 + 0x2d0))(local_10);
        if (iVar3 == 1) {
          FUN_0064dd90(local_10[0xd7],&local_38);
          FUN_0064dd90(local_10[0xd8],&local_40);
          iVar3 = FUN_00416db0(local_38,local_40);
          if (iVar3 == 0) {
            FUN_0064dd90(local_10[0xd7],&local_50);
            FUN_0043ea00(&local_48,local_50);
            local_20 = local_48;
            local_24 = 0;
            if (local_48 != 0) {
              local_24 = *(int *)(local_48 + -4);
            }
            local_25 = 0 < local_24;
          }
          else {
            local_25 = false;
          }
          if (local_25 == false) {
            FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,
                         L"The passwords do not match. Please try again.",L"Protect Circuit",0x10);
          }
          else {
            FUN_0064dd90(local_10[0xd7],&local_60);
            FUN_0043ea00(&local_58,local_60);
            FUN_019ac180(*(undefined8 *)(param_1 + 0x2788),local_58);
            uVar4 = (**(code **)(*(longlong *)local_10[0xda] + 0x260))((longlong *)local_10[0xda]);
            FUN_019ac120(*(longlong *)(param_1 + 0x2788) + 0x35c,0,uVar4);
            local_11 = '\x01';
          }
        }
        else {
          local_11 = '\x01';
        }
      }
      FUN_00410f20(local_10);
      puVar1 = local_30;
    }
  }
  local_30 = puVar1;
  FUN_00414480(&local_60);
  FUN_00414480(&local_58);
  FUN_00414480(&local_50);
  FUN_00414480(&local_48);
  FUN_00414560(&local_40,2);
  return;
}

