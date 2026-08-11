/* Ghidra address: 013063e0 */
/* Ghidra symbol: FUN_013063e0 */


void FUN_013063e0(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int unaff_ESI;
  int iVar3;
  int *unaff_RDI;
  int iVar4;
  int local_40;
  int local_3c [3];
  
  if (*(longlong *)(param_1 + 0xaf8) != 0) {
    if (param_2 == 0) {
      unaff_ESI = *(int *)(*(longlong *)(param_1 + 0xaf8) + 0x10) + -1;
      unaff_RDI = local_3c;
    }
    else if (param_2 == 1) {
      unaff_ESI = 0;
      uVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
      local_40 = FUN_006dd6f0(uVar2);
      local_40 = local_40 + -1;
      unaff_RDI = &local_40;
    }
    local_3c[0] = 0;
    if (-1 < unaff_ESI) {
      iVar4 = unaff_ESI + 1;
      do {
        FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),*unaff_RDI);
        iVar1 = FUN_012e58b0();
        iVar3 = 0;
        if (-1 < iVar1 + -1) {
          do {
            uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),*unaff_RDI);
            FUN_012e5eb0(uVar2,iVar3,0);
            uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),*unaff_RDI);
            FUN_012e5f00(uVar2,iVar3);
            uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),*unaff_RDI);
            FUN_012e5f50(uVar2,iVar3);
            uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),*unaff_RDI);
            FUN_012e5fa0(uVar2,iVar3);
            uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),*unaff_RDI);
            FUN_012e6050(uVar2,iVar3,0);
            uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),*unaff_RDI);
            FUN_012e60d0(uVar2,iVar3,0x3ff0000000000000);
            uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),*unaff_RDI);
            FUN_012e6150(uVar2,iVar3,0x4014000000000000);
            iVar3 = iVar3 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        local_3c[0] = local_3c[0] + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

