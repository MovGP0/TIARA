/* Ghidra address: 0149e330 */
/* Ghidra symbol: FUN_0149e330 */


void FUN_0149e330(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_38;
  longlong *local_30;
  
  if (param_2 != (longlong *)0x0) {
    FUN_01d41fa0();
    if (*(char *)((longlong)param_1 + 0xb) == '\0') {
      (**(code **)(*param_2 + 0xf0))(param_2,0);
      if ((*(char *)((longlong)param_1 + 9) == '\0') ||
         (*(char *)((longlong)param_1 + 0x24) == '\x01')) {
        local_30 = (longlong *)param_1[5];
        local_38 = *(undefined8 *)(*local_30 + 0x70);
        (**(code **)(*param_1 + 0x1c8))(param_1,param_2,&local_38);
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_2);
        iVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
        (**(code **)(*param_2 + 0x30))
                  (param_2,*(int *)((longlong)param_1 + 0xc) + -5,(int)param_1[2] + -5,
                   *(int *)((longlong)param_1 + 0xc) + iVar1 + 5,(int)param_1[2] + iVar2 + 5);
      }
    }
    else {
      FUN_01a9a440(param_2,0xe);
      iVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_2);
      iVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
      (**(code **)(*param_2 + 0xa0))
                (param_2,*(undefined4 *)((longlong)param_1 + 0xc),(int)param_1[2],
                 *(int *)((longlong)param_1 + 0xc) + iVar1,(int)param_1[2] + iVar2);
    }
    (**(code **)(*param_2 + 0xe0))(param_2,0);
    FUN_01d41f90();
  }
  return;
}

