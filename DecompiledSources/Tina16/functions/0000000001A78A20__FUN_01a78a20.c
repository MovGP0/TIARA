/* Ghidra address: 01a78a20 */
/* Ghidra symbol: FUN_01a78a20 */


void FUN_01a78a20(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x810) + 0x80),iVar2);
    FUN_007e2f80(uVar1,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xb);
  iVar2 = 0xb;
  do {
    uVar1 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x810) + 0x80),iVar2);
    FUN_007e2f80(uVar1,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xe);
  iVar2 = 0xe;
  do {
    uVar1 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x810) + 0x80),iVar2);
    FUN_007e2f80(uVar1,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x12);
  iVar2 = 0x14;
  do {
    uVar1 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x810) + 0x80),iVar2);
    FUN_007e2f80(uVar1,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x18);
  iVar2 = 0x12;
  do {
    uVar1 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x810) + 0x80),iVar2);
    FUN_007e2f80(uVar1,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x14);
  return;
}

