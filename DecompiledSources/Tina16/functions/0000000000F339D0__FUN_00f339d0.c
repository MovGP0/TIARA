/* Ghidra address: 00f339d0 */
/* Ghidra symbol: FUN_00f339d0 */


void FUN_00f339d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  uVar3 = FUN_00453560(param_2,0x5b);
  FUN_00453390(uVar3,&LAB_00f33b14);
  FUN_00416ba0(local_30,param_3,param_4);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  uVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      FUN_00453060(param_2,local_30[0]);
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (*(uint *)(lVar1 + 0x10) <= uVar4) {
        FUN_00594f90();
      }
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8);
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2,local_30[0],param_4);
      if ((int)uVar4 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1) {
        FUN_00453560(param_2,0x2c);
      }
      FUN_00453390(param_2,&LAB_00f33b14);
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar3 = FUN_00453060(param_2,param_3);
  FUN_00453560(uVar3,0x5d);
  FUN_00414480(local_30);
  return;
}

