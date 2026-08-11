/* Ghidra address: 017b6a50 */
/* Ghidra symbol: FUN_017b6a50 */


void FUN_017b6a50(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_2 + 0x24);
  *(undefined1 *)(param_1 + 0x6a) = *(undefined1 *)(param_2 + 0x26);
  local_30 = (int)uVar1;
  uStack_2c = (int)((ulonglong)uVar1 >> 0x20);
  uVar1 = FUN_00498310(*(short *)(param_2 + 0xd) + local_30,*(short *)(param_2 + 0xf) + uStack_2c);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_00498310(*(short *)(param_2 + 0x11) + local_30,*(short *)(param_2 + 0x13) + uStack_2c)
  ;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}

