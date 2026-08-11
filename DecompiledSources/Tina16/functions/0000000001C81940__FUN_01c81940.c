/* Ghidra address: 01c81940 */
/* Ghidra symbol: FUN_01c81940 */


void FUN_01c81940(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_20[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  plVar1 = *(longlong **)(param_1 + 0x1298);
  FUN_00724270(plVar1,&local_28);
  FUN_00441640(local_20,local_28);
  FUN_00441920(&local_38,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
  FUN_004414c0(&local_30,local_38,0);
  FUN_00416ad0(local_20,local_30);
  FUN_00724380(plVar1,local_20[0]);
  *(undefined4 *)(plVar1 + 0x1d) = 1;
  iVar3 = FUN_00724300(plVar1);
  if (iVar3 < 4) {
    if (iVar3 == 3) {
      FUN_00724270(plVar1,&local_50);
      FUN_00416ad0(&local_50,L".JPG");
      FUN_00724380(plVar1,local_50);
    }
    else if (iVar3 == 1) {
      FUN_00724270(plVar1,&local_40);
      FUN_00416ad0(&local_40,L".EMF");
      FUN_00724380(plVar1,local_40);
    }
    else if (iVar3 == 2) {
      FUN_00724270(plVar1,&local_48);
      FUN_00416ad0(&local_48,L".BMP");
      FUN_00724380(plVar1,local_48);
    }
  }
  else if (iVar3 == 4) {
    FUN_00724270(plVar1,&local_58);
    FUN_00416ad0(&local_58,L".GIF");
    FUN_00724380(plVar1,local_58);
  }
  else if (iVar3 == 5) {
    FUN_00724270(plVar1,&local_60);
    FUN_00416ad0(&local_60,L".PNG");
    FUN_00724380(plVar1,local_60);
  }
  cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  if (cVar2 != '\0') {
    FUN_00724270(plVar1,&local_68);
    uVar4 = FUN_00724300(plVar1);
    FUN_01c814e0(param_1,local_68,uVar4);
  }
  FUN_00414560(&local_68,6);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

