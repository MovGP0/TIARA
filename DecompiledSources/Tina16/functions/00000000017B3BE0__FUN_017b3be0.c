/* Ghidra address: 017b3be0 */
/* Ghidra symbol: FUN_017b3be0 */


void FUN_017b3be0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined1 local_228 [256];
  undefined1 local_128 [256];
  byte *local_28;
  undefined8 local_20;
  
  local_20 = *param_3;
  local_28 = (byte *)(param_2 + 0xc);
  FUN_00409a70(local_28,local_128,*local_28 + 1);
  FUN_017b1970(&local_28,*local_28 + 2);
  FUN_00409a70(local_28,local_228,*local_28 + 1);
  FUN_017b1970(&local_28,*local_28 + 2);
  pbVar1 = local_28;
  *(int *)(param_1 + 0x18) = *(short *)local_28 + (int)local_20;
  *(int *)(param_1 + 0x1c) = *(short *)(local_28 + 2) + local_20._4_4_;
  FUN_00414ff0(param_1 + 0x40,local_128);
  FUN_00414ff0(param_1 + 0x140,local_228);
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(pbVar1 + 4);
  *(byte *)(param_1 + 0x248) = pbVar1[0xc];
  *(byte *)(param_1 + 0x249) = pbVar1[0xd];
  *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(pbVar1 + 0xe);
  return;
}

