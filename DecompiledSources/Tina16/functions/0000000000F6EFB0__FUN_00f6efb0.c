/* Ghidra address: 00f6efb0 */
/* Ghidra symbol: FUN_00f6efb0 */


undefined8 FUN_00f6efb0(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0202eebc / 2;
  iVar1 = *(int *)(*(longlong *)(param_3 + 0x80) + (longlong)param_4 * 8);
  iVar2 = *(int *)(*(longlong *)(param_3 + 0x80) + 4 + (longlong)param_4 * 8);
  FUN_00f605f0(param_2,iVar1 - iVar3,iVar2 - iVar3,iVar1 + iVar3,iVar2 + iVar3);
  return param_2;
}

