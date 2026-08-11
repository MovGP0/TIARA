/* Ghidra address: 008b8bd0 */
/* Ghidra symbol: FUN_008b8bd0 */


undefined8 FUN_008b8bd0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  FUN_008b87a0(param_1,param_2);
  FUN_008b8930(param_1,param_2);
  FUN_008b8850(param_1,param_2);
  FUN_008b8890(param_1);
  FUN_008b88d0(param_1,param_2);
  FUN_008b87d0(param_1,param_2,param_3);
  if (param_3 != 0) {
    FUN_008b8800(param_1,param_3);
  }
  (**(code **)(*param_1 + 0x58))(param_1,param_2);
  FUN_008b8da0(param_1,param_2,param_3);
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  return param_2;
}

