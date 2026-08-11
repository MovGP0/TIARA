/* Ghidra address: 01bfc550 */
/* Ghidra symbol: FUN_01bfc550 */


void FUN_01bfc550(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x90))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*(longlong *)param_1[4] + 0x60))((longlong *)param_1[4],param_2);
  }
  return;
}

