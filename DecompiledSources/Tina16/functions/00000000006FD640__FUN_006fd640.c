/* Ghidra address: 006fd640 */
/* Ghidra symbol: FUN_006fd640 */


void FUN_006fd640(longlong param_1)

{
  char cVar1;
  
  if (((*(ushort *)(param_1 + 0x34) & 9) != 0) && (cVar1 = FUN_0065be20(param_1), cVar1 == '\0')) {
    return;
  }
  FUN_006fb520(param_1,*(undefined4 *)(param_1 + 0x4a4),*(undefined4 *)(param_1 + 0x4a8));
  FUN_006fd920(param_1);
  return;
}

