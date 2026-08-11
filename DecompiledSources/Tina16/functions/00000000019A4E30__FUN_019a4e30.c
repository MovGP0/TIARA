/* Ghidra address: 019a4e30 */
/* Ghidra symbol: FUN_019a4e30 */


undefined8 FUN_019a4e30(longlong param_1)

{
  undefined8 uVar1;
  
  if ((((*(longlong *)(param_1 + 0x3d8) == 0) || (*(int *)(param_1 + 0x400) < 0)) ||
      (1 < *(int *)(*(longlong *)(param_1 + 0xd8) + 0x10))) ||
     ((*PTR_DAT_02002b78 != '\0' || (*PTR_DAT_020052b8 != '\0')))) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)PTR_DAT_020052b8 >> 8),1);
  }
  return uVar1;
}

