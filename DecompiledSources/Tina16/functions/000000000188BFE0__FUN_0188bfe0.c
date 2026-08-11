/* Ghidra address: 0188bfe0 */
/* Ghidra symbol: FUN_0188bfe0 */


void FUN_0188bfe0(longlong param_1)

{
  char cVar1;
  undefined1 auStack_28 [32];
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    FUN_0188c400(param_1);
    if (*(longlong *)(param_1 + 200) != 0) {
      FUN_0188c570(param_1);
      cVar1 = FUN_0188caa0(param_1);
      if (cVar1 == '\0') {
        FUN_0188c4f0(param_1);
      }
      else {
        *(int *)(param_1 + 0x24) = (int)*(short *)(*(longlong *)(param_1 + 0xe0) + 0x4e);
        *(int *)(param_1 + 0x3c) = (int)*(short *)(*(longlong *)(param_1 + 0xe0) + 0x58);
        *(int *)(param_1 + 0x38) = (int)*(short *)(*(longlong *)(param_1 + 0xe0) + 0x5e);
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x24);
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x80);
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x78);
        if (*(short *)(*(longlong *)(param_1 + 0xe0) + 0x4c) == 1) {
          *(undefined1 *)(param_1 + 0x20) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_1 + 0x20);
        FUN_0188bc40(auStack_28);
        FUN_0188bde0(auStack_28);
        *(undefined4 *)(param_1 + 8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
        *(undefined1 *)(param_1 + 0x58) = 1;
      }
    }
  }
  return;
}

