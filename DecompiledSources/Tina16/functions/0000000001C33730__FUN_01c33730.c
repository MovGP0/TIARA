/* Ghidra address: 01c33730 */
/* Ghidra symbol: FUN_01c33730 */


bool FUN_01c33730(longlong param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar1 = 1;
  iVar3 = 0;
  if (local_res8[0] != 0) {
    iVar3 = *(int *)(local_res8[0] + -4);
  }
  for (; iVar1 <= iVar3; iVar1 = iVar1 + 1) {
    uVar2 = *(short *)(local_res8[0] + -2 + (longlong)iVar1 * 2) - 0x30;
    if (uVar2 < 0x10) {
      bVar4 = ((int)CONCAT62((int6)(short)((uint)iVar1 >> 0x10),1) << ((byte)uVar2 & 0x1f) & 0x3ffU)
              != 0;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) break;
  }
  FUN_00414480(local_res8);
  return iVar1 == iVar3 + 1;
}

