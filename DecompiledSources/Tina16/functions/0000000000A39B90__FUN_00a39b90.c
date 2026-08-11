/* Ghidra address: 00a39b90 */
/* Ghidra symbol: FUN_00a39b90 */


undefined4 FUN_00a39b90(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_00a3c6f0(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_00a39e90(param_1);
    uVar2 = *(undefined4 *)(lVar3 + 0x488);
  }
  return uVar2;
}

