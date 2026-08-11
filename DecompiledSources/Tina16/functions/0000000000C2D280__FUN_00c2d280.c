/* Ghidra address: 00c2d280 */
/* Ghidra symbol: FUN_00c2d280 */


bool FUN_00c2d280(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x40) + 0x10);
  if (iVar1 < 1) {
    lVar3 = FUN_00c360e0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 8));
    if (*(int *)(lVar3 + 0x10) < 1) {
      bVar2 = false;
    }
    else {
      lVar3 = FUN_00c360e0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 8));
      bVar2 = *(int *)(lVar3 + 0x10) < 0x100;
    }
  }
  else {
    bVar2 = iVar1 < 0x100;
  }
  return bVar2;
}

