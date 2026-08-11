/* Ghidra address: 010bb800 */
/* Ghidra symbol: FUN_010bb800 */


int FUN_010bb800(longlong *param_1,undefined8 param_2)

{
  int local_28 [2];
  int local_20;
  
  (**(code **)(*param_1 + 0x50))(param_1,param_2,local_28);
  return local_20 - local_28[0];
}

