/* Ghidra address: 00542060 */
/* Ghidra symbol: FUN_00542060 */


longlong * FUN_00542060(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 *local_70;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  int local_30;
  int local_2c;
  undefined8 *local_28;
  int local_1c;
  
  local_70 = auStack_98;
  local_78 = 0;
  local_48 = 0;
  local_40 = FUN_00410e60(&DAT_00541e30,1);
  if (local_40 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = local_40 + 0x10;
  }
  FUN_0041b840(&local_48,lVar2);
  if (DAT_020116b8 == 0) {
    DAT_020116b8 = FUN_00410e60(&DAT_00401a88,1);
  }
  if (*(longlong *)PTR_PTR_02002ff8 == 0) {
    FUN_004098e0(0x1a);
  }
  uVar1 = FUN_004121f0(DAT_020116b8);
  FUN_00411f00(uVar1,0xffffffff);
  local_28 = *(undefined8 **)PTR_PTR_02004e98;
  local_30 = FUN_00534770();
  if (*(int *)(*(longlong *)(param_1 + 0x40) + 0x18) == local_30) {
    FUN_004194b0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8),&DAT_005341c0);
    FUN_005423b0(0,local_70);
  }
  else {
    local_1c = 0;
    for (; local_28 != (undefined8 *)0x0; local_28 = (undefined8 *)*local_28) {
      if ((local_28[5] != 0) ||
         (lVar2 = FUN_00427c10(local_28[1],L"@GetPackageInfoTable"), lVar2 != 0)) {
        local_1c = local_1c + 1;
      }
    }
    FUN_00419260(param_2,&DAT_005341c0,1,(longlong)local_1c);
    local_1c = 0;
    for (local_28 = *(undefined8 **)PTR_PTR_02004e98; local_28 != (undefined8 *)0x0;
        local_28 = (undefined8 *)*local_28) {
      if ((local_28[5] != 0) ||
         (lVar2 = FUN_00427c10(local_28[1],L"@GetPackageInfoTable"), lVar2 != 0)) {
        FUN_00541ec0(auStack_98,local_28);
      }
    }
    local_50 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 8);
    local_58 = local_50;
    if (local_50 != 0) {
      local_58 = *(longlong *)(local_50 + -8);
    }
    local_2c = 0;
    local_28 = (undefined8 *)0x0;
    iVar3 = (int)local_58;
    if (-1 < (int)local_58 + -1) {
      do {
        FUN_00410f20(*(undefined8 *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x40) + 8) + (longlong)local_2c * 8));
        local_2c = local_2c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00419260(param_2,&DAT_005341c0,1,(longlong)local_1c);
    if (0 < local_1c) {
      local_60 = *param_2;
      if (local_60 != 0) {
        local_60 = *(longlong *)(local_60 + -8);
      }
      if (local_40 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = local_40 + 0x18;
      }
      FUN_00564850(&LAB_00541b28,&local_78,lVar2);
      FUN_005647f0(*param_2,local_60 + -1,local_78);
    }
    FUN_004194b0(*(longlong *)(param_1 + 0x40) + 8,*param_2,&DAT_005341c0);
    *(int *)(*(longlong *)(param_1 + 0x40) + 0x18) = local_30;
    if (DAT_020116b8 == 0) {
      DAT_020116b8 = FUN_00410e60(&DAT_00401a88,1);
    }
    FUN_00412130(DAT_020116b8);
  }
  FUN_0041b800(&local_78);
  FUN_0041b800(&local_48);
  return param_2;
}

