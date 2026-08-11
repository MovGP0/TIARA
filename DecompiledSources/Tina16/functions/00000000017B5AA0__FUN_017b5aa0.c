/* Ghidra address: 017b5aa0 */
/* Ghidra symbol: FUN_017b5aa0 */


undefined4 * FUN_017b5aa0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int local_40;
  int iStack_3c;
  
  uVar3 = *param_2;
  iVar1 = (**(code **)(*param_1 + 0xb0))(param_1);
  puVar2 = (undefined4 *)FUN_004095c0((longlong)iVar1);
  *puVar2 = 0x65;
  puVar2[1] = 0x105;
  puVar2[2] = 0x1c;
  local_40 = (int)uVar3;
  iStack_3c = (int)((ulonglong)uVar3 >> 0x20);
  uVar3 = FUN_00b95b20((int)param_1[3] - local_40,*(int *)((longlong)param_1 + 0x1c) - iStack_3c,
                       (int)param_1[9] - local_40,*(int *)((longlong)param_1 + 0x4c) - iStack_3c);
  *(undefined8 *)(puVar2 + 3) = uVar3;
  puVar2[5] = (int)param_1[10];
  *(undefined2 *)(puVar2 + 6) = *(undefined2 *)((longlong)param_1 + 0x54);
  *(int *)((longlong)puVar2 + 0x1a) = (int)param_1[0xb];
  *(undefined2 *)((longlong)puVar2 + 0x1e) = *(undefined2 *)((longlong)param_1 + 0x5c);
  *(undefined1 *)(puVar2 + 8) = *(undefined1 *)((longlong)param_1 + 0x5e);
  *(undefined4 *)((longlong)puVar2 + 0x21) = *(undefined4 *)((longlong)param_1 + 0x5f);
  *(undefined2 *)((longlong)puVar2 + 0x25) = *(undefined2 *)((longlong)param_1 + 99);
  *(undefined1 *)((longlong)puVar2 + 0x27) = *(undefined1 *)((longlong)param_1 + 0x65);
  return puVar2;
}

