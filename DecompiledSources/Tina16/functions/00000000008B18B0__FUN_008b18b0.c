/* Ghidra address: 008b18b0 */
/* Ghidra symbol: FUN_008b18b0 */


undefined8 FUN_008b18b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))(*param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_008b16b0(param_1,param_2,param_3,param_4);
  }
  return param_2;
}

