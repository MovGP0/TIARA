/* Ghidra address: 01aa7bf0 */
/* Ghidra symbol: FUN_01aa7bf0 */


void FUN_01aa7bf0(longlong param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  bool bVar8;
  bool bVar9;
  short local_6a;
  undefined1 local_5a [32];
  undefined2 local_3a [5];
  
  iVar5 = FUN_013a5930(*(undefined8 *)(param_1 + 0x550));
  bVar8 = *(char *)(param_1 + 0x567 + (longlong)iVar5) == '\x01';
  iVar5 = FUN_013a5920(*(undefined8 *)(param_1 + 0x550));
  bVar9 = *(char *)(param_1 + 0x567 + (longlong)iVar5) != '\x01';
  uVar2 = FUN_01aa7a30(param_1,1);
  FUN_013a5970(*(undefined8 *)(param_1 + 0x550));
  if (bVar8) {
    if (bVar9) {
      sVar3 = FUN_013a5960(*(undefined8 *)(param_1 + 0x550));
      local_6a = 1;
      for (; sVar3 != 0; sVar3 = sVar3 + -1) {
        uVar6 = FUN_013a5910(*(undefined8 *)(param_1 + 0x550),local_6a);
        *(undefined1 *)(param_1 + -0x1e0 + (uVar6 & 0xffff) * 0x788) = 3;
        local_6a = local_6a + 1;
      }
    }
    else {
      FUN_013a5aa0(*(undefined8 *)(param_1 + 0x558),uVar2,local_3a);
      FUN_01aa0b90(local_3a[0],local_5a);
      sVar3 = FUN_013a5960(*(undefined8 *)(param_1 + 0x550));
      local_6a = 1;
      if (sVar3 != 0) {
        puVar7 = local_5a;
        do {
          uVar4 = FUN_013a5910(*(undefined8 *)(param_1 + 0x550),local_6a);
          uVar1 = FUN_01aa0b80(*puVar7);
          *(undefined1 *)(param_1 + -0x1e0 + (ulonglong)uVar4 * 0x788) = uVar1;
          local_6a = local_6a + 1;
          puVar7 = puVar7 + 1;
          sVar3 = sVar3 + -1;
        } while (sVar3 != 0);
      }
    }
  }
  if ((!bVar8) && (bVar9)) {
    sVar3 = FUN_013a5960(*(undefined8 *)(param_1 + 0x550));
    local_6a = 1;
    for (; sVar3 != 0; sVar3 = sVar3 + -1) {
      uVar6 = FUN_013a5910(*(undefined8 *)(param_1 + 0x550),local_6a);
      *(undefined1 *)(param_1 + -0x1e0 + (uVar6 & 0xffff) * 0x788) = 3;
      local_6a = local_6a + 1;
    }
  }
  return;
}

