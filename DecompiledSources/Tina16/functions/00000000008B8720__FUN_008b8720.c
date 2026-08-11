/* Ghidra address: 008b8720 */
/* Ghidra symbol: FUN_008b8720 */


undefined8 FUN_008b8720(longlong *param_1,undefined8 param_2)

{
  FUN_008b87a0(param_1,param_2);
  FUN_008b8930(param_1,param_2);
  FUN_008b8850(param_1,param_2);
  FUN_008b8890(param_1);
  FUN_008b88d0(param_1,param_2);
  (**(code **)(*param_1 + 0x58))(param_1,param_2);
  FUN_008b8da0(param_1,param_2,0);
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  return param_2;
}

