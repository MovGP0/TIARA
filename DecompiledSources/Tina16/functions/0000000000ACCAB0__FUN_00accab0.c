/* Ghidra address: 00accab0 */
/* Ghidra symbol: FUN_00accab0 */


void FUN_00accab0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x158);
  FUN_005ff880(param_2,*(undefined8 *)(lVar1 + 0xb8));
  if (*(int *)(param_1 + 0x108) < 10) {
    iVar2 = FUN_005fdfd0(param_2,&DAT_00accb80);
    FUN_0064d150(lVar1,iVar2 * *(int *)(param_1 + 0x16c) + 5);
  }
  else {
    FUN_0064cc50(lVar1,*(int *)(param_1 + 0x108));
  }
  if (*(char *)(param_1 + 0xbc) == '\0') {
    if (*(int *)(param_1 + 0x10c) < 10) {
      iVar2 = FUN_005fdff0(param_2,&DAT_00accb90);
      FUN_0064d0e0(lVar1,iVar2 * *(int *)(param_1 + 0x170) + 5);
    }
    else {
      FUN_0064cbf0(lVar1,*(int *)(param_1 + 0x10c));
    }
  }
  else {
    FUN_0064cb30(lVar1,0xfffff060);
    FUN_0064cbf0(lVar1,0x32);
  }
  return;
}

