/* Ghidra address: 006e85d0 */
/* Ghidra symbol: FUN_006e85d0 */


void FUN_006e85d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_30 = auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x38);
  local_28 = *(undefined8 *)(lVar1 + 0x520);
  uStack_20 = *(undefined8 *)(lVar1 + 0x528);
  *(undefined8 *)(lVar1 + 0x520) = 0;
  *(undefined8 *)(lVar1 + 0x528) = 0;
  FUN_004b2df0(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x38);
  *(undefined8 *)(lVar1 + 0x520) = local_28;
  *(undefined8 *)(lVar1 + 0x528) = uStack_20;
  return;
}

