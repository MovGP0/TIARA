/* Ghidra address: 017b2ff0 */
/* Ghidra symbol: FUN_017b2ff0 */


undefined4 * FUN_017b2ff0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int local_30;
  int iStack_2c;
  
  uVar3 = *param_2;
  iVar1 = (**(code **)(*param_1 + 0xb0))(param_1);
  puVar2 = (undefined4 *)FUN_004095c0((longlong)iVar1);
  *puVar2 = 0x66;
  puVar2[1] = 0x105;
  puVar2[2] = 0x13;
  *(char *)(puVar2 + 3) = (char)param_1[10];
  local_30 = (int)uVar3;
  iStack_2c = (int)((ulonglong)uVar3 >> 0x20);
  uVar3 = FUN_00b95b20((int)param_1[3] - local_30,*(int *)((longlong)param_1 + 0x1c) - iStack_2c,
                       (int)param_1[9] - local_30,*(int *)((longlong)param_1 + 0x4c) - iStack_2c);
  *(undefined8 *)((longlong)puVar2 + 0xd) = uVar3;
  *(undefined4 *)((longlong)puVar2 + 0x15) = *(undefined4 *)((longlong)param_1 + 0x54);
  *(int *)((longlong)puVar2 + 0x19) = (int)param_1[0xb];
  *(undefined2 *)((longlong)puVar2 + 0x1d) = *(undefined2 *)((longlong)param_1 + 0x5c);
  return puVar2;
}

