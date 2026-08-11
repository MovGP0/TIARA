/* Ghidra address: 0139e1e0 */
/* Ghidra symbol: FUN_0139e1e0 */


void FUN_0139e1e0(undefined8 param_1)

{
  undefined1 auStack_78 [32];
  uint local_58;
  undefined1 *local_40;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_40 = auStack_78;
  local_30 = (longlong *)FUN_004b9860(&PTR_FUN_0047c498,1,param_1,0x22);
  (**(code **)(*local_30 + 0x48))(local_30,0,2);
  local_28 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  local_58 = local_58 & 0xffffff00;
  local_20[0] = FUN_01d30b30(&DAT_01d2e8e8,1,local_28,1);
  local_58 = 0;
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x48))
            (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_20,0,0);
  FUN_00410f20(local_20[0]);
  (**(code **)(*local_28 + 0x58))(local_28,local_30);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  return;
}

