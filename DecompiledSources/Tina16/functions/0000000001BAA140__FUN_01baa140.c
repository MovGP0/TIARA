/* Ghidra address: 01baa140 */
/* Ghidra symbol: FUN_01baa140 */


void FUN_01baa140(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_res18 [2];
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  plVar1 = *(longlong **)(param_1 + 8);
  (**(code **)(*param_2 + 0x90))(param_2);
  iVar2 = (**(code **)(*plVar1 + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
      iVar3 = FUN_00414f50(lVar4 + 0x100,"\n[Internal]",(ulonglong)*(byte *)(lVar4 + 0x100) + 1);
      if (iVar3 != 0) {
        iVar3 = FUN_00416db0(local_res18[0],L"[All]");
        if (iVar3 != 0) {
          FUN_004169a0(local_40,lVar4 + 0x100);
          iVar3 = FUN_00416db0(local_res18[0],local_40[0]);
          if (iVar3 != 0) goto LAB_01baa24f;
        }
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_48,iVar5);
        (**(code **)(*param_2 + 0x80))(param_2,local_48,lVar4);
      }
LAB_01baa24f:
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(local_res18);
  return;
}

