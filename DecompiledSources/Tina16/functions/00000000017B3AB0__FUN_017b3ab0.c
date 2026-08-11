/* Ghidra address: 017b3ab0 */
/* Ghidra symbol: FUN_017b3ab0 */


undefined4 * FUN_017b3ab0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  short *local_28;
  undefined8 local_20;
  
  local_20 = *param_2;
  iVar1 = (**(code **)(*param_1 + 0xb0))(param_1);
  puVar2 = (undefined4 *)FUN_004095c0((longlong)iVar1);
  *puVar2 = 0x67;
  puVar2[1] = 0x105;
  puVar2[2] = (uint)*(byte *)(param_1 + 8) + (uint)*(byte *)(param_1 + 0x28) + 0x16;
  local_28 = (short *)(puVar2 + 3);
  FUN_00409a70(param_1 + 8,local_28,*(byte *)(param_1 + 8) + 1);
  FUN_017b1970(&local_28,*(byte *)(param_1 + 8) + 1);
  *(undefined1 *)local_28 = 0;
  FUN_017b1970(&local_28,1);
  FUN_00409a70(param_1 + 0x28,local_28,*(byte *)(param_1 + 0x28) + 1);
  FUN_017b1970(&local_28,*(byte *)(param_1 + 0x28) + 1);
  *(undefined1 *)local_28 = 0;
  FUN_017b1970(&local_28,1);
  *local_28 = (short)param_1[3] - (short)local_20;
  local_28[1] = *(short *)((longlong)param_1 + 0x1c) - local_20._4_2_;
  *(longlong *)(local_28 + 2) = param_1[0x48];
  *(char *)(local_28 + 6) = (char)param_1[0x49];
  *(undefined1 *)((longlong)local_28 + 0xd) = *(undefined1 *)((longlong)param_1 + 0x249);
  *(undefined4 *)(local_28 + 7) = *(undefined4 *)((longlong)param_1 + 0x24c);
  return puVar2;
}

