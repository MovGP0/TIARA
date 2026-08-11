/* Ghidra address: 01b1cb40 */
/* Ghidra symbol: FUN_01b1cb40 */


undefined8 * FUN_01b1cb40(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = thunk_FUN_03fe6811(*(undefined8 *)(param_1 + 8),param_3,0,0);
  FUN_004169f0(param_2,iVar1);
  uVar2 = FUN_00416740(*param_2);
  thunk_FUN_03fe6811(*(undefined8 *)(param_1 + 8),param_3,uVar2,iVar1 + 1);
  return param_2;
}

