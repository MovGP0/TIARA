/* Ghidra address: 00acf480 */
/* Ghidra symbol: FUN_00acf480 */


void FUN_00acf480(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_38 [16];
  
  FUN_00a99cd0(param_1,param_2,param_3,param_4);
  cVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  if (cVar2 == '\0') {
    if ((char)param_1[0x1d] != '\0') {
      cVar2 = (**(code **)(**(longlong **)(param_1[3] + 0xb8) + 0x450))
                        (*(longlong **)(param_1[3] + 0xb8));
      if (cVar2 != '\0') {
        FUN_005fdab0(param_2[0x10],0xffffff);
        iVar3 = (**(code **)(*param_1 + 0xf0))(param_1);
        iVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
        iVar5 = (**(code **)(*param_1 + 0xf0))(param_1);
        iVar6 = (**(code **)(*param_1 + 0xf8))(param_1);
        FUN_00498350(local_38,iVar3 + -3,iVar4 + -3,iVar5 + 0x10,iVar6 + 0x10);
        (**(code **)(*param_2 + 0x98))(param_2,local_38);
      }
    }
  }
  else {
    plVar1 = (longlong *)param_1[0x28];
    FUN_00a71ed0(param_2,param_3,param_4,param_3 + (int)plVar1[0x13],
                 param_4 + *(int *)((longlong)plVar1 + 0x9c),0,*(undefined1 *)(param_1[3] + 0xb2),
                 (char)param_1[0x22],0xffffff,*(undefined1 *)(param_1[3] + 0x90));
    cVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
    if (cVar2 != '\0') {
      FUN_005fd4e0(param_2[0xf],0);
      param_4 = param_4 + *(int *)((longlong)plVar1 + 0x9c) / 2;
      (**(code **)(*param_2 + 200))(param_2,param_3 + 3,param_4);
      (**(code **)(*param_2 + 0xc0))(param_2,param_3 + 5,param_4 + 2);
      (**(code **)(*param_2 + 0xc0))(param_2,param_3 + 9,param_4 + -2);
    }
  }
  return;
}

