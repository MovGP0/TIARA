/* Ghidra address: 01c07350 */
/* Ghidra symbol: FUN_01c07350 */


void FUN_01c07350(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30;
  
  if (param_1[100] != 0) {
    local_30 = (**(code **)(*param_1 + 0x210))(param_1);
    (**(code **)(**(longlong **)(param_1[0x62] + 0x70) + 0x10))
              (*(longlong **)(param_1[0x62] + 0x70),param_1[0x17]);
    FUN_01c07180(param_1);
    iVar1 = (int)param_1[0x13];
    iVar2 = *(int *)((longlong)param_1 + 0x9c);
    if (*(byte *)((longlong)param_1 + 0x329) < 2) {
      iVar1 = FUN_01c04260(param_1,&local_30);
      iVar2 = FUN_01c041a0(param_1);
      iVar1 = *(int *)((longlong)param_1 + 0x334) + (int)local_30 + iVar1 + iVar2 +
              *(int *)((longlong)param_1 + 0x33c);
      iVar2 = local_30._4_4_;
      iVar3 = FUN_01c04200(param_1);
      if (iVar3 < iVar2) {
        iVar3 = iVar2;
      }
      iVar2 = (int)param_1[0x67] + iVar3 + (int)param_1[0x68];
    }
    else if ((byte)(*(byte *)((longlong)param_1 + 0x329) - 2) < 2) {
      iVar1 = FUN_01c041a0(param_1);
      iVar1 = *(int *)((longlong)param_1 + 0x334) + (int)local_30 + iVar1 +
              *(int *)((longlong)param_1 + 0x33c);
      iVar2 = FUN_01c04260(param_1,&local_30);
      iVar3 = FUN_01c04200(param_1);
      iVar2 = (int)param_1[0x67] + local_30._4_4_ + iVar2 + iVar3 + (int)param_1[0x68];
    }
    if ((iVar1 != (int)param_1[0x13]) || (iVar2 != *(int *)((longlong)param_1 + 0x9c))) {
      (**(code **)(*param_1 + 400))
                (param_1,(int)param_1[0x12],*(undefined4 *)((longlong)param_1 + 0x94),iVar1,iVar2);
      (**(code **)(*param_1 + 0x1b0))(param_1);
      (**(code **)(*param_1 + 0x108))(param_1);
    }
  }
  return;
}

