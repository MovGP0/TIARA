/* Ghidra address: 004463c0 */
/* Ghidra symbol: FUN_004463c0 */


ushort FUN_004463c0(longlong param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  
  if (*(char *)(param_1 + 0xe8) == '\0') {
    uVar1 = (ushort)*(byte *)(param_2 + param_3);
  }
  else {
    uVar1 = *(ushort *)(param_2 + (longlong)param_3 * 2);
  }
  return uVar1;
}

