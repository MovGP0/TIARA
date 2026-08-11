/* Ghidra address: 01bb2b90 */
/* Ghidra symbol: FUN_01bb2b90 */


void FUN_01bb2b90(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  plVar1 = *(longlong **)(param_1 + 0x760);
  FUN_00416ba0(&local_30,*(undefined8 *)PTR_DAT_020049a0,L"\\Templates");
  FUN_00724420(plVar1,local_30);
  cVar3 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  if (cVar3 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x710);
    FUN_00724270(plVar1,&local_40);
    FUN_00b965d0(&local_38,local_40,*(undefined8 *)(lVar2 + 0x310),*(undefined4 *)(lVar2 + 0x98));
    FUN_0064de00(lVar2,local_38);
    FUN_00724270(plVar1,&local_48);
    FUN_00414ad0(param_1 + 0x780,local_48);
    FUN_01bb3de0(param_1,&local_20,&local_28);
    FUN_01bb3f00(param_1,*(undefined8 *)(param_1 + 0x780),&local_20,&local_28);
    FUN_01bb3e80(param_1,local_20,local_28);
  }
  FUN_00414560(&local_48,3);
  FUN_00414480(&local_30);
  return;
}

