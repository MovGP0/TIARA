/* Ghidra address: 018c68a0 */
/* Ghidra symbol: FUN_018c68a0 */


void FUN_018c68a0(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01934910);
  if (cVar1 == '\0') {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10) + -1;
    if (param_3 <= iVar5) {
      iVar5 = (iVar5 - param_3) + 1;
      do {
        lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa8),param_3);
        if (lVar3 != 0) {
          iVar4 = FUN_01968a80(lVar3);
          iVar2 = FUN_01968a80(param_2);
          if (iVar4 == iVar2 + 1) {
            if (*(longlong *)(lVar3 + 600) != 0) {
              FUN_004ae7e0(*(undefined8 *)(param_2 + 0x208),lVar3);
            }
            FUN_004aedb0(*(undefined8 *)(param_1 + 0xa8),param_3,0);
            cVar1 = FUN_004113d0(lVar3,&PTR_FUN_019300a8);
            if (cVar1 == '\0') {
              FUN_018c68a0(param_1,lVar3);
            }
          }
          else {
            iVar4 = FUN_01968a80(lVar3);
            iVar2 = FUN_01968a80(param_2);
            if (iVar4 <= iVar2) {
              return;
            }
          }
        }
        param_3 = param_3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa8),iVar4);
        if ((lVar3 != 0) && (cVar1 = FUN_004113d0(lVar3,&PTR_FUN_0192ed70), cVar1 != '\0')) {
          if (*(longlong *)(lVar3 + 600) != 0) {
            if (*(char *)(param_1 + 0xf0) == '\0') {
              FUN_004ae7e0(*(undefined8 *)(param_2 + 0x240),lVar3);
            }
            else {
              FUN_004ae7e0(*(undefined8 *)(param_2 + 0x248),lVar3);
            }
          }
          FUN_004aedb0(*(undefined8 *)(param_1 + 0xa8),iVar4,0);
          FUN_018c68a0(param_1,lVar3);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

