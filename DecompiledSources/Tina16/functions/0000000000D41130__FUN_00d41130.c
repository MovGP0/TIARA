/* Ghidra address: 00d41130 */
/* Ghidra symbol: FUN_00d41130 */


void FUN_00d41130(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_00d36fb0(*(undefined8 *)(param_1 + 8));
  if ((cVar2 == '\0') || (*(char *)(param_1 + 0x29) == '\0')) {
    uVar1 = FUN_00788400(param_1,param_2);
    *(undefined8 *)(param_2 + 0x18) = uVar1;
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  else {
    FUN_00789690(param_1,param_2);
  }
  return;
}

