/* Ghidra address: 00cdb810 */
/* Ghidra symbol: FUN_00cdb810 */


void FUN_00cdb810(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  if (param_2 != 0) {
    local_20 = (longlong *)FUN_00882aa0(param_1,1,0);
    (**(code **)(*local_20 + 0x90))(local_20,param_2,param_3,param_4);
    FUN_00410f20(local_20);
  }
  return;
}

