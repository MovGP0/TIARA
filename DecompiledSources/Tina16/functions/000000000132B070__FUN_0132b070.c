/* Ghidra address: 0132b070 */
/* Ghidra symbol: FUN_0132b070 */


void FUN_0132b070(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  if (*(char *)(*(longlong *)(param_1 + 0x6f0) + 0x328) == '\0') {
    if (*(char *)(param_1 + 0x71c) == '\x03') {
      FUN_013410d0();
    }
    else {
      FUN_0082a6c0(*(undefined8 *)(*(longlong *)(param_1 + 0x708) + 0xd08),0);
      FUN_01c87e40(*(undefined8 *)(param_1 + 0x708),param_2);
      FUN_0153b340(0);
      (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x128))(*(longlong **)(param_1 + 0x6e8),1);
      (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),1);
    }
  }
  else {
    uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6c8));
    *(undefined8 *)(PTR_DAT_02004010 + 0x7e0) = uVar2;
    *(undefined8 *)(PTR_DAT_02004010 + 0x7e8) = 0x3ff0000000000000;
    if (*(double *)(PTR_DAT_02004010 + 0x7e0) <= 1e-06 &&
        *(double *)(PTR_DAT_02004010 + 0x7e0) != 1e-06) {
      *(undefined8 *)(PTR_DAT_02004010 + 0x7e0) = 0x3eb0c6f7a0b5ed8d;
    }
    uVar2 = 0;
    if (*(char *)(param_1 + 0x71c) == '\x01') {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x128))
                        (*(longlong **)(param_1 + 0x6e8),0);
    }
    else if (*(char *)(param_1 + 0x71c) == '\x04') {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))
                        (*(longlong **)(param_1 + 0x6e0),0);
    }
    if (*(byte *)(param_1 + 0x71c) < 8) {
      bVar1 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (*(byte *)(param_1 + 0x71c) & 0x1f)
              & 0x12U) != 0;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_0132b610(param_1);
      PTR_DAT_02004010[0x2ad] = 0;
      FUN_0082a6c0(*(undefined8 *)(*(longlong *)(param_1 + 0x708) + 0xd08),1);
      FUN_01c87e40(*(undefined8 *)(param_1 + 0x708),param_2);
    }
    FUN_0132bb80(param_1,L" t =  0",0);
  }
  return;
}

