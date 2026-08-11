/* Ghidra address: 00ac36f0 */
/* Ghidra symbol: FUN_00ac36f0 */


void FUN_00ac36f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xa0))(param_1,param_2,param_3,param_5,param_6);
  if (cVar1 != '\0') {
    *param_4 = param_1;
  }
  return;
}

