/* Ghidra address: 015d3aa0 */
/* Ghidra symbol: FUN_015d3aa0 */


void FUN_015d3aa0(longlong param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (-1 < param_2) {
    iVar2 = FUN_015c2df0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28));
    if (param_2 < iVar2) goto LAB_015d3af5;
  }
  uVar3 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x18,param_1);
  FUN_004134c0(uVar3);
LAB_015d3af5:
  cVar1 = FUN_015c9e90(param_1);
  if (cVar1 == '\0') {
    uVar3 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x19,param_1);
    FUN_004134c0(uVar3);
  }
  FUN_015d3190(param_1,param_2,param_3,1,0,0);
  lVar4 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),param_2);
  *(undefined1 *)(lVar4 + 0x8e) = 3;
  return;
}

