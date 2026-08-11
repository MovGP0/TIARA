/* Ghidra address: 00682e40 */
/* Ghidra symbol: FUN_00682e40 */


void FUN_00682e40(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0065b870(param_1);
  iVar2 = thunk_FUN_041b2403(uVar3,0xbb,(longlong)param_2[1],0);
  iVar1 = *param_2;
  uVar3 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar3,0xb1,(longlong)(iVar2 + iVar1),(longlong)(iVar2 + iVar1));
  return;
}

