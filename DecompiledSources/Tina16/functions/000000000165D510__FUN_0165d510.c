/* Ghidra address: 0165d510 */
/* Ghidra symbol: FUN_0165d510 */


void FUN_0165d510(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int local_40;
  int local_3c [3];
  
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_3c[0] = 0;
    lVar1 = FUN_004afa30(*(undefined8 *)(param_1 + 0x180));
    iVar4 = *(int *)(lVar1 + 0x10);
    iVar5 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar2 = FUN_004aeac0(lVar1,iVar5);
        FUN_00409a70(*(undefined8 *)(lVar2 + 200),&local_40,4);
        local_3c[0] = local_3c[0] + local_40;
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (local_3c[0] == 0) {
      FUN_00412130(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x10));
    }
    else {
      lVar2 = thunk_FUN_041b4712(0,(longlong)local_3c[0],0x3000,0x40);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x188),lVar2);
      iVar4 = *(int *)(lVar1 + 0x10);
      iVar5 = 0;
      if (-1 < iVar4 + -1) {
        do {
          lVar3 = FUN_004aeac0(lVar1,iVar5);
          FUN_00409a70(*(undefined8 *)(lVar3 + 200),local_3c,4);
          FUN_00409a70(*(longlong *)(lVar3 + 200) + 4,lVar2,(longlong)local_3c[0]);
          FUN_004095f0(*(undefined8 *)(lVar3 + 200));
          *(undefined8 *)(lVar3 + 200) = 0;
          *(longlong *)(lVar3 + 0xc0) = lVar2;
          lVar2 = lVar2 + local_3c[0];
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      FUN_004afcc0(*(undefined8 *)(param_1 + 0x180));
      FUN_00412130(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x10));
    }
  }
  return;
}

