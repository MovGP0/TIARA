/* Ghidra address: 006d6950 */
/* Ghidra symbol: FUN_006d6950 */


void FUN_006d6950(longlong param_1)

{
  undefined4 uVar1;
  undefined8 in_RAX;
  
  if ((*(longlong *)(param_1 + 0x498) == 0) || (*(char *)(param_1 + 0x4a0) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  FUN_006d6860(param_1,uVar1);
  return;
}

