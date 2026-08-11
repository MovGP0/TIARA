/* Ghidra address: 00f20360 */
/* Ghidra symbol: FUN_00f20360 */


void FUN_00f20360(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((*(char *)(param_1 + 0x11) == '\0') && (*(char *)(param_1 + 0x10) == '\0')) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
    if (2 < iVar1) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
                (*(longlong **)(param_1 + 0x20),local_20,2);
      uVar2 = FUN_0043fc00(local_20[0]);
      *(bool *)(param_1 + 0x13) = (uVar2 & 1) != 0;
    }
  }
  FUN_00414480(local_20);
  return;
}

