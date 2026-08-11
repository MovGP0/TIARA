/* Ghidra address: 0064b8d0 */
/* Ghidra symbol: FUN_0064b8d0 */


void FUN_0064b8d0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*(longlong *)param_1[4] + 0x128))((longlong *)param_1[4],param_2);
  }
  return;
}

