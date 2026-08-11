/* Ghidra address: 017bb800 */
/* Ghidra symbol: FUN_017bb800 */


void FUN_017bb800(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [40];
  
  if (*param_2 == 0) {
    lVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *param_2 = lVar1;
    uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *param_3 = uVar2;
    lVar1 = *(longlong *)(param_1 + 0x10);
    iVar4 = *(int *)(lVar1 + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_00b94e60(lVar1,iVar3);
        FUN_017bb780(auStack_48,uVar2);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

