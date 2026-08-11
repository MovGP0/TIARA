/* Ghidra address: 015502b0 */
/* Ghidra symbol: FUN_015502b0 */


undefined8 FUN_015502b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x40) + 0x528);
  if (lVar1 == 0) {
LAB_0155035f:
    uVar5 = *(uint *)(param_3 + 8);
  }
  else {
    uVar4 = FUN_01d03160(lVar1);
    cVar3 = FUN_01d3d5c0(uVar4);
    if (cVar3 == '\0') goto LAB_0155035f;
    uVar5 = FUN_01d03160(lVar1);
    uVar5 = uVar5 & 0xffff;
  }
  FUN_01d3f0e0(&local_20,uVar5,*(undefined8 *)(param_3 + 0x40));
  (**(code **)(**(longlong **)(param_3 + 0x40) + 0x288))(*(longlong **)(param_3 + 0x40),&local_40);
  FUN_00414480(&local_30);
  FUN_00414480(&local_38);
  cVar3 = FUN_01d3d590(uVar5);
  if (cVar3 == '\0') {
LAB_015503c5:
    bVar2 = false;
  }
  else {
    cVar3 = FUN_015f2550(uVar5);
    if (cVar3 == '\0') goto LAB_015503c5;
    bVar2 = true;
  }
  if (bVar2) {
    FUN_00414b50(&local_30,L"latch_");
    if ((uVar5 == 0x3f6) && (*(int *)(param_3 + 0xf0) == 3)) {
      FUN_00414b50(&local_38,L"_ms_falling");
    }
    else if ((*(int *)(param_3 + 0xf0) == 2) || (*(int *)(param_3 + 0xf0) == 3)) {
      FUN_00414b50(&local_38,&DAT_015507d0);
    }
    else {
      FUN_00414480(&local_38);
    }
  }
  cVar3 = FUN_01d3d590(uVar5);
  if (((cVar3 != '\0') && (uVar5 != 0x3f7)) && (*(char *)(param_1 + 0x955) != '\0')) {
    FUN_00416ad0(&local_38,L"_synth");
  }
  if (uVar5 == 0x8f) {
LAB_01550487:
    FUN_0043e1a0(&local_28,local_20);
  }
  else {
    cVar3 = FUN_01d40240(uVar5);
    if (cVar3 != '\0') goto LAB_01550487;
    if (((uVar5 == 0x3ef) || (uVar5 == 0x44f)) || (uVar5 == 0x3f7)) {
LAB_0155051c:
      FUN_00416ba0(local_50,L"comp_",local_20);
      FUN_0043e1a0(&local_28,local_50[0]);
    }
    else {
      cVar3 = FUN_01d40050(uVar5);
      if (((cVar3 != '\0') || (uVar5 == 0x889)) ||
         ((uVar5 == 0x34 ||
          ((((uVar5 == 0x3b || (uVar5 == 0x462)) || (uVar5 == 0x2903)) ||
           ((uVar5 == 0x464 || (uVar5 == 0x43)))))))) goto LAB_0155051c;
      cVar3 = FUN_01d3f2d0(uVar5);
      if (((cVar3 != '\0') || ((uVar5 == 0x5dd || (uVar5 == 0x38a4)))) ||
         ((uVar5 == 0x38a5 || (uVar5 == 0x38a6)))) goto LAB_0155051c;
      if (uVar5 == 0x889) {
        FUN_00416ba0(&local_58,L"comp_",local_20);
        FUN_0043e1a0(&local_28,local_58);
      }
      else {
        FUN_00416cd0(&local_60,4,L"comp_",local_30,local_20,local_38);
        FUN_0043e1a0(&local_28,local_60);
      }
    }
  }
  if (*(char *)(param_1 + 0x94e) == '\0') goto LAB_0155070c;
  cVar3 = FUN_01d3d590(uVar5);
  if ((cVar3 == '\0') || (*(char *)(param_1 + 0x955) == '\0')) goto LAB_0155070c;
  FUN_00414480(&local_30);
  FUN_00414480(&local_38);
  cVar3 = FUN_01d3d590(uVar5);
  if (cVar3 == '\0') {
LAB_01550621:
    bVar2 = false;
  }
  else {
    cVar3 = FUN_015f2550(uVar5);
    if ((cVar3 == '\0') && (uVar5 != 0x3f7)) goto LAB_01550621;
    bVar2 = true;
  }
  if (bVar2) {
    FUN_01aa20b0(&local_38,*(char *)(param_3 + 0xf0) + '\x01');
    FUN_00414b50(&local_30,L"latch_");
  }
  FUN_00416ad0(&local_38,L"_synth");
  FUN_00416cd0(&local_68,5,L"comp_",local_30,local_20,&LAB_01550818,local_38);
  FUN_0043e1a0(&local_28,local_68);
  FUN_00416cd0(&local_70,5,L"comp_",local_30,local_20,&LAB_01550818,local_38);
  FUN_0043e1a0(&local_28,local_70);
LAB_0155070c:
  FUN_00414ad0(param_2,local_28);
  FUN_00414560(&local_70,5);
  FUN_00414560(&local_40,5);
  return param_2;
}

