/* Ghidra address: 0146d040 */
/* Ghidra symbol: FUN_0146d040 */


void FUN_0146d040(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_28 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_004b9f40(local_28,*(undefined8 *)(param_1 + 0x6b8));
  local_20 = (longlong *)FUN_00a39860(&PTR_FUN_00a2f148,1);
  FUN_004b6dc0(local_28,0);
  (**(code **)(*local_20 + 0xc0))(local_20,local_28);
  FUN_00603f70(*(undefined8 *)(*(longlong *)(param_1 + 0x6b0) + 0x318),local_20);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  return;
}

