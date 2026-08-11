/* Ghidra address: 01629460 */
/* Ghidra symbol: FUN_01629460 */


void FUN_01629460(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_40[0] = 0;
  local_30 = 0;
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_01629130(&local_30,param_2,*(undefined8 *)(param_1 + 0x48),param_4);
  FUN_004b4b10(plVar3,local_30);
  iVar1 = (**(code **)(*plVar3 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*plVar3 + 0x18))(plVar3,local_40,iVar4);
      uVar2 = FUN_0043fc00(local_40[0]);
      FUN_016271b0(*(undefined8 *)(param_1 + 0x48),uVar2,param_3,param_5);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(plVar3);
  FUN_00414480(local_40);
  FUN_00414480(&local_30);
  return;
}

