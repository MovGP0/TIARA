/* Ghidra address: 0064ecc0 */
/* Ghidra symbol: FUN_0064ecc0 */


void FUN_0064ecc0(undefined8 param_1,longlong *param_2)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  if ((param_2[4] == 0) || (*(char *)(param_2[4] + 0x392) == '\0')) {
    iVar4 = FUN_0064dcf0(param_2[10]);
    iVar5 = FUN_0064dcd0(param_2[10]);
    iVar2 = *(int *)((longlong)param_2 + 0x1c);
    dVar1 = (double)param_2[8];
    iVar6 = FUN_0040c770((double)(int)param_2[3] - (double)iVar4 * (double)param_2[7]);
    *(int *)(param_2 + 0xc) = iVar6;
    uVar7 = FUN_0040c770((double)iVar2 - (double)iVar5 * dVar1);
    *(undefined4 *)((longlong)param_2 + 100) = uVar7;
    *(int *)(param_2 + 0xd) = (int)param_2[0xc] + iVar4;
    *(int *)((longlong)param_2 + 0x6c) = *(int *)((longlong)param_2 + 100) + iVar5;
    (**(code **)(*param_2 + 0x58))(param_2,param_2 + 0xc);
  }
  else {
    uVar8 = FUN_0065b870(param_2[4]);
    thunk_FUN_03e49910(uVar8,param_2 + 0xc);
    lVar3 = param_2[4];
    if ((*(char *)(lVar3 + 0x392) != '\0') && (*(longlong *)(lVar3 + 0x340) != 0)) {
      (**(code **)(**(longlong **)(lVar3 + 0x340) + 0x48))
                (*(longlong **)(lVar3 + 0x340),param_2[10],param_2[0xf],(char)param_2[0xe],
                 param_2 + 0xc);
    }
  }
  return;
}

