/* Ghidra address: 00ef7f80 */
/* Ghidra symbol: FUN_00ef7f80 */


void FUN_00ef7f80(longlong *param_1,ushort param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  ushort *puVar2;
  longlong lVar3;
  ushort *puVar4;
  
  if (*param_1 == 0) {
    lVar3 = FUN_004095c0(0x3f8);
    *param_1 = lVar3;
    if (*param_1 == 0) {
      FUN_00ef4260(1,param_3);
    }
    else {
      *(undefined2 *)*param_1 = 1;
      *(undefined8 *)(*param_1 + 0x3f0) = 0;
      *(ushort *)(*param_1 + 2) = param_2;
    }
  }
  else {
    puVar2 = (ushort *)*param_1;
    do {
      puVar4 = puVar2;
      puVar2 = *(ushort **)(puVar4 + 0x1f8);
    } while (*(ushort **)(puVar4 + 0x1f8) != (ushort *)0x0);
    if (*puVar4 < 500) {
      *puVar4 = *puVar4 + 1;
      puVar4[(longlong)(int)(*puVar4 - 1) + 1] = param_2;
    }
    else {
      lVar3 = FUN_004095c0(0x3f8);
      *(longlong *)(puVar4 + 0x1f8) = lVar3;
      if (lVar3 == 0) {
        FUN_00ef4260(1,param_3);
      }
      else {
        puVar1 = *(undefined2 **)(puVar4 + 0x1f8);
        *(undefined8 *)(puVar1 + 0x1f8) = 0;
        puVar1[1] = param_2;
        *puVar1 = 1;
      }
    }
  }
  return;
}

