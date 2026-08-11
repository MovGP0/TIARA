/* Ghidra address: 01862b70 */
/* Ghidra symbol: FUN_01862b70 */


void FUN_01862b70(longlong param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_24;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  (**(code **)(**(longlong **)(param_1 + 0x48) + 200))(*(longlong **)(param_1 + 0x48),local_20);
  local_24 = (**(code **)*local_20)(local_20);
  (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
  FUN_004b6dc0(local_20,0);
  (**(code **)(*local_20 + 0x58))(local_20,param_2);
  FUN_00410f20(local_20);
  return;
}

