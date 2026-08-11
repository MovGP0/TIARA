/* Ghidra address: 010b11a0 */
/* Ghidra symbol: FUN_010b11a0 */


void FUN_010b11a0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_38 = 0;
  local_40 = 0;
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar2 = (**(code **)(*param_2 + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,&local_38,iVar5);
      FUN_004b4b10(plVar3,local_38);
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_40,0);
      cVar1 = FUN_010b13a0(param_1,local_40,&local_30,0);
      if (cVar1 != '\0') {
        uVar4 = FUN_010ae530(&DAT_010a8868,1);
        FUN_004ae7e0(*(undefined8 *)(local_30 + 0x40),uVar4);
        FUN_010ae7c0(uVar4,local_38);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(plVar3);
  FUN_00414560(&local_40,2);
  return;
}

