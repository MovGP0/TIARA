/* Ghidra address: 010fb830 */
/* Ghidra symbol: FUN_010fb830 */


void FUN_010fb830(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x9d8) + 0x80),iVar2);
    FUN_007e2f80(uVar1,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  iVar2 = 8;
  do {
    uVar1 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x9d8) + 0x80),iVar2);
    FUN_007e2f80(uVar1,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xb);
  iVar2 = 0xb;
  do {
    uVar1 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x9d8) + 0x80),iVar2);
    FUN_007e2f80(uVar1,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xe);
  iVar2 = 0x10;
  do {
    uVar1 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x9d8) + 0x80),iVar2);
    FUN_007e2f80(uVar1,iVar2 == 0x13);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x14);
  iVar2 = 0xe;
  do {
    uVar1 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x9d8) + 0x80),iVar2);
    FUN_007e2f80(uVar1,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x10);
  return;
}

