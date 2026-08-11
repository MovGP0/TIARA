/* Ghidra address: 00f85050 */
/* Ghidra symbol: FUN_00f85050 */


void FUN_00f85050(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (PTR_DAT_020030c0[5] != '\0') {
    cVar1 = FUN_0156cca0(*(undefined8 *)(param_1 + 0xd60));
    if (cVar1 != '\0') {
      uVar2 = FUN_019a45d0();
      FUN_0199dc50(uVar2,0,FUN_00f84f40,0);
    }
  }
  uVar2 = FUN_019a45d0();
  FUN_019af4e0(uVar2);
  return;
}

