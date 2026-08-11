/* Ghidra address: 00ace090 */
/* Ghidra symbol: FUN_00ace090 */


void FUN_00ace090(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x158);
  FUN_005ff880(param_2,*(undefined8 *)(lVar1 + 0xb8));
  if (*(char *)(param_1 + 0xbc) == '\0') {
    if (*(int *)(param_1 + 0x10c) < 10) {
      FUN_0064cbf0(lVar1,*(int *)(param_1 + 0x168) * *(int *)(param_1 + 0x16c) + 0x17);
    }
    else {
      FUN_0064cbf0(lVar1,*(int *)(param_1 + 0x10c));
    }
  }
  else {
    FUN_0064cb30(lVar1,0xfffff060);
    FUN_0064cbf0(lVar1,10);
  }
  iVar2 = FUN_005fdfd0(param_2,&DAT_00ace14c);
  if (iVar2 < 0xb) {
    iVar2 = 10;
  }
  if (iVar2 < *(int *)(param_1 + 0x108)) {
    iVar2 = *(int *)(param_1 + 0x108);
  }
  FUN_0064cc50(lVar1,iVar2);
  return;
}

