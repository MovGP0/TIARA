/* Ghidra address: 00d84660 */
/* Ghidra symbol: FUN_00d84660 */


void FUN_00d84660(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x20) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x20) = 0;
    FUN_00410f20();
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x10) = 0;
    FUN_00410f20();
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x18) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x18) = 0;
    FUN_00410f20();
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x110) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x110) = 0;
    FUN_00410f20();
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x100) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x100) = 0;
    FUN_00410f20();
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x108) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x108) = 0;
    FUN_00410f20();
  }
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    iVar2 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x58) + -8);
  }
  iVar1 = 0;
  if (iVar2 - 1U < 0x80000000) {
    do {
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

