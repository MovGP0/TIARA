/* Ghidra address: 01bff290 */
/* Ghidra symbol: FUN_01bff290 */


undefined4 FUN_01bff290(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x90);
  if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) && (*(int *)(param_1 + 0x90) == 0x1fffffff)) {
    uVar1 = *(undefined4 *)(param_1 + 0x8c);
  }
  return uVar1;
}

