/* Ghidra address: 009d8870 */
/* Ghidra symbol: FUN_009d8870 */


undefined4 FUN_009d8870(undefined8 param_1,undefined8 param_2,short *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
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
  local_38 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_28 = 0;
  local_30 = 0;
  cVar1 = FUN_0086ca20(param_2);
  if (cVar1 == '\0') {
    plVar2 = (longlong *)FUN_009d81f0(param_1);
    FUN_004168e0(&local_60,param_2);
    cVar1 = (**(code **)(*plVar2 + 0x310))(plVar2,0,local_60);
    *param_3 = -(ushort)(cVar1 != '\0');
  }
  else {
    plVar2 = (longlong *)FUN_009d81f0(param_1);
    FUN_0086cb60(&local_28,param_2);
    FUN_004168e0(&local_30,local_28);
    cVar1 = (**(code **)(*plVar2 + 0x290))(plVar2,local_30);
    if (cVar1 == '\0') {
      *param_3 = 0;
    }
    else {
      plVar2 = (longlong *)FUN_009d81f0(param_1);
      plVar3 = (longlong *)FUN_009d81f0(param_1);
      FUN_0086cb60(&local_40,param_2);
      FUN_004168e0(&local_48,local_40);
      (**(code **)(*plVar3 + 0x288))(plVar3,&local_38,local_48);
      FUN_0086ca50(&local_50,param_2);
      FUN_004168e0(&local_58,local_50);
      cVar1 = (**(code **)(*plVar2 + 0x310))(plVar2,local_38,local_58);
      *param_3 = -(ushort)(cVar1 != '\0');
    }
  }
  local_20 = 0;
  FUN_004145c0(&local_60,2);
  FUN_00414480(&local_50);
  FUN_00414520(&local_48);
  FUN_00414480(&local_40);
  FUN_004145c0(&local_38,2);
  FUN_00414480(&local_28);
  return local_20;
}

