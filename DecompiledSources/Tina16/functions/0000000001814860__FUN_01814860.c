/* Ghidra address: 01814860 */
/* Ghidra symbol: FUN_01814860 */


void FUN_01814860(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  
  if (param_2 != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
    local_1c = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar1 = FUN_01814800(auStack_48);
        FUN_004ae7e0(param_2,uVar1);
        local_1c = local_1c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

