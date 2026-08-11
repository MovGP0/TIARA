/* Ghidra address: 01bd5390 */
/* Ghidra symbol: FUN_01bd5390 */


void FUN_01bd5390(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  
  FUN_0064c7e0(param_1,param_2,param_3,param_4,param_5);
  if (param_1[0x6c] != 0) {
    iVar1 = *(int *)(param_1[0x6c] + 0x9c);
    iVar4 = (*(int *)((longlong)param_1 + 0x94) + *(int *)((longlong)param_1 + 0x9c) / 2) -
            iVar1 / 2;
    cVar3 = (**(code **)(*param_1 + 0x1c0))(param_1,(longlong)iVar1 % 2 & 0xffffffff);
    if (cVar3 == '\0') {
      plVar2 = (longlong *)param_1[0x6c];
      (**(code **)(*plVar2 + 400))
                (plVar2,param_2,iVar4,(int)param_1[0x13],*(undefined4 *)((longlong)plVar2 + 0x9c));
    }
    else {
      plVar2 = (longlong *)param_1[0x6c];
      (**(code **)(*plVar2 + 400))
                (plVar2,param_2 + *(int *)((longlong)param_1 + 0x354) + 5,iVar4,(int)plVar2[0x13],
                 *(undefined4 *)((longlong)plVar2 + 0x9c));
    }
  }
  (**(code **)(*param_1 + 0x1b0))(param_1);
  return;
}

