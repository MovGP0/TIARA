/* Ghidra address: 00d42f90 */
/* Ghidra symbol: FUN_00d42f90 */


void FUN_00d42f90(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  lVar2 = FUN_00787d30(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x18));
  if (lVar2 == 0) {
    uVar3 = FUN_00781840();
    uVar1 = FUN_00779380(uVar3,0x1d);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x80),uVar1);
    (**(code **)(**(longlong **)(param_1 + 0xa8) + 0xa8))(*(longlong **)(param_1 + 0xa8),&local_38);
  }
  else {
    FUN_007885b0(*(undefined8 *)(param_1 + 0xa0),param_2,&local_38);
  }
  return;
}

