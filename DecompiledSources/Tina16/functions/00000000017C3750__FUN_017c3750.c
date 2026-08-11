/* Ghidra address: 017c3750 */
/* Ghidra symbol: FUN_017c3750 */


undefined8 FUN_017c3750(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  bool bVar5;
  
  while (iVar2 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x18),
        iVar2 <= *(int *)(*(longlong *)(param_1 + 0x88) + 0x28)) {
    uVar4 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x20) + -2 +
                      (longlong)iVar2 * 2) - 0x20;
    if (uVar4 < 0x40) {
      bVar5 = (1L << ((byte)uVar4 & 0x3f) & 0x2800000000003001U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) break;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x88) + 0x18);
    *piVar1 = *piVar1 + 1;
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x18);
  while( true ) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x18);
    if (*(int *)(*(longlong *)(param_1 + 0x88) + 0x28) < iVar3) break;
    uVar4 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x20) + -2 +
                      (longlong)iVar3 * 2) - 0x20;
    if (uVar4 < 0x40) {
      bVar5 = (1L << ((byte)uVar4 & 0x3f) & 0x2800000000003001U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) break;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x88) + 0x18);
    *piVar1 = *piVar1 + 1;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x88) + 0x28) < iVar2) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00416dc0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x20),iVar2,
                 *(int *)(*(longlong *)(param_1 + 0x88) + 0x18) - iVar2);
  }
  while ((iVar2 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x18),
         iVar2 <= *(int *)(*(longlong *)(param_1 + 0x88) + 0x28) &&
         (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x20) + -2 + (longlong)iVar2 * 2)
          == 0x20))) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x88) + 0x18);
    *piVar1 = *piVar1 + 1;
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x18);
  if (*(int *)(*(longlong *)(param_1 + 0x88) + 0x28) < iVar2) {
    *(undefined2 *)(*(longlong *)(param_1 + 0x88) + 0x1c) = 0;
  }
  else {
    *(undefined2 *)(*(longlong *)(param_1 + 0x88) + 0x1c) =
         *(undefined2 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x20) + -2 + (longlong)iVar2 * 2);
  }
  return param_2;
}

