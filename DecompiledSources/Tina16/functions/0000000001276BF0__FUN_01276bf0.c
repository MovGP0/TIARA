/* Ghidra address: 01276bf0 */
/* Ghidra symbol: FUN_01276bf0 */


undefined8 FUN_01276bf0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  (**(code **)(**(longlong **)(param_1 + 0x878) + 0xd8))
            (*(longlong **)(param_1 + 0x878),local_20,local_res18[0]);
  FUN_0041b890(param_2,local_20[0],&DAT_01276c98);
  FUN_0041b800(local_20);
  FUN_00414480(local_res18);
  return param_2;
}

