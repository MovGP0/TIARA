/* Ghidra address: 00a47010 */
/* Ghidra symbol: FUN_00a47010 */


void FUN_00a47010(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  ushort local_28;
  ushort local_26;
  
  thunk_FUN_03d2c01a(param_2,0x20,local_38);
  if ((int)((uint)local_26 * (uint)local_28) < 9) {
    *(int *)(param_1 + 0x10) = (1 << ((byte)((uint)local_26 * (uint)local_28) & 0x1f)) * 4 + 0x28;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0x28;
  }
  puVar3 = (undefined4 *)FUN_004095c0((longlong)*(int *)(param_1 + 0x10));
  *(undefined4 **)(param_1 + 8) = puVar3;
  *puVar3 = 0x28;
  puVar3[1] = local_34;
  puVar3[2] = local_30;
  *(ushort *)((longlong)puVar3 + 0xe) = local_26 * local_28;
  *(undefined2 *)(puVar3 + 3) = 1;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[4] = 0;
  uVar1 = *(short *)((longlong)puVar3 + 0xe) - 0x10;
  if (uVar1 < 0x20) {
    bVar4 = (1 << ((byte)uVar1 & 0x1f) & 0x10001U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    *(undefined2 *)((longlong)puVar3 + 0xe) = 0x18;
  }
  iVar2 = FUN_00a46ff0(auStack_58,puVar3[1] * (uint)*(ushort *)((longlong)puVar3 + 0xe));
  puVar3[5] = iVar2 * puVar3[2];
  return;
}

