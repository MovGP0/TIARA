/* Ghidra address: 01af11d0 */
/* Ghidra symbol: FUN_01af11d0 */


void FUN_01af11d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x7a0) == '\0') {
    *(undefined1 *)(param_1 + 0x7b0) = 1;
    if (*(longlong *)(param_1 + 0x798) != 0) {
      (**(code **)(param_1 + 0x798))(*(undefined8 *)(param_1 + 0x788));
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x7b0) = 1;
    if (*(longlong *)PTR_DAT_02004e40 != 0) {
      uVar1 = FUN_0065b870(*(undefined8 *)PTR_DAT_02004e40);
      thunk_FUN_0413e052(uVar1,0x123b,1,0);
    }
  }
  return;
}

