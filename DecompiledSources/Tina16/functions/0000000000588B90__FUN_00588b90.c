/* Ghidra address: 00588b90 */
/* Ghidra symbol: FUN_00588b90 */


ulonglong FUN_00588b90(longlong param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  int iVar2;
  ulonglong local_30;
  ushort *local_18;
  ushort *local_10;
  
  local_10 = (ushort *)0x0;
  local_18 = (ushort *)0x0;
  sVar1 = **(short **)(param_1 + 0xe0);
  if (sVar1 == 8) {
    FUN_00467e90(&local_18,*(undefined8 *)(param_1 + 0xe0));
    iVar2 = 0;
    if (local_18 != (ushort *)0x0) {
      iVar2 = *(int *)(local_18 + -2);
    }
    if (iVar2 == 1) {
      local_30 = (ulonglong)*local_18;
    }
    else {
      local_30 = param_2 - 1;
    }
  }
  else if (sVar1 == 0x100) {
    FUN_00467e90(&local_10,*(undefined8 *)(param_1 + 0xe0));
    iVar2 = 0;
    if (local_10 != (ushort *)0x0) {
      iVar2 = *(int *)(local_10 + -2);
    }
    if (iVar2 == 1) {
      local_30 = (ulonglong)*local_10;
    }
    else {
      local_30 = param_2 - 1;
    }
  }
  else if (sVar1 == 0x102) {
    FUN_00467e90(&local_10,*(undefined8 *)(param_1 + 0xe0));
    iVar2 = 0;
    if (local_10 != (ushort *)0x0) {
      iVar2 = *(int *)(local_10 + -2);
    }
    if (iVar2 == 1) {
      local_30 = (ulonglong)*local_10;
    }
    else {
      local_30 = param_2 - 1;
    }
  }
  else {
    FUN_00464c60(*(undefined8 *)(param_1 + 0xe0));
    local_30 = FUN_0040c840();
  }
  if (param_2 <= (longlong)local_30) {
    if ((longlong)local_30 <= param_3) goto code_r0x00588d02;
  }
  FUN_00588420();
code_r0x00588d02:
  FUN_00414560(&local_18,2);
  return local_30;
}

