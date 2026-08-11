/* Ghidra address: 007444f0 */
/* Ghidra symbol: FUN_007444f0 */


void FUN_007444f0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = *param_3;
  local_30 = param_3[1];
  iVar3 = (int)local_38;
  if (*(char *)(param_2 + 0xad) == '\0') {
    bVar1 = *(byte *)(param_2 + 0xb3) & 5;
    if (bVar1 == 1) {
      local_48 = (int)local_38;
    }
    else if (bVar1 == 4) {
      local_48 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))
                           (*(longlong **)(param_2 + 0xd8),6);
      local_48 = (int)local_30 - local_48;
      if (local_48 < (int)local_38) {
        local_48 = (int)local_38;
      }
    }
    else {
      iVar2 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))
                        (*(longlong **)(param_2 + 0xd8),2);
      local_48 = iVar3 + (((int)local_30 - iVar3) - iVar2) / 2;
      if (local_48 < (int)local_38) {
        local_48 = (int)local_38;
      }
    }
    iVar3 = (int)local_30 - (int)local_38;
    local_40 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))
                         (*(longlong **)(param_2 + 0xd8),6);
    if (iVar3 < local_40) {
      local_40 = iVar3;
    }
    local_40 = local_48 + local_40;
    bVar1 = *(byte *)(param_2 + 0xb3) & 10;
    iVar3 = local_38._4_4_;
    if (bVar1 == 2) {
      local_44 = local_38._4_4_;
    }
    else if (bVar1 == 8) {
      iVar2 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))
                        (*(longlong **)(param_2 + 0xd8),7);
      local_44 = local_30._4_4_ - iVar2;
      if (local_30._4_4_ - iVar2 < iVar3) {
        local_44 = iVar3;
      }
    }
    else {
      iVar2 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))
                        (*(longlong **)(param_2 + 0xd8),3);
      local_44 = local_38._4_4_ + ((local_30._4_4_ - iVar3) - iVar2) / 2;
      if (local_44 < iVar3) {
        local_44 = iVar3;
      }
    }
    iVar3 = local_30._4_4_ - local_38._4_4_;
    local_3c = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))
                         (*(longlong **)(param_2 + 0xd8),7);
    if (iVar3 < local_3c) {
      local_3c = iVar3;
    }
    local_3c = local_44 + local_3c;
    FUN_00665cf0(*(undefined8 *)(param_2 + 0xd8),&local_48,1);
  }
  else {
    local_50 = (int)local_30 - (int)local_38;
    local_30._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    local_38._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_4c = local_30._4_4_ - local_38._4_4_;
    FUN_00652f60(*(undefined8 *)(param_1 + 0x40),param_2,&local_50,*(char *)(param_2 + 0xad),param_4
                 ,&local_38,1);
  }
  return;
}

