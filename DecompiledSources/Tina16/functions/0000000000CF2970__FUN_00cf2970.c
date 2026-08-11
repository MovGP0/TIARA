/* Ghidra address: 00cf2970 */
/* Ghidra symbol: FUN_00cf2970 */


void FUN_00cf2970(longlong param_1,short param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (*(short *)(param_1 + 0x60) != param_2) {
    FUN_00416780(&local_10,param_2);
    iVar1 = FUN_00874bb0(local_10,&PTR_DAT_01eb1c58,2,0);
    if (iVar1 == -1) {
      FUN_0041ddd0(&local_18,PTR_PTR_02004cb0);
      uVar2 = FUN_0086dfd0(&PTR_FUN_00cf04b0,1,local_18);
      FUN_004134c0(uVar2);
    }
    *(short *)(param_1 + 0x60) = param_2;
  }
  FUN_00414560(&local_18,2);
  return;
}

