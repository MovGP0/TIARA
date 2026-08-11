/* Ghidra address: 01a368d0 */
/* Ghidra symbol: FUN_01a368d0 */


void FUN_01a368d0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  undefined1 local_20;
  undefined1 *local_10;
  
  local_10 = auStack_48;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  uVar1 = FUN_0198b200(0,&PTR_FUN_01984d18,1,0);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  local_28 = local_28 & 0xffffffffffffff00;
  lVar2 = FUN_014a74d0(local_res10,uVar1,0,0);
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0xb8) = local_res18;
    local_28 = 0;
    local_20 = 0;
    FUN_01a37700(param_1,0,0,0);
    uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10));
    FUN_00418590(uVar1,&DAT_01984da0);
  }
  FUN_00414480(&local_res10);
  return;
}

