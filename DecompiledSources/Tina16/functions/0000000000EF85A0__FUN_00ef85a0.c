/* Ghidra address: 00ef85a0 */
/* Ghidra symbol: FUN_00ef85a0 */


void FUN_00ef85a0(longlong param_1,undefined8 *param_2,ushort *param_3)

{
  int iVar1;
  ushort *local_30;
  
  for (local_30 = (ushort *)*param_2;
      (local_30 != (ushort *)0x0 && (*(longlong *)(local_30 + 0x1f8) != 0));
      local_30 = *(ushort **)(local_30 + 0x1f8)) {
  }
  iVar1 = 1;
  if ((*param_3 != 0) && (local_30 == (ushort *)0x0)) {
    FUN_00ef7d90(&local_30,*(undefined8 *)(param_1 + 0x98));
    *param_2 = local_30;
  }
  for (; iVar1 <= (int)(uint)*param_3; iVar1 = iVar1 + 1) {
    if (*local_30 == 500) {
      FUN_00ef7d90(local_30 + 0x1f8,*(undefined8 *)(param_1 + 0x98));
      local_30 = *(ushort **)(local_30 + 0x1f8);
    }
    *local_30 = *local_30 + 1;
    local_30[(longlong)(int)(*local_30 - 1) + 1] = param_3[iVar1];
  }
  return;
}

