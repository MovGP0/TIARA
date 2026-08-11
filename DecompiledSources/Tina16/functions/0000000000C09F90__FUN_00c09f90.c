/* Ghidra address: 00c09f90 */
/* Ghidra symbol: FUN_00c09f90 */


void FUN_00c09f90(longlong *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  
  cVar1 = FUN_0065be20(param_1);
  if ((cVar1 != '\0') && (*(int *)((longlong)param_1 + 0x4d4) != 0)) {
    iVar2 = FUN_0064d0b0(param_1);
    iVar2 = (iVar2 - (int)param_1[0x122]) + -2;
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    *(int *)(param_1 + 0x9a) = iVar2 / *(int *)((longlong)param_1 + 0x4d4);
    iVar2 = FUN_0064d120(param_1,iVar2 % *(int *)((longlong)param_1 + 0x4d4));
    *(int *)(param_1 + 0xa1) = iVar2 / *(int *)((longlong)param_1 + 0x52c);
    cVar1 = FUN_00c10e70(param_1,(longlong)iVar2 % (longlong)*(int *)((longlong)param_1 + 0x52c) &
                                 0xffffffff);
    if (cVar1 != '\0') {
      (**(code **)(*(longlong *)param_1[0xbf] + 0x50))((longlong *)param_1[0xbf]);
      (**(code **)(*param_1 + 0x180))(param_1);
    }
    if (param_2 == '\0') {
      FUN_00bfd160(param_1);
    }
    else {
      if (*(char *)(param_1[0xc2] + 0x1c) == '\0') {
        FUN_00bfd160(param_1);
      }
      else {
        FUN_00c08d90(param_1,param_1);
      }
      FUN_00c03500(param_1);
      *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) & 0xfffe;
      (**(code **)(*param_1 + 0x180))(param_1);
    }
    *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) & 0xfffd;
    uVar3 = FUN_00c09df0(param_1);
    if ((uVar3 & 0x40000) == 0) {
      FUN_00bfb1b0(param_1,*(undefined4 *)((longlong)param_1 + 0x50c));
    }
    uVar3 = FUN_00c09df0(param_1);
    if ((uVar3 & 0x20000) == 0) {
      FUN_00bfcc50(param_1,*(undefined4 *)((longlong)param_1 + 0x534));
    }
  }
  return;
}

