/* Ghidra address: 015c2a60 */
/* Ghidra symbol: FUN_015c2a60 */


longlong FUN_015c2a60(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (-1 < param_2) {
    iVar1 = FUN_015c2df0(param_1);
    if (param_2 < iVar1) goto LAB_015c2aa2;
  }
  uVar2 = FUN_015b59b0(&PTR_FUN_015b5818,1,3,0);
  FUN_004134c0(uVar2);
LAB_015c2aa2:
  return *(longlong *)(param_1 + 8) + (longlong)param_2 * 0x90;
}

