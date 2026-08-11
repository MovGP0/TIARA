/* Ghidra address: 007058b0 */
/* Ghidra symbol: FUN_007058b0 */


undefined8 FUN_007058b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong local_20;
  
  local_20 = 0;
  FUN_00414480(param_2);
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    iVar1 = FUN_00705970(param_1);
    FUN_004169f0(&local_20,iVar1 + 1);
    uVar2 = 0;
    if (local_20 != 0) {
      uVar2 = *(undefined4 *)(local_20 + -4);
    }
    uVar3 = FUN_00416740(local_20);
    uVar2 = thunk_FUN_041ca87a(*(undefined8 *)(param_1 + 0x4f8),uVar3,uVar2);
    FUN_00414740(param_2,uVar3,uVar2);
  }
  FUN_00414480(&local_20);
  return param_2;
}

