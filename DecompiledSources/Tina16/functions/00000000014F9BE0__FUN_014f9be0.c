/* Ghidra address: 014f9be0 */
/* Ghidra symbol: FUN_014f9be0 */


ulonglong FUN_014f9be0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  return CONCAT71((int7)((ulonglong)((longlong)iVar1 / 10) >> 8),iVar1 % 10 == 0) & 0xffffffff;
}

