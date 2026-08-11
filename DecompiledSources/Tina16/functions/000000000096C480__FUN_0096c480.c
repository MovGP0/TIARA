/* Ghidra address: 0096c480 */
/* Ghidra symbol: FUN_0096c480 */


undefined8 FUN_0096c480(longlong *param_1,undefined8 param_2,longlong param_3,char *param_4)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_70;
  undefined8 local_68;
  undefined1 *local_60;
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  uint local_34;
  int local_30;
  short local_2a;
  longlong *local_28;
  longlong *local_20;
  
  local_60 = auStack_a8;
  local_70 = 0;
  local_68 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  *param_4 = '\0';
  pcVar5 = param_4;
  local_28 = (longlong *)FUN_008f7f70(&PTR_FUN_008f67c0,1);
  local_54 = 0;
  if (param_3 != 0) {
    local_54 = *(uint *)(param_3 + -4) >> 1;
  }
  local_34 = local_54;
  local_30 = 0;
  if (local_54 != 0) {
    do {
      iVar1 = local_30 + 1;
      local_2a = *(short *)(param_3 + -2 + (longlong)iVar1 * 2);
      if ((local_2a == DAT_01e32a10) && (iVar1 < (int)(local_34 - 1))) {
        local_30 = local_30 + 2;
        local_2a = *(short *)(param_3 + -2 + (longlong)local_30 * 2);
        cVar2 = FUN_008ff3a0(local_2a);
        if (cVar2 == '\0') {
          (**(code **)(*local_28 + 0x10))(local_28,0x25);
          local_30 = local_30 + -1;
        }
        else {
          local_20 = (longlong *)FUN_008f7f70(&PTR_FUN_008f67c0,1);
          (**(code **)(*local_20 + 0x18))(local_20,local_2a);
          local_30 = local_30 + 1;
          local_2a = *(short *)(param_3 + -2 + (longlong)local_30 * 2);
          while( true ) {
            cVar2 = FUN_008ff340(local_2a);
            if (cVar2 == '\0') break;
            (**(code **)(*local_20 + 0x18))(local_20,local_2a);
            local_30 = local_30 + 1;
            if ((int)local_34 < local_30) break;
            local_2a = *(short *)(param_3 + -2 + (longlong)local_30 * 2);
          }
          if (local_2a == DAT_01e32a12) {
            cVar2 = (**(code **)*param_1)(param_1);
            if (cVar2 == '\0') {
              cVar2 = (**(code **)(*param_1 + 0x20))(param_1);
              if (cVar2 != '\0') goto LAB_0096c668;
              *param_4 = -0x75;
            }
            else {
LAB_0096c668:
              (**(code **)(*local_20 + 0x48))(local_20,&local_68);
              pcVar3 = (char *)FUN_00414520(&local_40);
              uVar4 = FUN_00414520(&local_48);
              local_80 = FUN_00414520(&local_50);
              local_88 = uVar4;
              cVar2 = (**(code **)(*(longlong *)param_1[10] + 0x18))
                                ((longlong *)param_1[10],local_68,
                                 CONCAT71((int7)((ulonglong)pcVar5 >> 8),1) & 0xffffffff,pcVar3);
              *param_4 = cVar2;
              (**(code **)(*local_28 + 0x28))(local_28,local_40);
              pcVar5 = pcVar3;
            }
            if (*param_4 != '\0') {
              FUN_00414b90(param_2,param_3);
              FUN_0096c840(0,local_60);
              FUN_0096c860(0,local_60);
              goto LAB_0096c806;
            }
          }
          else {
            (**(code **)(*local_28 + 0x10))(local_28,0x25);
            (**(code **)(*local_20 + 0x48))(local_20,&local_70);
            (**(code **)(*local_28 + 0x28))(local_28,local_70);
            local_30 = local_30 + -1;
          }
          FUN_00410f20(local_20);
        }
      }
      else {
        local_30 = iVar1;
        (**(code **)(*local_28 + 0x18))(local_28,local_2a);
      }
    } while (local_30 < (int)local_34);
  }
  (**(code **)(*local_28 + 0x48))(local_28,param_2);
  FUN_00410f20(local_28);
LAB_0096c806:
  FUN_004145c0(&local_70,2);
  FUN_004145c0(&local_50,3);
  return param_2;
}

