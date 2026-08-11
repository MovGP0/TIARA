/* Ghidra address: 015fc1d0 */
/* Ghidra symbol: FUN_015fc1d0 */


undefined8 FUN_015fc1d0(ulonglong *param_1)

{
  undefined8 uVar1;
  
  if (((*param_1 & 0x2000000) == 0) && (PTR_DAT_020030c0[6] != '\0')) {
    uVar1 = CONCAT71((int7)((ulonglong)PTR_DAT_020030c0 >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

