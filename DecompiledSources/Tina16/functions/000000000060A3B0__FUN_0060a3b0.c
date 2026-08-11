/* Ghidra address: 0060a3b0 */
/* Ghidra symbol: FUN_0060a3b0 */


void FUN_0060a3b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if ((*(longlong *)(lVar1 + 0x10) != 0) && (*(longlong *)(lVar1 + 0x28) == 0)) {
    FUN_0060a750();
    if (*(int *)(lVar1 + 0x60) == 0) {
      thunk_FUN_03d2c01a(*(undefined8 *)(lVar1 + 0x10),0x68,lVar1 + 0x40);
      *(undefined4 *)(lVar1 + 0x60) = 0x28;
      *(undefined4 *)(lVar1 + 100) = *(undefined4 *)(lVar1 + 0x44);
      *(undefined4 *)(lVar1 + 0x68) = *(undefined4 *)(lVar1 + 0x48);
      *(undefined2 *)(lVar1 + 0x6c) = 1;
      *(short *)(lVar1 + 0x6e) = *(short *)(lVar1 + 0x50) * *(short *)(lVar1 + 0x52);
    }
    uVar2 = FUN_00607e60(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x20),
                         *(undefined8 *)(lVar1 + 0x20),lVar1 + 0x40,0);
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
  }
  return;
}

