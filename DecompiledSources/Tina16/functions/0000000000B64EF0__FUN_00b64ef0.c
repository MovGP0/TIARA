/* Ghidra address: 00b64ef0 */
/* Ghidra symbol: FUN_00b64ef0 */


void FUN_00b64ef0(longlong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x48));
  if (*(short *)(lVar3 + 0x85) == 0) {
    lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x48));
    if (*(char *)(lVar3 + 0x87) == '\0') {
      bVar1 = false;
      goto LAB_00b64f3d;
    }
  }
  bVar1 = true;
LAB_00b64f3d:
  if (bVar1) {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x41);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),10);
    lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x48));
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),*(undefined1 *)(lVar3 + 0x87));
    lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x48));
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),*(undefined2 *)(lVar3 + 0x85));
    lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x48));
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),*(undefined2 *)(lVar3 + 0x85));
    lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x48));
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),*(undefined1 *)(lVar3 + 0x87));
    lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x48));
    if (*(char *)(lVar3 + 0x87) == '\0') {
      uVar2 = (undefined4)CONCAT62((int6)((ulonglong)lVar3 >> 0x10),2);
    }
    else {
      lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                           *(undefined4 *)(param_1 + 0x48));
      if (*(short *)(lVar3 + 0x85) == 0) {
        uVar2 = (undefined4)CONCAT62((int6)((ulonglong)lVar3 >> 0x10),1);
      }
      else {
        uVar2 = 0;
      }
    }
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),uVar2);
  }
  return;
}

