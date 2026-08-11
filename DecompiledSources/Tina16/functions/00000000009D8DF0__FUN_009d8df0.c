/* Ghidra address: 009d8df0 */
/* Ghidra symbol: FUN_009d8df0 */


undefined4 FUN_009d8df0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_60 = 0;
  local_68 = 0;
  local_38 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_28 = 0;
  local_30 = 0;
  cVar1 = FUN_0086ca20(param_2);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_009d81f0(param_1);
    FUN_0086cb60(&local_28,param_2);
    FUN_004168e0(&local_30,local_28);
    cVar1 = (**(code **)(*plVar2 + 0x290))(plVar2,local_30);
    if (cVar1 != '\0') {
      plVar2 = (longlong *)FUN_009d81f0(param_1);
      plVar3 = (longlong *)FUN_009d81f0(param_1);
      FUN_0086cb60(&local_40,param_2);
      FUN_004168e0(&local_48,local_40);
      (**(code **)(*plVar3 + 0x288))(plVar3,&local_38,local_48);
      FUN_004168e0(&local_50,param_2);
      FUN_004168e0(&local_58,param_3);
      (**(code **)(*plVar2 + 0x348))(plVar2,local_38,local_50,local_58);
      goto LAB_009d8f63;
    }
  }
  plVar2 = (longlong *)FUN_009d81f0(param_1);
  FUN_004168e0(&local_60,param_2);
  FUN_004168e0(&local_68,param_3);
  (**(code **)(*plVar2 + 0x348))(plVar2,0,local_60,local_68);
LAB_009d8f63:
  local_20 = 0;
  FUN_004145c0(&local_68,5);
  FUN_00414480(&local_40);
  FUN_004145c0(&local_38,2);
  FUN_00414480(&local_28);
  return local_20;
}

