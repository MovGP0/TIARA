/* Ghidra address: 00cc1060 */
/* Ghidra symbol: FUN_00cc1060 */


void FUN_00cc1060(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(char *)((longlong)param_1 + 0x1c) != '\0') {
    FUN_0041ddd0(local_20,PTR_PTR_02003ef8);
    uVar1 = FUN_0086dfd0(&PTR_FUN_00cc0328,1,local_20[0]);
    FUN_004134c0(uVar1);
  }
  (**(code **)(*param_1 + 0x80))(param_1);
  (**(code **)(*param_1 + 0x70))(param_1);
  FUN_004d1f40(param_1);
  FUN_00414480(local_20);
  return;
}

