/* Ghidra address: 00c2b4f0 */
/* Ghidra symbol: FUN_00c2b4f0 */


void FUN_00c2b4f0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_30 = auStack_58;
  if (param_2 != 0) {
    local_20 = FUN_00608c80(&PTR_FUN_005f92e8,1);
    local_28 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    FUN_0060b650(local_20,param_2);
    (**(code **)(*local_28 + 0x10))(local_28,local_20);
    FUN_00c2b340(param_1,local_28);
    FUN_0060c2f0(local_20);
    FUN_00410f20(local_20);
    FUN_00410f20(local_28);
  }
  return;
}

