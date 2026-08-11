/* Ghidra address: 01b9ad00 */
/* Ghidra symbol: FUN_01b9ad00 */


void FUN_01b9ad00(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  local_40 = 0;
  local_20 = 0;
  local_38 = 0;
  iVar1 = FUN_006d5120(*(undefined8 *)(param_1 + 0x7e0));
  if (0 < iVar1) {
    plVar3 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7e0));
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_38,iVar1);
    local_30 = local_38;
    local_28 = 0x11;
    FUN_00442f70(&local_20,L"%s will be deleted. Continue?",&local_30,0);
    iVar2 = FUN_0072d440(local_20,0,3,0);
    if (iVar2 == 6) {
      (**(code **)(**(longlong **)(param_1 + 0x880) + 0x18))
                (*(longlong **)(param_1 + 0x880),&local_40,iVar1);
      FUN_004412f0(local_40);
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x880) + 0x30))
                        (*(longlong **)(param_1 + 0x880),iVar1);
      FUN_00410f20(uVar4);
      (**(code **)(**(longlong **)(param_1 + 0x880) + 0x98))(*(longlong **)(param_1 + 0x880),iVar1);
      plVar3 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7e0));
      (**(code **)(*plVar3 + 0x98))(plVar3,iVar1);
      (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x278))
                (*(longlong **)(param_1 + 0x7e0),iVar1 + -1);
      FUN_01b979d0(param_1,param_2);
    }
  }
  FUN_00414560(&local_40,2);
  FUN_00414480(&local_20);
  return;
}

