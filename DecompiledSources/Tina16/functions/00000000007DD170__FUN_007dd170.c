/* Ghidra address: 007dd170 */
/* Ghidra symbol: FUN_007dd170 */


void FUN_007dd170(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x78))(param_1);
  if (cVar1 != '\0') {
    FUN_00414ad0(param_1[4] + 0xb0,param_2);
  }
  return;
}

