/* Ghidra address: 016efec0 */
/* Ghidra symbol: FUN_016efec0 */


undefined8 FUN_016efec0(undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 1;
  bVar2 = false;
  FUN_00414480(param_1);
  while ((iVar3 <= *(int *)(param_2 + 0x2d8) && (!bVar2))) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x2b0) + -8 + (longlong)iVar3 * 8);
    if ((param_3 < *(int *)(lVar1 + 0x78)) ||
       ((int)(*(int *)(lVar1 + 0x78) + (uint)*(byte *)(lVar1 + 6)) <= param_3)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_01b20020(param_1,*(undefined8 *)(lVar1 + 0x128),&LAB_016eff58);
    }
    iVar3 = iVar3 + 1;
  }
  return param_1;
}

