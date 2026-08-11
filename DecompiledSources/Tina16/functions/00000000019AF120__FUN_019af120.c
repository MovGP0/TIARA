/* Ghidra address: 019af120 */
/* Ghidra symbol: FUN_019af120 */


undefined4 FUN_019af120(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  
  local_2c = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00b94e60(param_1,iVar2);
      FUN_019af0c0(auStack_58,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return local_2c;
}

