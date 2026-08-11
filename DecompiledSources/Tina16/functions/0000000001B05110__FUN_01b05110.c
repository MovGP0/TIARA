/* Ghidra address: 01b05110 */
/* Ghidra symbol: FUN_01b05110 */


void FUN_01b05110(longlong param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      iVar1 = 1;
      for (uVar2 = (uint)*(byte *)(param_1 + 4); uVar2 != 0; uVar2 = uVar2 - 1) {
        FUN_016e9160(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + -8 + (longlong)iVar1 * 8));
        iVar1 = iVar1 + 1;
      }
      FUN_004095f0(*(undefined8 *)(param_1 + 0x40),(ulonglong)*(byte *)(param_1 + 4) << 3);
      *(undefined1 *)(param_1 + 4) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_004095f0(*(longlong *)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    *(undefined2 *)(param_1 + 10) = 0;
    *(undefined2 *)(param_1 + 0xc) = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_004095f0(*(longlong *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    *(undefined2 *)(param_1 + 0x10) = 0;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      if (*(char *)(param_1 + 0x111) != '\0') {
        (**(code **)(param_1 + 0xa0))(*(longlong *)(param_1 + 0x60));
      }
      FUN_0040d200(*(undefined8 *)(param_1 + 0x60),*(undefined2 *)(param_1 + 0x58),0);
      *(undefined1 *)(param_1 + 0x11f) = 0;
    }
    *(undefined1 *)(param_1 + 0x110) = 0;
    *(undefined1 *)(param_1 + 0x111) = 0;
    *(undefined1 *)(param_1 + 0x112) = 0;
    *(undefined1 *)(param_1 + 0x113) = 0;
    *(undefined1 *)(param_1 + 0x114) = 0;
    *(undefined1 *)(param_1 + 0x115) = 0;
    *(undefined1 *)(param_1 + 0x116) = 0;
    *(undefined1 *)(param_1 + 0x117) = 0;
    *(undefined1 *)(param_1 + 0x118) = 0;
    *(undefined1 *)(param_1 + 0x119) = 0;
    *(undefined1 *)(param_1 + 0x11a) = 0;
    *(undefined1 *)(param_1 + 0x11b) = 0;
    *(undefined1 *)(param_1 + 0x11c) = 0;
    *(undefined1 *)(param_1 + 0x11d) = 0;
    *(undefined1 *)(param_1 + 0x11e) = 0;
    if (*(longlong *)(param_1 + 0x130) != 0) {
      FUN_00598010(*(longlong *)(param_1 + 0x130) + 8);
    }
  }
  return;
}

