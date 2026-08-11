/* Ghidra address: 012bc560 */
/* Ghidra symbol: FUN_012bc560 */


void FUN_012bc560(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x708) != '\0') {
    uVar1 = FUN_007ffaf0(param_1);
    iVar2 = FUN_00807790(uVar1);
    uVar1 = FUN_007ffaf0(param_1);
    iVar3 = FUN_008077f0(uVar1);
    FUN_00806af0(param_1,((iVar2 + iVar3) - *(int *)(param_1 + 0x98)) + -0x28);
    uVar1 = FUN_007ffaf0(param_1);
    iVar2 = FUN_008077d0(uVar1);
    uVar1 = FUN_007ffaf0(param_1);
    iVar3 = FUN_008077b0(uVar1);
    FUN_00806b40(param_1,((iVar2 + iVar3) - *(int *)(param_1 + 0x9c)) + -0x78);
  }
  *(undefined1 *)(param_1 + 0x708) = 0;
  return;
}

