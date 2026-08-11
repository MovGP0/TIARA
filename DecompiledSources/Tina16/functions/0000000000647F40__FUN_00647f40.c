/* Ghidra address: 00647f40 */
/* Ghidra symbol: FUN_00647f40 */


undefined8 FUN_00647f40(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = thunk_FUN_03ee9fb0();
  if ((uVar1 & 0xffffff80) == 0xff515700) {
    uVar2 = 0x100;
  }
  else if ((uVar1 & 0xffffff80) == 0xff515780) {
    uVar2 = 0x80;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

