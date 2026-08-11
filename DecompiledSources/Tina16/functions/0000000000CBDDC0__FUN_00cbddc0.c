/* Ghidra address: 00cbddc0 */
/* Ghidra symbol: FUN_00cbddc0 */


undefined8 FUN_00cbddc0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  
  if (param_4 != 0) {
    cVar1 = FUN_00879070(param_3,param_4);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x120))(param_1);
    }
  }
  FUN_00414ad0(param_2,param_3);
  return param_2;
}

