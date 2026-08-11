/* Ghidra address: 013a67f0 */
/* Ghidra symbol: FUN_013a67f0 */


void FUN_013a67f0(undefined8 param_1,ushort *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  ushort *local_res10;
  int local_res18;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  ushort *local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  int local_30;
  int local_2c;
  longlong *local_28;
  longlong local_20;
  
  local_70 = auStack_a8;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_30 = 0;
  local_20 = FUN_010c9d50(&DAT_010c95c8,1);
  cVar1 = FUN_00440a20(local_res8,1);
  if (cVar1 == '\0') {
    FUN_00416ba0(&local_78,L"File not found: ",local_res8);
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_78);
    FUN_004134c0(uVar3);
  }
  (**(code **)(*local_28 + 0xd8))(local_28,local_res8);
  iVar2 = (**(code **)(*local_28 + 0x28))();
  local_2c = 0;
  if (-1 < iVar2 + -1) {
    do {
      *(int *)(local_20 + 0x10) = local_2c + 1;
      (**(code **)(*local_28 + 0x18))(local_28,&local_50,local_2c);
      (**(code **)(*local_28 + 0x18))(local_28,&local_80,local_2c);
      FUN_00414ad0(local_20 + 0x18,local_80);
      *(undefined4 *)(local_20 + 8) = 1;
      if (*(longlong *)(local_20 + 0x18) != 0) {
        while (cVar1 = FUN_010c9ed0(local_20), cVar1 == '\0') {
          FUN_010caad0(local_20,&local_40,1);
          FUN_010ca040(local_20,&local_88,1);
          local_34 = FUN_01aa1170(local_40);
          local_60 = local_res10;
          if (local_30 < (int)(uint)*local_res10) {
            if (local_res18 == 0x10) {
              *(undefined2 *)(*(longlong *)(local_res10 + 4) + (longlong)local_30 * 2) =
                   (undefined2)local_34;
            }
            else {
              *(undefined4 *)(*(longlong *)(local_res10 + 4) + (longlong)local_30 * 4) = local_34;
            }
            local_30 = local_30 + 1;
          }
        }
      }
      local_2c = local_2c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414560(&local_88,3);
  FUN_00414560(&local_50,3);
  FUN_00414480(&local_res8);
  return;
}

