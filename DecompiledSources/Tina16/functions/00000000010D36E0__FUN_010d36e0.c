/* Ghidra address: 010d36e0 */
/* Ghidra symbol: FUN_010d36e0 */


void FUN_010d36e0(longlong param_1,ushort param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res18 [2];
  undefined1 local_148 [256];
  undefined1 local_48 [48];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if ((int)(uint)param_2 <= *(int *)(param_1 + 0x10) + -1) {
    lVar1 = FUN_00b94e60(param_1,param_2);
    FUN_010c7a40(local_48,0x3ff0000000000000);
    uVar2 = FUN_013b2dc0(0,&PTR_FUN_010d12e8,1,1);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    FUN_00416910(local_148,local_res18[0],0xff);
    FUN_013b3040(uVar2,local_148,local_48);
  }
  FUN_00414480(local_res18);
  return;
}

