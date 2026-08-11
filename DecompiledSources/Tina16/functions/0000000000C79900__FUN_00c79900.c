/* Ghidra address: 00c79900 */
/* Ghidra symbol: FUN_00c79900 */


undefined8 FUN_00c79900(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x298) == 0) {
    uVar2 = 0x480;
  }
  else {
    lVar1 = thunk_FUN_03a99535(*(longlong *)(param_1 + 0x298),0x480);
    if (lVar1 == 0) {
      uVar2 = 0x47c;
    }
    else {
      uVar2 = 0x480;
    }
  }
  return uVar2;
}

