/* Ghidra address: 01241cc0 */
/* Ghidra symbol: FUN_01241cc0 */


void FUN_01241cc0(longlong param_1,undefined8 param_2,uint param_3)

{
  short sVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x600);
  sVar1 = *(short *)((longlong)puVar2 + 0x1fa4);
  if (sVar1 == 0x4c) {
    if ((param_3 & 1) == 0) {
      *puVar2 = DAT_01f2bc50;
    }
    if ((param_3 & 2) == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x10) = DAT_01f2bc58;
    }
    if ((param_3 & 4) == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x20) = DAT_01f2bc60;
    }
    if ((param_3 & 8) == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x30) = DAT_01f2bc68;
    }
  }
  else if (sVar1 == 0x48) {
    if ((param_3 & 1) == 0) {
      *puVar2 = DAT_01f2bc70;
    }
    if ((param_3 & 2) == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x10) = DAT_01f2bc78;
    }
    if ((param_3 & 4) == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x20) = DAT_01f2bc80;
    }
    if ((param_3 & 8) == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x30) = DAT_01f2bc88;
    }
  }
  else if (sVar1 == 0x50) {
    if ((param_3 & 2) == 0) {
      puVar2[2] = DAT_01f2bc98;
    }
    if ((param_3 & 1) == 0) {
      **(undefined8 **)(param_1 + 0x600) = DAT_01f2bc90;
    }
    if ((param_3 & 8) == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x30) = DAT_01f2bca0;
    }
    if ((param_3 & 4) == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x20) = DAT_01f2bca8;
    }
    if ((param_3 & 0x10) == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x28) = DAT_01f2bcb0;
    }
    if ((param_3 & 0x20) == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x38) = DAT_01f2bcb8;
    }
  }
  else if (sVar1 == 0x53) {
    if ((param_3 & 1) == 0) {
      *puVar2 = DAT_01f2bcc0;
    }
    if ((param_3 & 2) == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x10) = DAT_01f2bcc8;
    }
    if ((param_3 & 4) == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x20) = DAT_01f2bcd8;
    }
    if ((param_3 & 8) == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x30) = DAT_01f2bcd0;
    }
    if ((param_3 & 0x20) == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x38) = DAT_01f2bce8;
    }
    if ((param_3 & 0x10) == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x28) = DAT_01f2bce0;
    }
  }
  return;
}

