/* Ghidra address: 019f0460 */
/* Ghidra symbol: FUN_019f0460 */


bool FUN_019f0460(undefined8 param_1,longlong param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610();
  iVar1 = 1;
  while( true ) {
    iVar3 = 0;
    if (local_res10[0] != 0) {
      iVar3 = *(int *)(local_res10[0] + -4);
    }
    if (iVar3 < iVar1) break;
    uVar2 = *(short *)(local_res10[0] + -2 + (longlong)iVar1 * 2) - 0x30;
    if (uVar2 < 0x10) {
      bVar4 = ((int)CONCAT62((int6)(short)((uint)iVar1 >> 0x10),1) << ((byte)uVar2 & 0x1f) & 0x3ffU)
              != 0;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) break;
    iVar1 = iVar1 + 1;
  }
  iVar3 = 0;
  if (local_res10[0] != 0) {
    iVar3 = *(int *)(local_res10[0] + -4);
  }
  FUN_00414480(local_res10);
  return iVar3 < iVar1;
}

