/* Ghidra address: 00f83630 */
/* Ghidra symbol: FUN_00f83630 */


undefined8 FUN_00f83630(longlong param_1,ushort *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (*(ulonglong *)(param_1 + 8) == 0) {
    if (*param_2 == 0xffff) {
      *param_2 = 1;
    }
    else {
      *param_2 = *param_2 + 1;
    }
    *(ulonglong *)(param_1 + 8) = (ulonglong)*param_2;
  }
  else if ((ulonglong)*param_2 != *(ulonglong *)(param_1 + 8)) {
    uVar1 = 0;
  }
  return uVar1;
}

