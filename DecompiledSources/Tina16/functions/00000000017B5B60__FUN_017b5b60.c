/* Ghidra address: 017b5b60 */
/* Ghidra symbol: FUN_017b5b60 */


void FUN_017b5b60(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_30 = (int)*param_3;
  uStack_2c = (int)((ulonglong)*param_3 >> 0x20);
  uVar1 = FUN_00498310(*(short *)(param_2 + 0xc) + local_30,*(short *)(param_2 + 0xe) + uStack_2c);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_00498310(*(short *)(param_2 + 0x10) + local_30,*(short *)(param_2 + 0x12) + uStack_2c)
  ;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x14);
  *(int *)(param_1 + 0x54) = (int)*(short *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined2 *)(param_1 + 0x5c) = *(undefined2 *)(param_2 + 0x1e);
  *(undefined1 *)(param_1 + 0x5e) = *(undefined1 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x5f) = *(undefined4 *)(param_2 + 0x21);
  *(undefined2 *)(param_1 + 99) = *(undefined2 *)(param_2 + 0x25);
  *(undefined1 *)(param_1 + 0x65) = *(undefined1 *)(param_2 + 0x27);
  return;
}

