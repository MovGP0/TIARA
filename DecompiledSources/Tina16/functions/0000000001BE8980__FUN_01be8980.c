/* Ghidra address: 01be8980 */
/* Ghidra symbol: FUN_01be8980 */


void FUN_01be8980(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  FUN_00659e90(param_1,param_2);
  cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  if (cVar1 != '\0') {
    *(undefined8 *)(param_2 + 0x18) = 1;
  }
  return;
}

