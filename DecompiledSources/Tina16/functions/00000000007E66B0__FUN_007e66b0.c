/* Ghidra address: 007e66b0 */
/* Ghidra symbol: FUN_007e66b0 */


void FUN_007e66b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  
  iVar1 = thunk_FUN_041b99e8();
  puVar3 = (undefined2 *)(param_1 + 0x20);
  iVar4 = 0;
  while ((iVar4 < iVar1 && (puVar3 < (undefined2 *)(param_1 + 0x416)))) {
    FUN_007e6f50(*(undefined8 *)(param_1 + 0x440),param_2,iVar4,puVar3,
                 (int)(((param_1 + 0x416) - (longlong)puVar3) / 2),0x400);
    puVar3 = (undefined2 *)FUN_00442440(puVar3);
    uVar2 = thunk_FUN_03af2864(param_2,iVar4,0x400);
    if ((uVar2 & 2) != 0) {
      *puVar3 = 0x24;
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
    }
    if ((uVar2 & 0x40) != 0) {
      *puVar3 = 0x40;
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
    }
    if ((uVar2 & 1) != 0) {
      *puVar3 = 0x23;
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
    }
    *puVar3 = 0x3b;
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    iVar4 = iVar4 + 1;
  }
  return;
}

