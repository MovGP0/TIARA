/* Ghidra address: 008274c0 */
/* Ghidra symbol: FUN_008274c0 */


void FUN_008274c0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_004b0f00(*(undefined8 *)(param_1 + 0x108),param_2);
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + -1;
    FUN_004b0e80(*(undefined8 *)(param_1 + 0x108),param_2,0);
  }
  return;
}

