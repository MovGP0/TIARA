/* Ghidra address: 015c29e0 */
/* Ghidra symbol: FUN_015c29e0 */


undefined8 FUN_015c29e0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (-1 < param_3) {
    iVar1 = FUN_015c2df0(param_1);
    if (param_3 < iVar1) goto LAB_015c2a29;
  }
  uVar2 = FUN_015b59b0(&PTR_FUN_015b5818,1,2,0);
  FUN_004134c0(uVar2);
LAB_015c2a29:
  FUN_00417c40(param_2,*(longlong *)(param_1 + 8) + (longlong)param_3 * 0x90,&DAT_015b9418);
  return param_2;
}

