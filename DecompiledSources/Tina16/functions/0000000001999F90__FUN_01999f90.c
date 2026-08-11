/* Ghidra address: 01999f90 */
/* Ghidra symbol: FUN_01999f90 */


void FUN_01999f90(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  
  local_1c = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar2);
      FUN_01999c30(auStack_48,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(char *)(param_1 + 0xe0) == '\x0e') {
    FUN_019954b0(*(undefined8 *)(param_1 + 0xd0),local_1c);
  }
  return;
}

