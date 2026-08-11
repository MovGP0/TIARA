/* Ghidra address: 00c65830 */
/* Ghidra symbol: FUN_00c65830 */


void FUN_00c65830(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = thunk_FUN_03a99535(param_2,1);
    uVar2 = FUN_00416740(*(undefined8 *)(param_1 + 8));
    thunk_FUN_0418144e(uVar1,uVar2);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = thunk_FUN_03a99535(param_2,2);
    uVar2 = FUN_00416740(*(undefined8 *)(param_1 + 0x10));
    thunk_FUN_0418144e(uVar1,uVar2);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar1 = thunk_FUN_03a99535(param_2,0x40e);
    uVar2 = FUN_00416740(*(undefined8 *)(param_1 + 0x18));
    thunk_FUN_0418144e(uVar1,uVar2);
  }
  return;
}

