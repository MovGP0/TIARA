/* Ghidra address: 00c2b720 */
/* Ghidra symbol: FUN_00c2b720 */


void FUN_00c2b720(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_28 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  local_20 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_00c2b640(auStack_58,local_28,0xffffff);
  FUN_00c2b640(auStack_58,local_20,0);
  lVar1 = FUN_00609e10(local_28);
  *(undefined4 *)(lVar1 + 0x90) = 0x660046;
  plVar2 = (longlong *)FUN_00609e10(local_28);
  (**(code **)(*plVar2 + 0x88))(plVar2,0,0,local_20);
  FUN_00c2b340(param_1,local_28);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  return;
}

