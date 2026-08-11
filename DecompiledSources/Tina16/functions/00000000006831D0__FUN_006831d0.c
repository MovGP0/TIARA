/* Ghidra address: 006831d0 */
/* Ghidra symbol: FUN_006831d0 */


undefined8 * FUN_006831d0(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  iVar1 = thunk_FUN_041b2403(uVar2,0x149,(longlong)param_3,0);
  if ((iVar1 == -1) || (iVar1 < 1)) {
    FUN_00414480(param_2);
  }
  else {
    FUN_004169f0(param_2,iVar1);
    uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
    uVar3 = FUN_00416740(*param_2);
    thunk_FUN_041b2403(uVar2,0x148,(longlong)param_3,uVar3);
  }
  return param_2;
}

