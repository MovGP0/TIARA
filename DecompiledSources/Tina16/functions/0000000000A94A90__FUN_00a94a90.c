/* Ghidra address: 00a94a90 */
/* Ghidra symbol: FUN_00a94a90 */


void FUN_00a94a90(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
LAB_00a94bc3:
  do {
    if (*(int *)(param_1 + 0x10) <= iVar5) {
      return;
    }
    lVar3 = FUN_004aeac0(param_1,iVar5);
    if (param_2 < *(int *)(lVar3 + 0x30)) {
      *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + -1;
    }
    if (0 < iVar5) {
      lVar4 = FUN_004aeac0(param_1,iVar5 + -1);
      if (*(int *)(lVar4 + 0x30) == *(int *)(lVar3 + 0x30)) {
        lVar4 = FUN_004aeac0(param_1,iVar5 + -1);
        iVar2 = FUN_004aeba0(*(undefined8 *)(param_3 + 600),lVar4);
        if (-1 < iVar2) {
          FUN_004ae870(*(undefined8 *)(param_3 + 600),iVar2);
        }
        lVar1 = *(longlong *)(lVar4 + 0x60);
        if (lVar1 != 0) {
          if (*(int *)(*(longlong *)(lVar3 + 8) + 0x18) == *(int *)(*(longlong *)(lVar4 + 8) + 0x18)
             ) {
            *(longlong *)(lVar3 + 0x60) = lVar1;
            *(longlong *)(lVar1 + 0x3c0) = lVar3;
            *(code **)(lVar1 + 0x3b8) = FUN_00a93e20;
            *(longlong *)(lVar1 + 0x3d0) = lVar3;
            *(code **)(lVar1 + 0x3c8) = FUN_00a93ec0;
            *(undefined8 *)(lVar4 + 0x60) = 0;
          }
          else {
            iVar2 = (**(code **)(**(longlong **)(param_3 + 0x2c0) + 0xc0))
                              (*(longlong **)(param_3 + 0x2c0),lVar1);
            if (-1 < iVar2) {
              (**(code **)(**(longlong **)(param_3 + 0x2c0) + 0x98))
                        (*(longlong **)(param_3 + 0x2c0),iVar2);
            }
          }
        }
        FUN_004ae870(param_1,iVar5 + -1);
        goto LAB_00a94bc3;
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

