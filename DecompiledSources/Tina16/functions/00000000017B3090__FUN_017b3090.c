/* Ghidra address: 017b3090 */
/* Ghidra symbol: FUN_017b3090 */


void FUN_017b3090(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = *param_3;
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0xc);
  local_20 = (int)uVar1;
  uStack_1c = (int)((ulonglong)uVar1 >> 0x20);
  uVar1 = FUN_00498310(*(short *)(param_2 + 0xd) + local_20,*(short *)(param_2 + 0xf) + uStack_1c);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_00498310(*(short *)(param_2 + 0x11) + local_20,*(short *)(param_2 + 0x13) + uStack_1c)
  ;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x19);
  *(int *)(param_1 + 0x5c) = (int)*(short *)(param_2 + 0x1d);
  return;
}

