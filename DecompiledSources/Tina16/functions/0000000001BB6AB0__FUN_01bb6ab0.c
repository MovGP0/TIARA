/* Ghidra address: 01bb6ab0 */
/* Ghidra symbol: FUN_01bb6ab0 */


void FUN_01bb6ab0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  plVar2 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x30))
                     (*(longlong **)(param_1 + 0x6e8),
                      param_4 - *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4c0));
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x40))(plVar2);
  FUN_01d04330(puVar3,local_30);
  FUN_01434e10(puVar3,5);
  FUN_01d04330(puVar3,local_40);
  iVar1 = FUN_00416db0(local_40[0],local_30[0]);
  if (iVar1 != 0) {
    uVar4 = FUN_00f03860(*(undefined8 *)(*(longlong *)(param_1 + 0x6d0) + 0x660),1);
    FUN_00f03530(uVar4,0);
    FUN_01d04330(puVar3,local_30);
    iVar1 = FUN_004170c0(&DAT_01bb6ce8,local_30[0],1);
    FUN_00416dc0(&local_48,local_30[0],1,iVar1 + -2);
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d0),1,param_4,local_48);
    plVar2 = *(longlong **)(param_1 + 0x6e8);
    param_4 = param_4 - *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4c0);
    FUN_004b3cf0(plVar2,&local_58,param_4);
    FUN_01d04330(puVar3,&local_68);
    FUN_0043ea00(&local_60,local_68);
    FUN_00416cd0(&local_50,3,local_58,&LAB_01bb6cf8,local_60);
    (**(code **)(*plVar2 + 0x40))(plVar2,param_4,local_50);
  }
  uVar4 = (**(code **)*puVar3)(puVar3);
  FUN_00418590(uVar4,&DAT_01cf1390);
  FUN_00414560(&local_68,6);
  FUN_00414480(local_30);
  return;
}

