/* Ghidra address: 014736b0 */
/* Ghidra symbol: FUN_014736b0 */


undefined1 FUN_014736b0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined8 local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined1 *local_50;
  int local_3c;
  undefined1 local_29;
  longlong local_28;
  longlong *local_20;
  
  local_50 = auStack_d8;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_58 = 0;
  local_60 = 0;
  local_29 = 1;
  *PTR_DAT_02002ce0 = 0;
  local_28 = FUN_016b97f0(&DAT_016b45f0,1,0);
  *(undefined1 *)(*(longlong *)(local_28 + 0x10) + 0x231) = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_016cff60(local_28,1,1,0);
  local_3c = *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x4c0);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x4e0) + -1;
  if (local_3c <= iVar1) {
    iVar1 = (iVar1 - local_3c) + 1;
    do {
      FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),&local_58,0,local_3c);
      if (local_58 != 0) {
        FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),&local_60,1,local_3c);
        if (local_60 != 0) {
          FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),&local_70,0,local_3c);
          FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),&local_78,1,local_3c);
          local_b8 = local_78;
          FUN_00416cd0(&local_68,3,local_70,&DAT_01473a28);
          (**(code **)(*local_20 + 0x78))(local_20,local_68);
        }
      }
      local_3c = local_3c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(*local_20 + 0x28))(local_20);
  if (0 < iVar1) {
    FUN_016bb740(local_28,local_20);
    while( true ) {
      FUN_016b8f10(&local_80,*(undefined8 *)(local_28 + 0xd80));
      iVar1 = FUN_00415a60(local_80,&DAT_01473a38);
      if (iVar1 == 0) break;
      local_b8 = local_b8 & 0xffffffffffffff00;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 1;
      local_98 = 0;
      local_90 = 1;
      FUN_00ee2730(*(undefined8 *)(local_28 + 8),0,0,0);
    }
  }
  *(undefined1 *)(*(longlong *)(local_28 + 0x10) + 0x231) = 1;
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_004144d0(&local_80);
  FUN_00414560(&local_78,5);
  return local_29;
}

