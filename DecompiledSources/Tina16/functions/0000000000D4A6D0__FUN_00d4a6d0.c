/* Ghidra address: 00d4a6d0 */
/* Ghidra symbol: FUN_00d4a6d0 */


undefined8 FUN_00d4a6d0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_88 [136];
  
  FUN_0040d200(local_88,0x80,0);
  iVar1 = FUN_00d36c90();
  if (iVar1 < 0x60001) {
    uVar2 = 0x6c;
  }
  else {
    uVar2 = 0x80;
  }
  return uVar2;
}

