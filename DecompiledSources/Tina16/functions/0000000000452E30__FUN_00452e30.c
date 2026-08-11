/* Ghidra address: 00452e30 */
/* Ghidra symbol: FUN_00452e30 */


undefined8 * FUN_00452e30(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_828 [2056];
  
  FUN_00414480(param_1);
  uVar2 = FUN_00416740(param_2);
  iVar1 = thunk_FUN_041c08a4(uVar2,local_828,0x400);
  if (iVar1 < 0x400) {
    FUN_00414740(param_1,local_828,iVar1);
  }
  else {
    FUN_004169f0(param_1,iVar1 + -1);
    uVar3 = FUN_00416740(*param_1);
    thunk_FUN_041c08a4(uVar2,uVar3,iVar1);
  }
  return param_1;
}

