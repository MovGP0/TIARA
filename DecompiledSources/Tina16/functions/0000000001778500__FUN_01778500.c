/* Ghidra address: 01778500 */
/* Ghidra symbol: FUN_01778500 */


void FUN_01778500(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  longlong *local_30;
  
  local_60 = auStack_b8;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_48 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x28))();
  local_34 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x18))
                (*(longlong **)(param_1 + 0xf8),&local_68,local_34);
      FUN_01604ab0(&local_48,local_68,local_res18);
      local_98 = local_48;
      FUN_00416cd0(&local_48,3,local_res10,&LAB_017787f4);
      (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x18))
                (*(longlong **)(param_1 + 0xf0),&local_70,local_34);
      local_3c = FUN_0043fc00(local_70);
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x28))(*(longlong **)(param_1 + 0xf8));
      if (local_34 < iVar2 + -1) {
        (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x18))
                  (*(longlong **)(param_1 + 0xf0),&local_78,local_34 + 1);
        local_40 = FUN_0043fc00(local_78);
      }
      else {
        local_40 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x28))
                             (*(longlong **)(param_1 + 0xe8));
        local_40 = local_40 + -1;
      }
      (**(code **)(*local_30 + 0x90))(local_30);
      local_38 = local_3c;
      if (local_3c <= local_40) {
        iVar2 = (local_40 - local_3c) + 1;
        do {
          (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x18))
                    (*(longlong **)(param_1 + 0xe8),&local_80,local_38);
          (**(code **)(*local_30 + 0x78))(local_30,local_80);
          local_38 = local_38 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      (**(code **)(*local_30 + 0x100))(local_30,local_48);
      local_34 = local_34 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(local_30);
  FUN_00414560(&local_80,4);
  FUN_00414480(&local_48);
  FUN_00414480(&local_res10);
  return;
}

