/* Ghidra address: 005d1240 */
/* Ghidra symbol: FUN_005d1240 */


longlong * FUN_005d1240(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  undefined8 *local_10;
  
  local_20 = auStack_48;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)FUN_005d17b0(param_2);
  uVar1 = (**(code **)*local_10)(local_10);
  FUN_00419260(param_1,&DAT_00406578,1,uVar1);
  local_18 = *param_1;
  if (local_18 != 0) {
    local_18 = *(longlong *)(local_18 + -8);
  }
  FUN_004b8420(local_10,param_1,local_18);
  FUN_00410f20(local_10);
  return param_1;
}

