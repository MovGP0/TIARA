/* Ghidra address: 00a99cd0 */
/* Ghidra symbol: FUN_00a99cd0 */


void FUN_00a99cd0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x198))(param_1);
    (**(code **)(*param_1 + 0x130))(param_1,param_3);
    (**(code **)(*param_1 + 0x138))(param_1,param_4);
  }
  return;
}

