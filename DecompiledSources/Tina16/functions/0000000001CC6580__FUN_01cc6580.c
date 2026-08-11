/* Ghidra address: 01cc6580 */
/* Ghidra symbol: FUN_01cc6580 */


void FUN_01cc6580(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_01cc28c0(*(undefined8 *)(param_2 + 8));
  puVar1 = *(undefined8 **)(*(longlong *)(param_2 + 8) + 0x438);
  lVar2 = (**(code **)*puVar1)(puVar1);
  plVar3 = *(longlong **)(*(longlong *)(param_2 + 8) + 0x438);
  (**(code **)(*plVar3 + 0x50))(plVar3,param_3,0);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x438);
  (**(code **)(*plVar3 + 0x48))(plVar3,0,2);
  FUN_004b8ba0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x438),
               *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x438),lVar2 - param_3);
  (**(code **)(*param_4 + 0x90))(param_4);
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar5 = *(int *)(*(longlong *)(param_2 + 8) + 0x10);
  if ((iVar4 != iVar5) && (iVar5 = iVar5 + -1, iVar4 <= iVar5)) {
    iVar5 = (iVar5 - iVar4) + 1;
    do {
      plVar3 = (longlong *)FUN_01d347d0(*(undefined8 *)(param_2 + 8),iVar4);
      lVar2 = (**(code **)(*plVar3 + 0x48))(*plVar3,1,plVar3);
      *(undefined1 *)(lVar2 + 0x19) = 0;
      (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),lVar2);
      FUN_01cc0ae0(lVar2,local_30);
      (**(code **)(*param_4 + 0x80))(param_4,local_30[0],lVar2);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414480(local_30);
  return;
}

