/* Ghidra address: 0112ef90 */
/* Ghidra symbol: FUN_0112ef90 */


undefined8 FUN_0112ef90(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_2a;
  byte local_29;
  
  FUN_0112e3a0(&local_2a,param_1,param_2);
  cVar1 = FUN_0112d940(&local_2a);
  if (cVar1 == '\0') {
    if ((local_29 & 0x80) == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

