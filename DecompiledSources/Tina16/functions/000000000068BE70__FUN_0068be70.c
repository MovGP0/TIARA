/* Ghidra address: 0068be70 */
/* Ghidra symbol: FUN_0068be70 */


void FUN_0068be70(longlong param_1,byte param_2)

{
  undefined8 in_RAX;
  bool bVar1;
  
  if (*(byte *)(param_1 + 0x4cc) != param_2) {
    if (param_2 < 8) {
      bVar1 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_2 & 0x1f) & 0x18U) != 0;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x90))(*(longlong **)(param_1 + 0x4a0));
      FUN_0068be20(param_1,0);
    }
    *(byte *)(param_1 + 0x4cc) = param_2;
    FUN_00655b90(param_1);
  }
  return;
}

