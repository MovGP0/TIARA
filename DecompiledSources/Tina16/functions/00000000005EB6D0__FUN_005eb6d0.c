/* Ghidra address: 005eb6d0 */
/* Ghidra symbol: FUN_005eb6d0 */


undefined8 * FUN_005eb6d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char local_29;
  
  iVar1 = FUN_005eb5d0(param_1,param_3);
  if (iVar1 < 1) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00414740(param_2,0,(longlong)iVar1 / 2 & 0xffffffff);
    uVar3 = FUN_00416740(*param_2);
    FUN_005ebde0(param_1,param_3,uVar3,iVar1,&local_29);
    if ((local_29 == '\x01') || (local_29 == '\x02')) {
      uVar3 = FUN_00416740(*param_2);
      uVar2 = FUN_00414d00(uVar3);
      FUN_004169f0(param_2,uVar2);
    }
    else {
      FUN_005ea1b0(param_3);
    }
  }
  return param_2;
}

