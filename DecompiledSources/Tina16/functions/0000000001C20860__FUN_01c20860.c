/* Ghidra address: 01c20860 */
/* Ghidra symbol: FUN_01c20860 */


void FUN_01c20860(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = FUN_006d8710(*(longlong *)(param_2 + 0x490),
                       *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x490) + 0x10) + 0x10) + -1);
  if (param_3 == lVar4) {
    uVar3 = *(undefined8 *)(param_1 + 0x6e0);
    iVar1 = param_4[1];
    FUN_0064cb90(uVar3,iVar1);
    iVar2 = *param_4;
    FUN_0064cb30(uVar3,iVar2);
    FUN_0064cbf0(uVar3,(param_4[2] - iVar2) + -0xf);
    FUN_0064cc50(uVar3,param_4[3] - iVar1);
  }
  return;
}

