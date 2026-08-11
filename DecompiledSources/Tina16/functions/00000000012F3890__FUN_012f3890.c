/* Ghidra address: 012f3890 */
/* Ghidra symbol: FUN_012f3890 */


void FUN_012f3890(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0040c770((double)*(int *)(*(longlong *)(param_1 + 0x6e8) + 0x98) * 0.467742);
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x6f0),uVar1);
  FUN_0064cb30(*(undefined8 *)(param_1 + 0x728),*(int *)(*(longlong *)(param_1 + 0x6f0) + 0x98) + 1)
  ;
  uVar1 = FUN_0040c770((double)*(int *)(*(longlong *)(param_1 + 0x6e8) + 0x98) * 0.532258);
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x728),uVar1);
  FUN_0064c650(*(undefined8 *)(param_1 + 0x6e8),2);
  if (*(int *)(*(longlong *)(param_1 + 0x6e8) + 0x94) < 0) {
    FUN_0064cb90(*(longlong *)(param_1 + 0x6e8),0);
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x6e8) + 0x94);
  FUN_0064c650(*(longlong *)(param_1 + 0x6e8),0);
  if ((*(int *)(*(longlong *)(param_1 + 0x6e8) + 0x94) < 0) || (iVar2 < 0)) {
    iVar2 = 0;
  }
  FUN_0064cb90(*(longlong *)(param_1 + 0x6e8),iVar2);
  return;
}

