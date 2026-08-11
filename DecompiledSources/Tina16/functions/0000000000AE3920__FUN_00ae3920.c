/* Ghidra address: 00ae3920 */
/* Ghidra symbol: FUN_00ae3920 */


void FUN_00ae3920(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x28);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  FUN_00ad4730(param_1);
  while (*(char *)(param_1 + 0x44) == '\x02') {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x28);
    FUN_00ad4730(param_1);
  }
  return;
}

