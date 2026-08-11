/* Ghidra address: 00c2e3f0 */
/* Ghidra symbol: FUN_00c2e3f0 */


void FUN_00c2e3f0(longlong param_1,byte param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  byte local_19;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  lVar1 = FUN_00c29d60(*(undefined8 *)(param_1 + 0x10));
  local_19 = param_2;
  if (*(int *)(lVar1 + 0x10) <= (int)(uint)param_2) {
    lVar1 = FUN_00c29d60(*(undefined8 *)(param_1 + 0x10));
    if (0 < *(int *)(lVar1 + 0x10)) {
      lVar1 = FUN_00c29d60(*(undefined8 *)(param_1 + 0x10));
      if ((uint)param_2 == *(uint *)(lVar1 + 0x10)) {
        lVar1 = FUN_00c29d60(*(undefined8 *)(param_1 + 0x10));
        if (*(int *)(lVar1 + 0x10) < 0x100) {
          uVar2 = FUN_00c29d60(*(undefined8 *)(param_1 + 0x10));
          FUN_00c232f0(uVar2,DAT_01e9f560);
          FUN_0041ddd0(&local_10,PTR_PTR_02004ac8);
          FUN_00c1a780(param_1,1,local_10);
          goto LAB_00c2e4d7;
        }
      }
      FUN_0041ddd0(&local_18,PTR_PTR_02004e18);
      FUN_00c1a780(param_1,1,local_18);
      local_19 = 0;
    }
  }
LAB_00c2e4d7:
  *(byte *)(param_1 + 0x1c) = local_19;
  FUN_00414560(&local_18,2);
  return;
}

