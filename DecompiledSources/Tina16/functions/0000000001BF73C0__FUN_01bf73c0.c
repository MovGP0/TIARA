/* Ghidra address: 01bf73c0 */
/* Ghidra symbol: FUN_01bf73c0 */


void FUN_01bf73c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [88];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_18;
  
  local_30 = auStack_98;
  local_38 = 0;
  local_40 = 0;
  local_18 = FUN_004b9860(&PTR_FUN_0047c498,1,param_2,0x20);
  FUN_01bf7570(param_1,local_18);
  uVar1 = local_18;
  local_28 = local_18;
  local_18 = 0;
  FUN_00410f20(uVar1);
  FUN_00414560(&local_40,2);
  return;
}

