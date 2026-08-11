/* Ghidra address: 0058d0b0 */
/* Ghidra symbol: FUN_0058d0b0 */


undefined8 FUN_0058d0b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  
  cVar1 = **(char **)*param_3;
  if (cVar1 == '\x05') {
    FUN_0058cab0(param_2,param_3,param_1);
  }
  else if (cVar1 == '\n') {
    FUN_0058cb30(param_2,param_3,param_1);
  }
  else if (cVar1 == '\v') {
    FUN_0058cbe0(param_2,param_3,param_1);
  }
  else if (cVar1 == '\x12') {
    FUN_0058ccc0(param_2,param_3,param_1);
  }
  else {
    FUN_004144d0(param_1);
  }
  return param_1;
}

