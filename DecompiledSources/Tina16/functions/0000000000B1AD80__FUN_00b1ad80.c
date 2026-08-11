/* Ghidra address: 00b1ad80 */
/* Ghidra symbol: FUN_00b1ad80 */


undefined4 FUN_00b1ad80(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00b1a9a0(param_1);
  uVar2 = 0xffffffff;
  if (*(char *)(param_1 + 0x28) != '\0') {
    uVar2 = uVar1;
  }
  return uVar2;
}

