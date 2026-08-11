/* Ghidra address: 013653b0 */
/* Ghidra symbol: FUN_013653b0 */


void FUN_013653b0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,int param_6,int param_7,int param_8)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 local_40 [4];
  uint local_3c [3];
  
  if ((*(char *)(param_1 + 0x30) != '\0') &&
     (FUN_0199e960(param_3,param_4,param_5,param_6,0xffffffff,0xffffffff,local_3c,local_40),
     local_3c[0] < 0x80000000)) {
    iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2,param_7,param_8);
    if (iVar2 == -1) {
      iVar2 = (**(code **)(*param_2 + 0x200))(param_2,param_7,param_8);
    }
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
    iVar6 = 0;
    if (-1 < iVar7 + -1) {
      do {
        piVar3 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),iVar6);
        if ((*piVar3 == param_5) &&
           (lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),iVar6),
           *(int *)(lVar4 + 4) == param_6)) {
          return;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    piVar3 = (int *)FUN_004095c0(0x14);
    *piVar3 = param_5;
    piVar3[1] = param_6;
    uVar5 = FUN_0198d430(param_3);
    uVar1 = (**(code **)(*param_2 + 0x1e8))(param_2,uVar5,iVar2);
    *(undefined1 *)(piVar3 + 4) = uVar1;
    piVar3[2] = param_7;
    piVar3[3] = param_8;
    *(char *)((longlong)piVar3 + 0x11) = (char)piVar3[4];
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),piVar3);
  }
  return;
}

