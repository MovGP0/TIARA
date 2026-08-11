/* Ghidra address: 019db520 */
/* Ghidra symbol: FUN_019db520 */


void FUN_019db520(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  plVar1 = *(longlong **)(param_1 + 0x6f0);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_20,uVar2);
  plVar1 = *(longlong **)(param_1 + 0x6f0);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_28,uVar2);
  iVar3 = FUN_004170c0(&DAT_019db6d8,local_20[0],1);
  if (0 < iVar3) {
    iVar4 = FUN_004170c0(L"Local",local_20[0],1);
    if (0 < iVar4) {
      FUN_00416dc0(local_20,local_20[0],iVar3 + 1,0xff);
      FUN_0043ea00(&local_30,local_20[0]);
      FUN_00414b50(local_20,local_30);
    }
  }
  if (*(int *)(*(longlong *)(param_1 + 0x778) + 0x4a8) == 1) {
    FUN_00416cd0(param_1 + 0x868,3,&DAT_019db700,local_20[0],&LAB_019db710);
  }
  FUN_00416cd0(param_1 + 0x870,3,&DAT_019db700,local_20[0],&LAB_019db710);
  FUN_019db970(param_1);
  FUN_00414560(&local_30,3);
  return;
}

