/* Ghidra address: 006a0410 */
/* Ghidra symbol: FUN_006a0410 */


void FUN_006a0410(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(char *)(*(longlong *)(param_1 + 0x30) + 0x4d1) != '\0') &&
      ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0x4d0) & 1) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x30) + 0x4d6) != '\x01')) {
    uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x30));
    uVar1 = thunk_FUN_0417c6e9(uVar1,0);
    thunk_FUN_0413e530(uVar1,0xf130,0);
    thunk_FUN_0413e530(uVar1,0xf030,0);
    thunk_FUN_0413e530(uVar1,0xf020,0);
    thunk_FUN_0413e530(uVar1,0xf120,0);
  }
  return;
}

