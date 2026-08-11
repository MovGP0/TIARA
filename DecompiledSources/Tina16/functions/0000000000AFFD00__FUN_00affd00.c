/* Ghidra address: 00affd00 */
/* Ghidra symbol: FUN_00affd00 */


undefined8 FUN_00affd00(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00affcf0(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),param_2);
  }
  return uVar2;
}

