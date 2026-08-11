/* Ghidra address: 005c0760 */
/* Ghidra symbol: FUN_005c0760 */


undefined4 FUN_005c0760(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_30 [8];
  undefined1 local_28 [15];
  char local_19;
  
  (**(code **)*param_1)(param_1,&local_19,local_28,local_30,&local_19);
  if (local_19 == '\x01') {
    param_3 = 1;
  }
  else if (local_19 != '\x02') {
    param_3 = 0;
  }
  return param_3;
}

