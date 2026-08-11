/* Ghidra address: 01a68140 */
/* Ghidra symbol: FUN_01a68140 */


void FUN_01a68140(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x748) + 0x18))
                (*(longlong **)(param_1 + 0x748),&local_30,iVar5);
      plVar4 = (longlong *)FUN_01b21300(local_30,&LAB_01a682c8,0);
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_58,0);
      if (iVar5 == 0) {
        FUN_00414ad0(param_1 + 0x758,local_58);
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_58);
      FUN_00410f20(plVar4);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
            (*(longlong **)(param_1 + 0x6b0),*(undefined4 *)(param_1 + 0x730));
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  FUN_01a67a80(param_1,uVar3);
  FUN_00414560(&local_58,6);
  return;
}

