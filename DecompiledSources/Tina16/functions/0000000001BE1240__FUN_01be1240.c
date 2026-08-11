/* Ghidra address: 01be1240 */
/* Ghidra symbol: FUN_01be1240 */


void FUN_01be1240(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  
  lVar3 = thunk_FUN_03de17fb(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x18));
  if (lVar3 != 0) {
    lVar3 = FUN_006485b0(lVar3);
    iVar2 = *(int *)(DAT_02111460 + 0x10);
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar4 = FUN_01be10e0(DAT_02111460,iVar6);
        lVar5 = FUN_007f9b70(uVar4,1);
        if (lVar5 == lVar3) {
          uVar4 = FUN_01be10e0(DAT_02111460,iVar6);
          cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01bdee40);
          if (cVar1 != '\0') {
            if (((*(int *)(*(longlong *)(param_1 + 0x60) + 0x10) == 0x221) &&
                (cVar1 = FUN_004113d0(lVar5,&PTR_FUN_007f0370), cVar1 != '\0')) &&
               (iVar2 = FUN_007ff9d0(lVar5), iVar2 == 1)) {
              uVar4 = FUN_01be10e0(DAT_02111460,iVar6);
              FUN_01be93f0(uVar4);
              return;
            }
            uVar4 = FUN_01be10e0(DAT_02111460,iVar6);
            FUN_01be8880(uVar4);
            return;
          }
        }
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

