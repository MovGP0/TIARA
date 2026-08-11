/* Ghidra address: 01994e10 */
/* Ghidra symbol: FUN_01994e10 */


void FUN_01994e10(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_48 [36];
  undefined8 local_24;
  undefined4 local_1c;
  
  local_1c = 0;
  local_24 = FUN_019948b0(param_1,&local_1c);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00b94e60(param_1,iVar2);
      FUN_01994c90(auStack_48,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

