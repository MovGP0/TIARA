/* Ghidra address: 01c042a0 */
/* Ghidra symbol: FUN_01c042a0 */


void FUN_01c042a0(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_30;
  
  if (param_1[100] != 0) {
    local_30 = (**(code **)(*param_1 + 0x210))(param_1);
    (**(code **)(**(longlong **)(param_1[0x62] + 0x70) + 0x10))
              (*(longlong **)(param_1[0x62] + 0x70),param_1[0x17]);
    FUN_01c07180(param_1);
    iVar3 = (int)param_1[0x13];
    iVar4 = *(int *)((longlong)param_1 + 0x9c);
    bVar1 = *(byte *)((longlong)param_1 + 0x329);
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(ulonglong *)((longlong)param_1 + 0x32c) =
             CONCAT44(iVar4 / 2 - local_30._4_4_ / 2,*(undefined4 *)((longlong)param_1 + 0x334));
        iVar3 = FUN_01c04260(param_1,&local_30);
        iVar5 = FUN_01c04200(param_1);
        FUN_00423b50((longlong)param_1 + 0x34c,
                     *(int *)((longlong)param_1 + 0x334) + (int)local_30 + iVar3,
                     iVar4 / 2 - iVar5 / 2);
      }
      else {
        *(ulonglong *)((longlong)param_1 + 0x32c) =
             CONCAT44(iVar4 / 2 - local_30._4_4_ / 2,
                      (iVar3 - *(int *)((longlong)param_1 + 0x33c)) - (int)local_30);
        iVar3 = FUN_01c04200(param_1,(longlong)local_30._4_4_ % 2 & 0xffffffff);
        FUN_00423b50((longlong)param_1 + 0x34c,*(undefined4 *)((longlong)param_1 + 0x334),
                     iVar4 / 2 - iVar3 / 2);
      }
    }
    else if ((byte)(bVar1 - 2) < 2) {
      if (bVar1 == 2) {
        cVar2 = (**(code **)(*param_1 + 0x1c0))(param_1);
        if (cVar2 == '\0') {
          *(ulonglong *)((longlong)param_1 + 0x32c) =
               CONCAT44(iVar4 / 2 - local_30._4_4_ / 2,iVar3 / 2 - (int)local_30 / 2);
        }
        else {
          *(ulonglong *)((longlong)param_1 + 0x32c) =
               CONCAT44((int)param_1[0x67],iVar3 / 2 - (int)local_30 / 2);
        }
        iVar4 = FUN_01c041a0(param_1,(longlong)(int)local_30 % 2 & 0xffffffff);
        FUN_00423b50((longlong)param_1 + 0x34c,iVar3 / 2 - iVar4 / 2,
                     (int)param_1[0x66] + local_30._4_4_ + (int)param_1[0x69]);
      }
      else {
        iVar4 = FUN_01c041a0(param_1,(longlong)iVar3 % 2 & 0xffffffff);
        FUN_00423b50((longlong)param_1 + 0x34c,iVar3 / 2 - iVar4 / 2,(int)param_1[0x67]);
        iVar4 = FUN_01c04200(param_1);
        iVar5 = FUN_01c04260(param_1,&local_30);
        *(ulonglong *)((longlong)param_1 + 0x32c) =
             CONCAT44((int)param_1[0x6a] + iVar4 + iVar5,iVar3 / 2 - (int)local_30 / 2);
      }
    }
  }
  return;
}

