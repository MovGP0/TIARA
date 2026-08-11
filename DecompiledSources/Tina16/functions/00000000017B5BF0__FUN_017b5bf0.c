/* Ghidra address: 017b5bf0 */
/* Ghidra symbol: FUN_017b5bf0 */


undefined4 * FUN_017b5bf0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int iVar6;
  int local_40;
  int iStack_3c;
  
  uVar5 = *param_2;
  lVar1 = param_1[0xc];
  iVar2 = (**(code **)(*param_1 + 0xb0))(param_1);
  puVar4 = (undefined4 *)FUN_004095c0((longlong)iVar2);
  *puVar4 = 0x68;
  puVar4[1] = 0x105;
  puVar4[2] = (int)lVar1 * 4 + 0x14;
  local_40 = (int)uVar5;
  iStack_3c = (int)((ulonglong)uVar5 >> 0x20);
  uVar5 = FUN_00b95b20((int)param_1[3] - local_40,*(int *)((longlong)param_1 + 0x1c) - iStack_3c,
                       (int)param_1[9] - local_40,*(int *)((longlong)param_1 + 0x4c) - iStack_3c);
  *(undefined8 *)(puVar4 + 3) = uVar5;
  puVar4[5] = *(undefined4 *)((longlong)param_1 + 100);
  puVar4[6] = (int)param_1[0xd];
  *(undefined2 *)(puVar4 + 7) = *(undefined2 *)((longlong)param_1 + 0x6c);
  *(short *)((longlong)puVar4 + 0x1e) = (short)param_1[0xc];
  iVar2 = (int)param_1[0xc];
  if ((0 < iVar2) && (iVar6 = 0, -1 < iVar2 + -1)) {
    do {
      uVar3 = FUN_00b95a90(param_1[0xb] + (longlong)iVar6 * 8);
      puVar4[(longlong)iVar6 + 8] = uVar3;
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return puVar4;
}

