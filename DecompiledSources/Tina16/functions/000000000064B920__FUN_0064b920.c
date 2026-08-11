/* Ghidra address: 0064b920 */
/* Ghidra symbol: FUN_0064b920 */


void FUN_0064b920(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x78))(param_1);
  if (cVar1 != '\0') {
    FUN_00414ad0(param_1[4] + 0xf0,param_2);
  }
  return;
}

