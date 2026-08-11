/* Ghidra address: 00802fd0 */
/* Ghidra symbol: FUN_00802fd0 */


void FUN_00802fd0(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(char *)(*(longlong *)(param_1 + 0x70) + 0x4d1) != '\0') &&
      ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0x4d0) & 1) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x70) + 0x4d6) != '\x01')) {
    uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x70));
    uVar1 = thunk_FUN_0417c6e9(uVar1,0);
    if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x4d1) == '\x03') {
      thunk_FUN_0413e530(uVar1,0xf130,0);
      thunk_FUN_0413e530(uVar1,7,0x400);
      thunk_FUN_0413e530(uVar1,5,0x400);
      thunk_FUN_0413e530(uVar1,0xf030,0);
      thunk_FUN_0413e530(uVar1,0xf020,0);
      thunk_FUN_0413e530(uVar1,0xf000,0);
      thunk_FUN_0413e530(uVar1,0xf120,0);
    }
    else {
      if ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0x4d0) & 2) == 0) {
        thunk_FUN_04048b08(uVar1,0xf020,1);
      }
      if ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0x4d0) & 4) == 0) {
        thunk_FUN_04048b08(uVar1,0xf030,1);
      }
    }
  }
  return;
}

