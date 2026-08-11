/* Ghidra address: 00b1ad40 */
/* Ghidra symbol: FUN_00b1ad40 */


undefined8 FUN_00b1ad40(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  uVar1 = FUN_00b1a9a0(param_1);
  if (*(char *)(param_1 + 0x28) != '\0') {
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),uVar1);
  }
  return uVar2;
}

