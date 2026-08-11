/* Ghidra address: 01b9f220 */
/* Ghidra symbol: FUN_01b9f220 */


undefined1 FUN_01b9f220(longlong param_1,undefined4 param_2,int *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_4c;
  int *local_48;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_38 = 0;
  local_30[0] = 0;
  local_20 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4a0);
  local_58 = param_1;
  local_4c = param_2;
  local_48 = param_3;
  uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
  FUN_01b9f160(auStack_78,local_30,uVar4);
  FUN_00414b50(&local_20,local_30[0]);
  *local_48 = -1;
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(local_58 + 0x6e8) + 0x4a0) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(local_58 + 0x6e8) + 0x4a0);
      uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
      FUN_01b9f160(auStack_78,&local_38,uVar4);
      iVar3 = FUN_00416db0(local_20,local_38);
      if (iVar3 == 0) {
        *local_48 = iVar5;
        break;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_39 = *local_48 != -1;
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  return local_39;
}

