/* Ghidra address: 00c6f5c0 */
/* Ghidra symbol: FUN_00c6f5c0 */


void FUN_00c6f5c0(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)(param_1 + 8) = param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  cVar2 = FUN_004113d0(uVar1,&PTR_FUN_00c74980);
  if (cVar2 != '\0') {
    FUN_00c7b0f0(uVar1);
  }
  return;
}

