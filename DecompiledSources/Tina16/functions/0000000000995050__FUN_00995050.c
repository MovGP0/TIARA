/* Ghidra address: 00995050 */
/* Ghidra symbol: FUN_00995050 */


undefined8 FUN_00995050(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (*(int *)(*(longlong *)(param_1 + 8) + 0x10) - param_2) + -1;
  if ((iVar1 < 0) || (*(int *)(*(longlong *)(param_1 + 8) + 0x10) <= iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)iVar1 * 8);
  }
  return uVar2;
}

