/* Ghidra address: 016266a0 */
/* Ghidra symbol: FUN_016266a0 */


void FUN_016266a0(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [256];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19 [9];
  
  local_158 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_30 = 0;
  (**(code **)(*param_1 + 0xf8))(param_1);
  (**(code **)(*param_3 + 0x18))(param_3,&local_30,0);
  cVar1 = FUN_01613aa0(param_2,local_30,&local_28);
  if (cVar1 == '\0') {
    FUN_01613110(L"T_Dig_SetPar: internal error");
  }
  else {
    local_168 = local_28;
  }
  (**(code **)(*param_3 + 0x18))(param_3,&local_38,1);
  cVar1 = FUN_01613aa0(param_2,local_38,&local_28);
  if (cVar1 == '\0') {
    FUN_01613110(L"T_Dig_SetPar: internal error");
  }
  else {
    local_160 = local_28;
  }
  if (*(char *)(param_4 + 0x139e5) == '\0') {
    puVar3 = (undefined8 *)FUN_01cfde70(param_1,1,1,local_19,&local_1a,&local_1b);
    if (puVar3 == (undefined8 *)0x0) {
      uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
      FUN_0043f750(&local_48,uVar2);
      FUN_00416ba0(&local_40,L"T_Dig_SetPar: CompID: ",local_48);
      FUN_01613110(local_40);
    }
    else {
      *puVar3 = local_168;
      puVar3 = (undefined8 *)FUN_01cfde70(param_1,1,2,local_19,&local_1a,&local_1b);
      *puVar3 = local_160;
    }
  }
  else {
    (**(code **)(*param_3 + 0x18))(param_3,&local_50,0);
    FUN_00416910(local_150,local_50,0xff);
    puVar3 = (undefined8 *)FUN_01602340(param_1,local_150);
    *puVar3 = local_168;
    (**(code **)(*param_3 + 0x18))(param_3,&local_158,1);
    FUN_00416910(local_150,local_158,0xff);
    puVar3 = (undefined8 *)FUN_01602340(param_1,local_150);
    *puVar3 = local_160;
  }
  FUN_00414480(&local_158);
  FUN_00414560(&local_50,5);
  return;
}

