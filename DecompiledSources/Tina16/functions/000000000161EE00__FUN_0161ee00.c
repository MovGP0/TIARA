/* Ghidra address: 0161ee00 */
/* Ghidra symbol: FUN_0161ee00 */


longlong FUN_0161ee00(undefined8 param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_res8;
  int *local_res10;
  int *local_res18;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_78;
  short *local_70;
  undefined4 local_68;
  int local_64;
  longlong local_60;
  longlong *local_58;
  int local_44;
  longlong local_40;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  local_b0 = auStack_108;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_70 = (short *)0x0;
  local_78 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  local_58 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_40 = 0;
  cVar2 = FUN_00440a20(local_res8,1);
  if (cVar2 == '\0') {
    FUN_0041ddd0(&local_c0,PTR_PTR_02005798);
    local_e8 = local_res8;
    FUN_00416cd0(&local_b8,3,local_c0,&LAB_0161f24c);
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_b8);
    FUN_004134c0(uVar4);
  }
  (**(code **)(*local_58 + 0xd8))(local_58,local_res8);
  local_44 = (**(code **)(*local_58 + 0x28))(local_58);
  local_68 = 2;
  local_34 = 0;
  local_30 = 0;
  *local_res18 = local_44;
  local_38 = *local_res18 * 2;
  local_40 = FUN_00409570((longlong)(*local_res18 << 4));
  local_44 = 0;
  iVar3 = (**(code **)(*local_58 + 0x28))();
  local_64 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(*local_58 + 0x18))(local_58,&local_70,local_64);
      if (*local_70 != 0x23) {
        FUN_0161ece0(auStack_108,local_70);
      }
      local_64 = local_64 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *local_res18 = local_44;
  local_88 = FUN_00409570((longlong)(local_44 << 4));
  local_64 = 0;
  iVar3 = local_44;
  if (-1 < local_44 + -1) {
    do {
      local_90 = *(undefined8 *)(local_40 + (longlong)(local_64 * 2) * 8);
      local_98 = *(undefined8 *)(local_40 + (longlong)(local_64 * 2 + 1) * 8);
      uVar4 = FUN_01698550(local_90);
      lVar1 = local_88;
      lVar5 = (longlong)local_64;
      *(undefined8 *)(local_88 + lVar5 * 0x10) = uVar4;
      uVar4 = FUN_01698550(local_98);
      *(undefined8 *)(lVar1 + 8 + lVar5 * 0x10) = uVar4;
      local_64 = local_64 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004095f0(local_40);
  local_60 = local_88;
  *local_res10 = local_44;
  FUN_00410f20(local_58);
  FUN_00414560(&local_d8,5);
  FUN_00414560(&local_78,2);
  FUN_00414480(&local_res8);
  return local_60;
}

