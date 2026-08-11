/* Ghidra address: 014c4380 */
/* Ghidra symbol: FUN_014c4380 */


undefined8 FUN_014c4380(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_00414480(param_2);
  cVar1 = FUN_014c4160(param_1);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_014bdce0(&PTR_FUN_014bcbd8);
    cVar1 = FUN_014bdf00(plVar3,0);
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
      if (iVar2 == 1) {
        FUN_014beb40(plVar3,&local_50);
        FUN_00416ba0(&local_48,L"EXAMPLESROOT|",local_50);
        FUN_014c1460(param_1,local_40,local_48);
        FUN_00416880(local_20,local_40[0]);
        FUN_00416cd0(&local_30,4,*(undefined8 *)(param_1 + 0x10),L"tina4web.dll/schematic?",L"tsc=",
                     local_20[0]);
        FUN_014c1210(param_1,&local_58,local_30);
        FUN_00414b50(&local_30,local_58);
        FUN_014beb40(plVar3,&local_68);
        FUN_00450070(&local_60,local_68,&DAT_014c4684,&DAT_014c4694,1);
        FUN_00441920(&local_28,local_60);
        if (local_28 != 0) {
          FUN_014c35c0(param_1,&local_70);
          FUN_014c37b0(param_1,local_30,local_70,local_28,1);
          FUN_014c35c0(param_1,&local_78);
          FUN_00416ba0(param_2,local_78,local_28);
        }
      }
    }
  }
  FUN_00414560(&local_78,7);
  FUN_004144d0(local_40);
  FUN_00414560(&local_30,3);
  return param_2;
}

