/* Ghidra address: 016be3c0 */
/* Ghidra symbol: FUN_016be3c0 */


bool FUN_016be3c0(longlong param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x41);
  if (bVar1 < 0xb) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x48) + -0xc + (ulonglong)bVar1 * 0xc) = param_2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + -8 + (ulonglong)*(byte *)(param_1 + 0x41) * 0xc)
         = param_3;
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + -4 + (ulonglong)*(byte *)(param_1 + 0x41) * 0xc)
         = param_4;
    *(char *)(param_1 + 0x41) = *(char *)(param_1 + 0x41) + '\x01';
  }
  return bVar1 < 0xb;
}

