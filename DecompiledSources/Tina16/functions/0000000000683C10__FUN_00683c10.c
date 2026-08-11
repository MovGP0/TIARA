/* Ghidra address: 00683c10 */
/* Ghidra symbol: FUN_00683c10 */


void FUN_00683c10(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  cVar1 = FUN_006838c0(param_1);
  if (cVar1 != '\0') {
    *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 4;
  }
  return;
}

