/* Ghidra address: 00b9c0a0 */
/* Ghidra symbol: FUN_00b9c0a0 */


void FUN_00b9c0a0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x14) = param_2;
  FUN_004169f0(param_1 + 8);
  uVar2 = FUN_00458d50();
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  cVar1 = FUN_0045aee0(uVar2);
  *(bool *)(param_1 + 0x30) = cVar1 == '\0';
  *(undefined1 *)(param_1 + 0x31) = 1;
  return;
}

