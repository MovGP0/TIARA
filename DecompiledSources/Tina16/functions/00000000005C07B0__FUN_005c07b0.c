/* Ghidra address: 005c07b0 */
/* Ghidra symbol: FUN_005c07b0 */


bool FUN_005c07b0(undefined8 *param_1)

{
  undefined1 local_30 [8];
  undefined1 local_28 [15];
  char local_19 [9];
  
  (**(code **)*param_1)(param_1,local_19,local_28,local_30,local_19);
  return local_19[0] == '\x03';
}

