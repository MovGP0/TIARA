/* Ghidra address: 01ce2b70 */
/* Ghidra symbol: FUN_01ce2b70 */


void FUN_01ce2b70(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 local_39 [9];
  
  (**(code **)(*param_1 + 0x158))(param_1,param_2,local_39);
  iVar1 = (**(code **)(*(longlong *)param_1[0x10] + 0x28))((longlong *)param_1[0x10]);
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))((longlong *)param_1[0x10],iVar4 + -1)
      ;
      plVar3 = (longlong *)FUN_004113f0(uVar2,&PTR_FUN_01d282a8);
      (**(code **)(*plVar3 + 0x98))(plVar3,param_2);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

