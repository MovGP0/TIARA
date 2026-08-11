/* Ghidra address: 0070cc90 */
/* Ghidra symbol: FUN_0070cc90 */


undefined8 * FUN_0070cc90(undefined8 param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_00423010(&local_38,0,0,0,0);
  *param_2 = local_38;
  param_2[1] = uStack_30;
  uVar2 = FUN_00786090(param_1);
  iVar1 = thunk_FUN_041b2403(uVar2,0x41d,(longlong)param_3,param_2);
  if (iVar1 == 0) {
    FUN_00423010(&local_48,0,0,0,0);
    *param_2 = local_48;
    param_2[1] = uStack_40;
  }
  return param_2;
}

