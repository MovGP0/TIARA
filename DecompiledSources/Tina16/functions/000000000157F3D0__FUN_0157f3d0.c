/* Ghidra address: 0157f3d0 */
/* Ghidra symbol: FUN_0157f3d0 */


void FUN_0157f3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  longlong lStack_28;
  longlong local_20;
  
  local_40 = auStack_68;
  local_30 = *param_4;
  lStack_28 = param_4[1];
  local_20 = FUN_0157f930(&PTR_FUN_01576b50,1);
  *(undefined8 *)(local_20 + 0x40) = param_3;
  if (local_30 != 0) {
    *(longlong *)(local_20 + 0x50) = local_30;
    *(longlong *)(local_20 + 0x58) = lStack_28;
  }
  FUN_0157fa90(local_20,param_1,1);
  FUN_015810f0(local_20,param_2);
  FUN_0157fc90(local_20);
  FUN_00410f20(local_20);
  return;
}

