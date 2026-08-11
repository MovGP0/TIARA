/* Ghidra address: 00b1f3d0 */
/* Ghidra symbol: FUN_00b1f3d0 */


undefined8 * FUN_00b1f3d0(undefined8 *param_1,ushort param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  local_38 = param_1;
  FUN_00414520(param_1);
  uVar1 = (ulonglong)param_2;
  if (uVar1 < 0xf) {
    if (4 < uVar1) {
      if (uVar1 - 5 < 4) {
LAB_00b1f52f:
        FUN_00b1e9b0(auStack_68,&local_20);
        FUN_00414b90(local_38,local_20);
        goto code_r0x00b1f5b9;
      }
      if (4 < uVar1 - 9) {
        if (uVar1 - 9 == 5) {
          FUN_004168e0(local_38,*(undefined8 *)(PTR_DAT_02004830 + 0x10));
        }
        goto code_r0x00b1f5b9;
      }
    }
  }
  else if (uVar1 < 0x25) {
    if (6 < uVar1 - 0xf) {
      if (uVar1 - 0xf == 7) {
        local_48 = *(undefined8 *)(PTR_DAT_02004830 + 0x30);
        FUN_00416cd0(&local_28,3,*(undefined8 *)(PTR_DAT_02004830 + 0x10),&DAT_00b1f63c);
        FUN_004168e0(local_38,local_28);
      }
      goto code_r0x00b1f5b9;
    }
  }
  else {
    if (uVar1 - 0x25 < 4) {
      FUN_00b1f1d0(auStack_68,&local_30);
      FUN_00414b90(local_38,local_30);
      goto code_r0x00b1f5b9;
    }
    if (uVar1 - 0x29 < 4) goto LAB_00b1f52f;
    if (4 < uVar1 - 0x2d) goto code_r0x00b1f5b9;
  }
  uVar2 = FUN_00b1c6d0(param_2);
  if (-1 < (int)uVar2) {
    uVar2 = FUN_00415f40(local_38,(&PTR_s_General_01e82fb8)[(int)uVar2]);
  }
  if ((ushort)(param_2 - 8) < 0x10) {
    bVar3 = ((int)CONCAT62((int6)((ulonglong)uVar2 >> 0x10),1) << ((byte)(param_2 - 8) & 0x1f) &
            0x380U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    FUN_00415e60(&local_18,*(undefined2 *)(PTR_DAT_02004830 + 10));
    FUN_00b15430(&local_10,*local_38,&DAT_00b1f62c,local_18);
    FUN_00414b90(local_38,local_10);
  }
code_r0x00b1f5b9:
  FUN_00414520(&local_30);
  FUN_00414480(&local_28);
  FUN_004145c0(&local_20,3);
  return local_38;
}

