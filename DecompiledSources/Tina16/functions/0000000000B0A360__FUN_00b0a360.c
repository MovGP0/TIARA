/* Ghidra address: 00b0a360 */
/* Ghidra symbol: FUN_00b0a360 */


undefined4 FUN_00b0a360(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  uVar3 = FUN_0084e390(param_1,*(undefined4 *)(param_1 + 0x4a8),*(undefined4 *)(param_1 + 0x4ac));
  cVar1 = FUN_004113d0(uVar3,&PTR_FUN_00b081c0);
  if (cVar1 != '\0') {
    uVar2 = FUN_00b0a150(param_1,*(undefined4 *)(param_1 + 0x4a8),*(undefined4 *)(param_1 + 0x4ac));
  }
  return uVar2;
}

