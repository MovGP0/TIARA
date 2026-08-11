/* Ghidra address: 01641a00 */
/* Ghidra symbol: FUN_01641a00 */


int FUN_01641a00(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_3c = -1;
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
                (*(longlong **)(param_1 + 0x38),&local_30,iVar4);
      FUN_004b4b10(plVar3,local_30);
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_38,0);
      iVar2 = FUN_0043fc00(local_38);
      if (iVar2 == param_2) goto LAB_01641abe;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(plVar3);
  iVar4 = local_3c;
LAB_01641abe:
  local_3c = iVar4;
  FUN_00414560(&local_38,2);
  return local_3c;
}

