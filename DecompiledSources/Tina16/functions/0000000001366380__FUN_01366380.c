/* Ghidra address: 01366380 */
/* Ghidra symbol: FUN_01366380 */


void FUN_01366380(longlong param_1,longlong param_2,longlong *param_3,int param_4,undefined8 param_5
                 )

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  short local_54;
  short sStack_52;
  int local_40;
  int local_3c [3];
  
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0xb0) + 0x30) != '\0') {
    (**(code **)(*param_3 + 0x1f0))(param_3,param_4,local_3c,&local_40);
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0xb0) + 0x28) +
                    0x10);
    iVar6 = 0;
    if (-1 < iVar7 + -1) {
      do {
        piVar3 = (int *)FUN_004aeac0(*(undefined8 *)
                                      (*(longlong *)(*(longlong *)(param_1 + 0x90) + 0xb0) + 0x28),
                                     iVar6);
        if ((*piVar3 == local_3c[0]) &&
           (lVar4 = FUN_004aeac0(*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x90) + 0xb0) + 0x28),iVar6
                                ), *(int *)(lVar4 + 4) == local_40)) {
          return;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (*(int *)(param_2 + 0x1c) == -1) {
      iVar7 = (local_3c[0] - *(int *)(param_2 + 0x14)) + *(int *)(param_2 + 0xc);
      iVar6 = (local_40 - *(int *)(param_2 + 0x18)) + *(int *)(param_2 + 0x10);
    }
    else {
      uVar2 = FUN_017c46c0(param_2,param_3,param_4);
      local_54 = (short)uVar2;
      iVar7 = (int)local_54;
      sStack_52 = (short)((uint)uVar2 >> 0x10);
      iVar6 = (int)sStack_52;
    }
    piVar3 = (int *)FUN_004095c0(0x14);
    *piVar3 = local_3c[0];
    piVar3[1] = local_40;
    uVar5 = FUN_0198d430(param_5);
    bVar1 = (**(code **)(*param_3 + 0x1e8))(param_3,uVar5,1 - param_4);
    *(byte *)(piVar3 + 4) = bVar1 ^ 2;
    piVar3[2] = iVar7;
    piVar3[3] = iVar6;
    uVar5 = FUN_0198d430(param_5);
    bVar1 = (**(code **)(*param_3 + 0x1e8))(param_3,uVar5,param_4);
    *(byte *)((longlong)piVar3 + 0x11) = bVar1 ^ 2;
    FUN_004ae7e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0xb0) + 0x28),piVar3)
    ;
  }
  return;
}

