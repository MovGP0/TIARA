/* Ghidra address: 019b5bb0 */
/* Ghidra symbol: FUN_019b5bb0 */


void FUN_019b5bb0(longlong *param_1,int param_2,ushort param_3,undefined8 param_4)

{
  short *psVar1;
  longlong lVar2;
  int iVar3;
  ushort *puVar4;
  
  if (*param_1 == 0) {
    lVar2 = FUN_004095c0(0x3f8);
    *param_1 = lVar2;
    if (*param_1 == 0) {
      FUN_00ef4260(1,param_4);
      return;
    }
    *(undefined2 *)*param_1 = 0;
    *(undefined8 *)(*param_1 + 0x3f0) = 0;
  }
  iVar3 = 1;
  for (puVar4 = (ushort *)*param_1; (iVar3 <= param_2 / 500 && (*(longlong *)(puVar4 + 0x1f8) != 0))
      ; puVar4 = *(ushort **)(puVar4 + 0x1f8)) {
    iVar3 = iVar3 + 1;
  }
  if (param_2 / 500 < iVar3) {
    iVar3 = (int)((longlong)param_2 % 500);
    puVar4[(longlong)iVar3 + 1] = param_3;
    if ((int)(uint)*puVar4 < iVar3 + 1) {
      *puVar4 = (short)((longlong)param_2 % 500) + 1;
    }
  }
  else {
    lVar2 = FUN_004095c0(0x3f8,(longlong)param_2 % 500 & 0xffffffff);
    *(longlong *)(puVar4 + 0x1f8) = lVar2;
    if (lVar2 == 0) {
      FUN_00ef4260(1,param_4);
    }
    else {
      psVar1 = *(short **)(puVar4 + 0x1f8);
      psVar1[0x1f8] = 0;
      psVar1[0x1f9] = 0;
      psVar1[0x1fa] = 0;
      psVar1[0x1fb] = 0;
      iVar3 = 0;
      do {
        psVar1[(longlong)iVar3 + 1] = 0x20;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 500);
      psVar1[(longlong)(int)((longlong)param_2 % 500) + 1] = param_3;
      *psVar1 = (short)((longlong)param_2 % 500) + 1;
    }
  }
  return;
}

