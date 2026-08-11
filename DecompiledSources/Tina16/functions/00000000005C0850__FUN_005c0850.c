/* Ghidra address: 005c0850 */
/* Ghidra symbol: FUN_005c0850 */


bool FUN_005c0850(undefined8 *param_1,undefined8 param_2,char param_3)

{
  bool bVar1;
  undefined1 local_30 [8];
  undefined1 local_28 [15];
  char local_19;
  
  (**(code **)*param_1)(param_1,&local_19,local_28,local_30,&local_19);
  if (local_19 == '\0') {
    bVar1 = true;
  }
  else if (local_19 == '\x02') {
    bVar1 = param_3 == '\0';
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

