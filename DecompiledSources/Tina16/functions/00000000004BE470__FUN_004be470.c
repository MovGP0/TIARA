/* Ghidra address: 004be470 */
/* Ghidra symbol: FUN_004be470 */


longlong FUN_004be470(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char local_31;
  longlong local_30 [2];
  
  local_30[0] = FUN_00411840(*param_2,param_3);
  local_31 = local_30[0] == 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    (**(code **)(param_1 + 0x70))
              (*(undefined8 *)(param_1 + 0x78),param_1,param_3,local_30,&local_31);
  }
  if (local_31 != '\0') {
    FUN_004bdee0();
  }
  return local_30[0];
}

