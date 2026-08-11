/* Ghidra address: 010d6860 */
/* Ghidra symbol: FUN_010d6860 */


void FUN_010d6860(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar3;
  undefined8 local_10;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  local_10 = 0;
  FUN_013bc860(*(undefined8 *)(param_1 + 0x40),&local_10);
  uVar1 = FUN_00416740(local_10);
  uVar1 = thunk_FUN_0416eccf(0xffffffffffffffff,0,4,0,CONCAT44(uVar3,0x19000),uVar1);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  if (*(longlong *)(param_1 + 0x58) == 0) {
    FUN_00451a00();
  }
  lVar2 = thunk_FUN_03c0fec3(*(undefined8 *)(param_1 + 0x58),0xf001f,0,0,0x19000);
  *(longlong *)(param_1 + 0x60) = lVar2;
  if (lVar2 == 0) {
    FUN_00451a00();
  }
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_010d6720(param_1,1);
  FUN_010d6720(param_1,1);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x68);
  FUN_00b909d0(param_1 + 0x68,4);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x68);
  FUN_00414480(&local_10);
  return;
}

