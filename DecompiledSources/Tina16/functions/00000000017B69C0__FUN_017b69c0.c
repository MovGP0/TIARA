/* Ghidra address: 017b69c0 */
/* Ghidra symbol: FUN_017b69c0 */


undefined4 * FUN_017b69c0(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int local_30;
  int iStack_2c;
  
  uVar2 = *param_2;
  puVar1 = (undefined4 *)FUN_004095c0(0x27);
  *puVar1 = 0x69;
  puVar1[1] = 0x105;
  puVar1[2] = 0x1b;
  *(undefined8 *)(puVar1 + 3) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(puVar1 + 5) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(puVar1 + 7) = *(undefined8 *)(param_1 + 0x60);
  *(undefined2 *)(puVar1 + 9) = *(undefined2 *)(param_1 + 0x68);
  *(undefined1 *)((longlong)puVar1 + 0x26) = *(undefined1 *)(param_1 + 0x6a);
  local_30 = (int)uVar2;
  iStack_2c = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = FUN_00b95b20(*(int *)(param_1 + 0x18) - local_30,*(int *)(param_1 + 0x1c) - iStack_2c,
                       *(int *)(param_1 + 0x48) - local_30,*(int *)(param_1 + 0x4c) - iStack_2c);
  *(undefined8 *)((longlong)puVar1 + 0xd) = uVar2;
  return puVar1;
}

