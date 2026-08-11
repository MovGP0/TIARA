/* Ghidra address: 012bc5f0 */
/* Ghidra symbol: FUN_012bc5f0 */


void FUN_012bc5f0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  
  lVar4 = FUN_019a4600();
  if ((*(longlong *)(param_1 + 0x6f0) == lVar4) &&
     (lVar4 = FUN_0198d430(*(undefined8 *)(param_1 + 0x6f0)), lVar4 != 0)) {
    FUN_01994230(*(undefined8 *)(param_1 + 0x6f0));
  }
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      cVar1 = FUN_0068bca0(*(undefined8 *)(param_1 + 0x6b0),iVar6);
      if (cVar1 != '\0') {
        puVar5 = (undefined8 *)
                 (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x30))
                           (*(longlong **)(param_1 + 0x6f8),iVar6);
        lVar4 = FUN_019a4600();
        if (((*(longlong *)(param_1 + 0x6f0) == lVar4) &&
            (lVar4 = FUN_0198d430(*(undefined8 *)(param_1 + 0x6f0)), lVar4 != 0)) &&
           (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x18))
                              (*(longlong **)(param_1 + 0x6f0),*puVar5), -1 < iVar3)) {
          FUN_01993f30(*(undefined8 *)(param_1 + 0x6f0),*puVar5,1,0);
        }
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

