/* Ghidra address: 00c38cb0 */
/* Ghidra symbol: FUN_00c38cb0 */


void FUN_00c38cb0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  lVar1 = FUN_00609e10(param_2);
  FUN_005fdab0(*(undefined8 *)(lVar1 + 0x80),*(undefined4 *)(param_1 + 0x32c));
  plVar2 = (longlong *)FUN_00609e10(param_2);
  (**(code **)(*plVar2 + 0xa8))(plVar2,&local_38);
  return;
}

