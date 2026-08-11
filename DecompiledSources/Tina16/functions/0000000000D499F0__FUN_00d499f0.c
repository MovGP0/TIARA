/* Ghidra address: 00d499f0 */
/* Ghidra symbol: FUN_00d499f0 */


undefined8 * FUN_00d499f0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_00423010(&local_38,0,0,0,0);
  *param_2 = local_38;
  param_2[1] = uStack_30;
  iVar1 = thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18),0x41d,
                             (longlong)*(int *)(param_1 + 0x10),param_2);
  if (iVar1 == 0) {
    FUN_00423010(&local_48,0,0,0,0);
    *param_2 = local_48;
    param_2[1] = uStack_40;
  }
  return param_2;
}

