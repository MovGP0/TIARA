/* Ghidra address: 006d49c0 */
/* Ghidra symbol: FUN_006d49c0 */


void FUN_006d49c0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  *(char *)(lVar1 + 0x4d4) = param_2;
  uVar2 = FUN_0065b870(lVar1);
  thunk_FUN_041b2403(uVar2,0xb,param_2 == '\0',0);
  if (param_2 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x180))(*(longlong **)(param_1 + 0x38));
    FUN_006d5880(*(undefined8 *)(param_1 + 0x38));
  }
  return;
}

