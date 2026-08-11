/* Ghidra address: 014477b0 */
/* Ghidra symbol: FUN_014477b0 */


void FUN_014477b0(longlong param_1)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x68) != 0) {
    uVar2 = **(short **)(*(longlong *)(param_1 + 0xa8) + 0x68) - 0x40;
    if (uVar2 < 0x40) {
      bVar4 = (1L << ((byte)uVar2 & 0x3f) & 0x7fffffe17fffffeU) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_019b6e50(param_1 + 0x68,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x68),
                   *(undefined8 *)(param_1 + 0xa8));
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x68);
      iVar3 = 0;
      if (lVar1 != 0) {
        iVar3 = *(int *)(lVar1 + -4);
      }
      if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x68) + -2 + (longlong)iVar3 * 2)
          != 0x3d) {
        FUN_019b6e50(param_1 + 0x68,&LAB_01447a10,*(undefined8 *)(param_1 + 0xa8));
        FUN_00416ad0(*(longlong *)(param_1 + 0xa8) + 0x68,&LAB_01447a10);
      }
      goto code_r0x014479cc;
    }
  }
  if (*(char *)(*(longlong *)(param_1 + 0xa8) + 100) == '\x01') {
    if (*PTR_DAT_02002480 == '\x01') {
      FUN_004169a0(&local_10,&DAT_01f4b818);
      FUN_019b6e50(param_1 + 0x68,local_10,*(undefined8 *)(param_1 + 0xa8));
      FUN_004169a0(*(longlong *)(param_1 + 0xa8) + 0x68,&DAT_01f4b818);
    }
    else {
      FUN_004169a0(&local_18,&DAT_01f4b81e);
      FUN_019b6e50(param_1 + 0x68,local_18,*(undefined8 *)(param_1 + 0xa8));
      FUN_004169a0(*(longlong *)(param_1 + 0xa8) + 0x68,&DAT_01f4b81e);
    }
  }
  else {
    FUN_004169a0(&local_20,&DAT_01f4b81b);
    FUN_019b6e50(param_1 + 0x68,local_20,*(undefined8 *)(param_1 + 0xa8));
    FUN_004169a0(*(longlong *)(param_1 + 0xa8) + 0x68,&DAT_01f4b81b);
  }
code_r0x014479cc:
  FUN_00414560(&local_20,3);
  return;
}

