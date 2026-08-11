/* Ghidra address: 017b1440 */
/* Ghidra symbol: FUN_017b1440 */


undefined4 * FUN_017b1440(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  short local_30;
  short sStack_2c;
  
  uVar1 = *param_2;
  iVar2 = (**(code **)(*param_1 + 0xb0))(param_1);
  puVar3 = (undefined4 *)FUN_004095c0((longlong)iVar2);
  *puVar3 = 100;
  puVar3[1] = 0x105;
  puVar3[2] = 0x2e;
  FUN_00415020(puVar3 + 3,param_1 + 8,0x10);
  *(char *)((longlong)puVar3 + 0x1d) = (char)param_1[0x28];
  *(undefined1 *)((longlong)puVar3 + 0x1e) = *(undefined1 *)((longlong)param_1 + 0x144);
  *(undefined1 *)((longlong)puVar3 + 0x1f) = *(undefined1 *)((longlong)param_1 + 0x145);
  *(undefined1 *)(puVar3 + 8) = *(undefined1 *)((longlong)param_1 + 0x147);
  local_30 = (short)uVar1;
  *(short *)((longlong)puVar3 + 0x21) = (short)param_1[3] - local_30;
  sStack_2c = (short)((ulonglong)uVar1 >> 0x20);
  *(short *)((longlong)puVar3 + 0x23) = *(short *)((longlong)param_1 + 0x1c) - sStack_2c;
  *(char *)((longlong)puVar3 + 0x25) = (char)param_1[0x29];
  *(undefined8 *)((longlong)puVar3 + 0x26) = *(undefined8 *)((longlong)param_1 + 0x154);
  *(longlong *)((longlong)puVar3 + 0x2e) = param_1[0x2c];
  return puVar3;
}

