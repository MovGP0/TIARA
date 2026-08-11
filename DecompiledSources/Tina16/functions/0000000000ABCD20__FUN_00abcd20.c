/* Ghidra address: 00abcd20 */
/* Ghidra symbol: FUN_00abcd20 */


int FUN_00abcd20(longlong param_1,int param_2,longlong param_3,char param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  uint local_4c;
  undefined8 local_48;
  undefined8 local_40;
  ushort local_32;
  longlong local_30;
  int local_24;
  undefined8 local_20 [2];
  
  local_60 = auStack_88;
  local_40 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_24 = -1;
  puVar1 = auStack_88;
  if ((*(int *)(param_1 + 0x6c) != 0) && (puVar1 = auStack_88, *(int *)(param_1 + 0x68) <= param_2))
  {
    local_4c = 0;
    if (param_3 != 0) {
      local_4c = *(uint *)(param_3 + -4);
    }
    local_32 = (ushort)local_4c;
    puVar1 = auStack_88;
    if (((int)(local_4c & 0xffff) <= *(int *)(param_1 + 0x6c)) &&
       (puVar1 = auStack_88, (int)(local_4c & 0xffff) <= (param_2 - *(int *)(param_1 + 0x68)) + 1))
    {
      if (param_2 < *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x6c)) {
        FUN_00416dc0(&local_48,*(undefined8 *)(param_1 + 0xd0),1,param_2 - *(int *)(param_1 + 0x68))
        ;
      }
      else {
        local_60 = auStack_88;
        FUN_00414b50(&local_48,*(undefined8 *)(param_1 + 0xd0));
      }
      if (param_4 == '\0') {
        FUN_00414480(local_20);
        FUN_0043e600(local_20,local_48);
        FUN_00414b50(&local_48,local_20[0]);
        FUN_00414480(local_20);
      }
      uVar3 = FUN_00416740(local_48);
      local_30 = FUN_00a71660(uVar3,*(undefined2 *)(param_3 + -2 + (ulonglong)local_32 * 2));
      while (puVar1 = local_60, local_30 != 0) {
        lVar4 = FUN_00416740(local_48);
        puVar1 = local_60;
        if ((local_30 - lVar4) / 2 + 1 < (longlong)(ulonglong)local_32) break;
        uVar5 = (ulonglong)local_32;
        FUN_00414740(&local_40,local_30 + 2 + uVar5 * -2,local_32);
        iVar2 = FUN_00416db0(param_3,local_40);
        if (iVar2 == 0) {
          lVar4 = FUN_00416740(local_48);
          local_24 = *(int *)(param_1 + 0x68) +
                     (int)((longlong)((local_30 + 2 + uVar5 * -2) - lVar4) / 2);
          puVar1 = local_60;
          break;
        }
        lVar4 = FUN_00416740(local_48);
        FUN_00416dc0(&local_48,local_48,1,(local_30 - lVar4) / 2 & 0xffffffff);
        uVar3 = FUN_00416740(local_48);
        local_30 = FUN_00a71660(uVar3,*(undefined2 *)(param_3 + -2 + uVar5 * 2));
      }
    }
  }
  local_60 = puVar1;
  FUN_00414560(&local_48,2);
  FUN_00414480(local_20);
  return local_24;
}

