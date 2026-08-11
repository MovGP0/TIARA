/* Ghidra address: 004d51d0 */
/* Ghidra symbol: FUN_004d51d0 */


undefined4 FUN_004d51d0(longlong param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 local_res18;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  undefined4 local_c;
  
  local_30 = auStack_58;
  if (((int)param_3 < 0) || (2 < param_3)) {
    local_c = 0x80030001;
  }
  else {
    local_20 = *(longlong **)(param_1 + 0x18);
    local_res18 = (undefined1)param_3;
    uVar1 = (**(code **)(*local_20 + 0x50))(local_20,param_2,local_res18);
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = uVar1;
    }
    local_c = 0;
  }
  return local_c;
}

