/* Ghidra address: 016be410 */
/* Ghidra symbol: FUN_016be410 */


bool FUN_016be410(longlong param_1,undefined1 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x41);
  if (1 < bVar1) {
    *(char *)(param_1 + 0x41) = *(char *)(param_1 + 0x41) + -1;
    uVar2 = (ulonglong)*(byte *)(param_1 + 0x41);
    *param_2 = *(undefined1 *)(*(longlong *)(param_1 + 0x48) + -0xc + uVar2 * 0xc);
    *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + -8 + uVar2 * 0xc);
    *param_4 = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + -4 + uVar2 * 0xc);
  }
  return 1 < bVar1;
}

