/* Ghidra address: 01bfc460 */
/* Ghidra symbol: FUN_01bfc460 */


void FUN_01bfc460(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x78))(param_1);
  if (cVar1 != '\0') {
    FUN_00414ad0(*(longlong *)(param_1[4] + 0x80) + 0xf0,param_2);
  }
  return;
}

