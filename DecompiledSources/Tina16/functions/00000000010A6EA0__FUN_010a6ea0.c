/* Ghidra address: 010a6ea0 */
/* Ghidra symbol: FUN_010a6ea0 */


void FUN_010a6ea0(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0065b870(param_1);
  iVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  iVar1 = thunk_FUN_041b2403(uVar3,0xc9,(longlong)iVar1,0);
  uVar3 = FUN_0065b870(param_1);
  iVar2 = thunk_FUN_041b2403(uVar3,0xbb,(longlong)iVar1,0);
  *param_2 = iVar1 + 1;
  iVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  *param_3 = (iVar1 - iVar2) + 1;
  return;
}

