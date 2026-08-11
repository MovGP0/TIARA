/* Ghidra address: 017dcdd0 */
/* Ghidra symbol: FUN_017dcdd0 */


void FUN_017dcdd0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int local_3c [3];
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_017dd0a0(param_1,0);
  }
  if (*(char *)(param_1 + 0x18) == '\x02') {
    FUN_017d7400(*(undefined8 *)(param_1 + 0x1b0));
    FUN_0040d200(*(undefined8 *)(param_1 + 0xc0),(longlong)(*(int *)(param_1 + 8) * 4),0);
    FUN_004095f0(*(undefined8 *)(param_1 + 200));
    uVar3 = FUN_00409570((longlong)(*(int *)(param_1 + 0xa8) * 4));
    *(undefined8 *)(param_1 + 200) = uVar3;
    local_3c[0] = 0;
    iVar5 = 0;
    if (-1 < *(int *)(param_1 + 8) + -2) {
      iVar6 = *(int *)(param_1 + 8) + -1;
      do {
        lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa0),iVar5);
        iVar2 = *(int *)(lVar4 + 0x10);
        if (iVar2 < 1) {
          FUN_017d73c0(*(undefined8 *)(param_1 + 0x1b0),iVar5);
        }
        else {
          *(int *)(*(longlong *)(param_1 + 0xc0) + (longlong)(local_3c[0] + 1) * 4) =
               *(int *)(*(longlong *)(param_1 + 0xc0) + (longlong)local_3c[0] * 4) + iVar2;
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa0),iVar5);
          FUN_00409a70(*(undefined8 *)(lVar4 + 8),uVar3,(longlong)(iVar2 * 4));
          uVar3 = FUN_017dcb00(param_1,uVar3,iVar2 * 4);
          local_3c[0] = local_3c[0] + 1;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (0 < *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x10)) {
      iVar5 = *(int *)(param_1 + 0xa8);
      iVar6 = 0;
      if (-1 < iVar5 + -1) {
        do {
          FUN_017d7470(*(undefined8 *)(param_1 + 0x1b0),
                       *(undefined4 *)(*(longlong *)(param_1 + 200) + (longlong)iVar6 * 4),local_3c)
          ;
          if (0 < local_3c[0]) {
            piVar1 = (int *)(*(longlong *)(param_1 + 200) + (longlong)iVar6 * 4);
            *piVar1 = *piVar1 - local_3c[0];
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    FUN_017dd280(param_1,0,1);
    thunk_FUN_041540ac(param_1 + 0xd8,param_1 + 0xe8);
    uVar3 = thunk_FUN_0413c545((*(int *)(param_1 + 8) -
                               *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x10)) + -1,
                               *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                               param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xd8) = uVar3;
  }
  if (*(char *)(param_1 + 0x18) == '\x04') {
    FUN_017dd6b0(param_1,0);
  }
  return;
}

