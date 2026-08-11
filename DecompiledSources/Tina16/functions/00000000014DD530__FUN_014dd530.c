/* Ghidra address: 014dd530 */
/* Ghidra symbol: FUN_014dd530 */


void FUN_014dd530(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong in_stack_00000030;
  undefined1 auStack_48 [48];
  
  if (in_stack_00000030 != 0) {
    iVar3 = *(int *)(in_stack_00000030 + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_01d347d0(in_stack_00000030,iVar2);
        FUN_014dd200(auStack_48,uVar1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

