/* Ghidra address: 01aa7df0 */
/* Ghidra symbol: FUN_01aa7df0 */


undefined8 FUN_01aa7df0(longlong param_1,double param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  double dVar12;
  short local_8c;
  undefined1 local_7a [32];
  undefined2 local_5a [21];
  
  uVar7 = 0;
  iVar3 = FUN_013a5930(*(undefined8 *)(param_1 + 0x550));
  bVar9 = *(char *)(param_1 + 0x587 + (longlong)iVar3) == '\x01';
  iVar3 = FUN_013a5920(*(undefined8 *)(param_1 + 0x550));
  bVar10 = *(char *)(param_1 + 0x587 + (longlong)iVar3) == '\x01';
  uVar1 = FUN_01aa7a30(param_1,0);
  uVar11 = FUN_013a5970(*(undefined8 *)(param_1 + 0x550));
  if (bVar9) {
    if (bVar10) {
      FUN_013a5aa0(*(undefined8 *)(param_1 + 0x558),uVar1,local_5a);
      FUN_01aa0b90(local_5a[0],local_7a);
      sVar2 = FUN_013a5960(*(undefined8 *)(param_1 + 0x550));
      local_8c = 1;
      if (sVar2 != 0) {
        puVar8 = local_7a;
        do {
          uVar4 = FUN_013a5910(*(undefined8 *)(param_1 + 0x550),local_8c);
          uVar5 = FUN_01aa0b80(*puVar8);
          FUN_01aa3a80(param_1 + -0x1e0 + ((ulonglong)uVar4 & 0xffff) * 0x788,param_2,uVar11,uVar5);
          uVar7 = CONCAT71((int7)(((ulonglong)uVar4 & 0xffff) * 0xf1 >> 8),1);
          local_8c = local_8c + 1;
          puVar8 = puVar8 + 1;
          sVar2 = sVar2 + -1;
        } while (sVar2 != 0);
      }
    }
    else {
      sVar2 = FUN_013a5960(*(undefined8 *)(param_1 + 0x550));
      local_8c = 1;
      for (; sVar2 != 0; sVar2 = sVar2 + -1) {
        uVar4 = FUN_013a5910(*(undefined8 *)(param_1 + 0x550),local_8c);
        FUN_01aa3a80(param_1 + -0x1e0 + ((ulonglong)uVar4 & 0xffff) * 0x788,param_2,uVar11,3);
        uVar7 = CONCAT71((int7)(((ulonglong)uVar4 & 0xffff) * 0xf1 >> 8),1);
        local_8c = local_8c + 1;
      }
    }
  }
  if ((!bVar9) && (bVar10)) {
    uVar5 = FUN_01aa7b10(param_1,0);
    FUN_01aa0b90(local_5a[0],local_7a);
    dVar12 = (double)FUN_013a59b0(*(undefined8 *)(param_1 + 0x550));
    puVar6 = (undefined2 *)FUN_004095c0(8);
    *puVar6 = (short)uVar5;
    *(uint *)(puVar6 + 2) = (uint)uVar1;
    FUN_01aa3d90(param_1,param_2 + dVar12,puVar6);
    uVar7 = CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
  }
  return uVar7;
}

