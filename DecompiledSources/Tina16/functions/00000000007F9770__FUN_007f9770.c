/* Ghidra address: 007f9770 */
/* Ghidra symbol: FUN_007f9770 */


undefined1 FUN_007f9770(char param_1)

{
  undefined4 uVar1;
  undefined8 local_28;
  undefined1 local_20;
  
  local_28 = thunk_FUN_04128719();
  local_20 = 0;
  if (param_1 == '\0') {
    uVar1 = FUN_00427ab0();
    thunk_FUN_0413b16e(uVar1,FUN_007f9720,&local_28);
  }
  else {
    thunk_FUN_039eeba8(FUN_007f9730,&local_28);
  }
  return local_20;
}

