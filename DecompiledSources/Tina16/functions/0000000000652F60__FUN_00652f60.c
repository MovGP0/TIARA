/* Ghidra address: 00652f60 */
/* Ghidra symbol: FUN_00652f60 */


void FUN_00652f60(longlong *param_1,longlong param_2,int *param_3,byte param_4,undefined8 *param_5,
                 int *param_6,char param_7)

{
  int iVar1;
  bool bVar2;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar3;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  local_40 = *param_5;
  uStack_38 = param_5[1];
  uStack_30 = param_5[2];
  if ((param_4 == 0) || (*(char *)(param_2 + 0xb3) != (&DAT_01df5b28)[param_4])) {
    if ((*(int *)(param_2 + 0x2e8) != 0) && (*(int *)(param_2 + 0x2ec) != 0)) {
      local_44 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))
                           (*(longlong **)(param_2 + 0xd8),0);
      local_48 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))
                           (*(longlong **)(param_2 + 0xd8),1);
      local_4c = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))
                           (*(longlong **)(param_2 + 0xd8),2);
      local_50 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))
                           (*(longlong **)(param_2 + 0xd8),3);
      if ((*(byte *)(param_2 + 0xb3) & 4) == 0) {
        if ((*(byte *)(param_2 + 0xb3) & 1) == 0) {
          local_44 = thunk_FUN_03f3ed25(*(undefined4 *)(param_2 + 0x2d4),*param_3,
                                        *(undefined4 *)(param_2 + 0x2e8));
          local_44 = local_44 - local_4c / 2;
        }
      }
      else if ((*(byte *)(param_2 + 0xb3) & 1) == 0) {
        local_44 = *param_3 - (*(int *)(param_2 + 0x2e8) - *(int *)(param_2 + 0x2d4));
      }
      else {
        local_4c = *param_3 - (*(int *)(param_2 + 0x2e8) - *(int *)(param_2 + 0x2d4));
      }
      if ((*(byte *)(param_2 + 0xb3) & 8) == 0) {
        if ((*(byte *)(param_2 + 0xb3) & 2) == 0) {
          local_48 = thunk_FUN_03f3ed25(*(undefined4 *)(param_2 + 0x2d8),param_3[1],
                                        *(undefined4 *)(param_2 + 0x2ec));
          local_48 = local_48 - local_50 / 2;
        }
      }
      else if ((*(byte *)(param_2 + 0xb3) & 2) == 0) {
        local_48 = param_3[1] - (*(int *)(param_2 + 0x2ec) - *(int *)(param_2 + 0x2d8));
      }
      else {
        local_50 = param_3[1] - (*(int *)(param_2 + 0x2ec) - *(int *)(param_2 + 0x2d8));
      }
      if (param_7 != '\0') {
        if ((*(byte *)(param_2 + 0xb3) & 5) != 0) {
          local_44 = thunk_FUN_03f3ed25(*(undefined4 *)(param_2 + 0x2dc),*param_3,
                                        *(undefined4 *)(param_2 + 0x2e8));
          local_44 = local_44 - local_4c / 2;
        }
        if ((*(byte *)(param_2 + 0xb3) & 10) != 0) {
          local_48 = thunk_FUN_03f3ed25(*(undefined4 *)(param_2 + 0x2e0),param_3[1],
                                        *(undefined4 *)(param_2 + 0x2ec));
          local_48 = local_48 - local_50 / 2;
        }
      }
      FUN_00665b50(*(undefined8 *)(param_2 + 0xd8),local_44,local_48,local_4c,
                   CONCAT44(uVar3,local_50),1);
    }
    if (param_4 == 0) {
      return;
    }
  }
  local_4c = param_6[2] - *param_6;
  if (local_4c < 0) {
LAB_0065327c:
    local_4c = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))
                         (*(longlong **)(param_2 + 0xd8),2);
  }
  else {
    if (param_4 < 8) {
      bVar2 = ((int)CONCAT71((uint7)(uint3)((uint)local_4c >> 8),1) << (param_4 & 0x1f) & 0x58U) !=
              0;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) goto LAB_0065327c;
  }
  local_50 = param_6[3] - param_6[1];
  if (-1 < local_50) {
    if (param_4 < 8) {
      bVar2 = ((int)CONCAT71((uint7)(uint3)((uint)local_50 >> 8),1) << (param_4 & 0x1f) & 0x46U) !=
              0;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) goto LAB_006532f2;
  }
  local_50 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))(*(longlong **)(param_2 + 0xd8),3)
  ;
LAB_006532f2:
  local_44 = *param_6;
  local_48 = param_6[1];
  if (param_4 < 4) {
    if (param_4 == 3) {
      *param_6 = *param_6 + local_4c;
    }
    else if (param_4 == 1) {
      param_6[1] = param_6[1] + local_50;
    }
    else if (param_4 == 2) {
      param_6[3] = param_6[3] - local_50;
      local_48 = param_6[3];
    }
  }
  else if (param_4 == 4) {
    param_6[2] = param_6[2] - local_4c;
    local_44 = param_6[2];
  }
  else if (param_4 == 6) {
    local_44 = *(int *)(param_2 + 0x90);
    local_48 = *(int *)(param_2 + 0x94);
    (**(code **)(*param_1 + 0x1e0))
              (param_1,param_2,&local_44,&local_48,&local_4c,&local_50,param_6,&local_40);
  }
  FUN_00665b50(*(undefined8 *)(param_2 + 0xd8),local_44,local_48,local_4c,local_50,1);
  iVar1 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))(*(longlong **)(param_2 + 0xd8),2);
  if ((iVar1 == local_4c) &&
     (iVar1 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))
                        (*(longlong **)(param_2 + 0xd8),3), iVar1 == local_50)) {
    return;
  }
  if (param_4 < 4) {
    if (param_4 == 3) {
      iVar1 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))
                        (*(longlong **)(param_2 + 0xd8),2);
      *param_6 = *param_6 - (local_4c - iVar1);
    }
    else if (param_4 == 1) {
      iVar1 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))
                        (*(longlong **)(param_2 + 0xd8),3);
      param_6[1] = param_6[1] - (local_50 - iVar1);
    }
    else if (param_4 == 2) {
      iVar1 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))
                        (*(longlong **)(param_2 + 0xd8),3);
      param_6[3] = param_6[3] + (local_50 - iVar1);
    }
  }
  else if (param_4 == 4) {
    iVar1 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))(*(longlong **)(param_2 + 0xd8),2);
    param_6[2] = param_6[2] + (local_4c - iVar1);
  }
  else if (param_4 == 5) {
    iVar1 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))(*(longlong **)(param_2 + 0xd8),2);
    param_6[2] = param_6[2] + (local_4c - iVar1);
    iVar1 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))(*(longlong **)(param_2 + 0xd8),3);
    param_6[3] = param_6[3] + (local_50 - iVar1);
  }
  return;
}

