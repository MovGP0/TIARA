/* Ghidra address: 01c81c60 */
/* Ghidra symbol: FUN_01c81c60 */


void FUN_01c81c60(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x1298);
  FUN_00724270(uVar2,&local_30);
  FUN_00441640(local_20,local_30);
  FUN_00724270(uVar2,&local_38);
  FUN_00441920(&local_28,local_38);
  iVar1 = FUN_00724300(uVar2);
  if (iVar1 < 4) {
    if (iVar1 == 3) {
      FUN_004414c0(&local_50,local_28,L".JPG");
      FUN_00414b50(&local_28,local_50);
    }
    else if (iVar1 == 1) {
      FUN_004414c0(&local_40,local_28,L".EMF");
      FUN_00414b50(&local_28,local_40);
    }
    else if (iVar1 == 2) {
      FUN_004414c0(&local_48,local_28,L".BMP");
      FUN_00414b50(&local_28,local_48);
    }
  }
  else if (iVar1 == 4) {
    FUN_004414c0(&local_58,local_28,L".GIF");
    FUN_00414b50(&local_28,local_58);
  }
  else if (iVar1 == 5) {
    FUN_004414c0(&local_60,local_28,L".PNG");
    FUN_00414b50(&local_28,local_60);
  }
  FUN_00416ba0(&local_68,local_20[0],local_28);
  FUN_00724380(uVar2,local_68);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x1298) + 0x90))(*(longlong **)(param_1 + 0x1298));
  uVar2 = thunk_FUN_03de17fb(uVar2);
  uVar3 = FUN_00416740(local_28);
  thunk_FUN_041b2403(uVar2,0x468,0x480,uVar3);
  FUN_00414560(&local_68,6);
  FUN_00414560(&local_38,2);
  FUN_00414560(&local_28,2);
  return;
}

