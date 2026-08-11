/* Ghidra address: 005ff810 */
/* Ghidra symbol: FUN_005ff810 */


undefined8 FUN_005ff810(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  (**(code **)(*param_1 + 0x58))(param_1,3);
  local_30 = 0;
  uStack_2c = 0;
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + -4);
  }
  lVar1 = param_1[0xc];
  uVar2 = FUN_00416740(param_2);
  thunk_FUN_0418ae1a(lVar1,uVar2,uVar3,&local_30);
  return CONCAT44(uStack_2c,local_30);
}

