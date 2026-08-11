/* Ghidra address: 01a5eb60 */
/* Ghidra symbol: FUN_01a5eb60 */


void FUN_01a5eb60(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  FUN_01d12000(*(undefined8 *)(param_1 + 0x90),param_2[0x12]);
  *(char *)(param_1 + 0x98) = (char)param_2[0x13];
  *(bool *)(*(longlong *)(param_1 + 0x90) + 0xb9) = (char)param_2[0x13] == '\x03';
  uVar1 = (**(code **)(*param_2 + 0xd0))(param_2);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(longlong *)(param_1 + 0x50) = param_2[10];
  *(longlong *)(param_1 + 0x58) = param_2[0xb];
  *(longlong *)(param_1 + 0x60) = param_2[0xc];
  *(longlong *)(param_1 + 0x68) = param_2[0xd];
  *(short *)(param_1 + 0x70) = (short)param_2[0xe];
  *(char *)(param_1 + 0x80) = (char)param_2[0x10];
  *(longlong *)(param_1 + 0x88) = param_2[0x11];
  *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)((longlong)param_2 + 0x99);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(char *)(param_1 + 0xa0) = (char)param_2[0x14];
  *(longlong *)(param_1 + 0xa8) = param_2[0x15];
  *(longlong *)(param_1 + 0xb0) = param_2[0x16];
  *(longlong *)(param_1 + 0xb8) = param_2[0x17];
  return;
}

