/* Ghidra address: 00bba3e0 */
/* Ghidra symbol: FUN_00bba3e0 */


void FUN_00bba3e0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_40 [16];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_78;
  local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  (**(code **)(*local_20 + 0xe0))(local_20,param_2,param_3);
  plVar1 = (longlong *)FUN_00609e10(local_20);
  local_58 = param_3;
  FUN_00498350(local_40,0,0,param_2);
  (**(code **)(*plVar1 + 0x110))(plVar1,local_40,param_1);
  (**(code **)(*local_20 + 0xe0))(local_20,param_2,param_3);
  plVar1 = (longlong *)FUN_00609e10(param_1);
  (**(code **)(*plVar1 + 0x88))(plVar1,0,0,local_20);
  FUN_00410f20(local_20);
  return;
}

