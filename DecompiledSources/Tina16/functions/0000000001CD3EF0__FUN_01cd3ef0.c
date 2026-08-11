/* Ghidra address: 01cd3ef0 */
/* Ghidra symbol: FUN_01cd3ef0 */


void FUN_01cd3ef0(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
            (*(longlong **)(param_2 + 0x70),param_1[0x14]);
  iVar2 = FUN_005fdff0(param_2,&DAT_01cd404c);
  iVar3 = FUN_005fdfd0(param_2,&DAT_01cd404c);
  uVar4 = FUN_01cd6670(param_1);
  uVar4 = uVar4 & 0xff;
  if (uVar4 < 6) {
    if (uVar4 != 5) {
      uVar4 = uVar4 - 1;
      if (uVar4 != 0xffffffffffffffff) {
        if (uVar4 < 2) goto LAB_01cd3fe0;
        if (uVar4 != 3) {
          return;
        }
      }
LAB_01cd3f89:
      cVar1 = FUN_01cd3cd0(param_1);
      if (cVar1 == '\0') {
        return;
      }
      FUN_01d2dc30(param_2,*(int *)((longlong)param_1 + 0x14) - iVar2,(int)param_1[3],
                   *(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0xffffff);
      (**(code **)(*param_1 + 0xc0))(param_1,param_2,0);
      (**(code **)(*param_1 + 0x70))(param_1,param_2);
      return;
    }
  }
  else {
    if (uVar4 == 6) goto LAB_01cd3f89;
    if (uVar4 != 7) {
      return;
    }
  }
LAB_01cd3fe0:
  cVar1 = FUN_01cd3cd0(param_1);
  if (cVar1 != '\0') {
    FUN_01d2dc30(param_2,*(int *)((longlong)param_1 + 0x14) + 1,(int)param_1[3],
                 *(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4] + iVar3,0xffffff);
    (**(code **)(*param_1 + 0xc0))(param_1,param_2,0);
    (**(code **)(*param_1 + 0x70))(param_1,param_2);
  }
  return;
}

