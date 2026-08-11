/* Ghidra address: 015d3b80 */
/* Ghidra symbol: FUN_015d3b80 */


void FUN_015d3b80(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (-1 < param_2) {
    iVar2 = FUN_015c2df0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28));
    if (param_2 < iVar2) goto LAB_015d3bd0;
  }
  uVar3 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x15,param_1);
  FUN_004134c0(uVar3);
LAB_015d3bd0:
  cVar1 = FUN_015c9e90(param_1);
  if (cVar1 == '\0') {
    uVar3 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x16,param_1);
    FUN_004134c0(uVar3);
  }
  FUN_015c3020(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),param_2);
  return;
}

