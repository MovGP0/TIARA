/* Ghidra address: 012d5130 */
/* Ghidra symbol: FUN_012d5130 */


void FUN_012d5130(longlong param_1,char param_2,char param_3,longlong param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
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
  
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  FUN_00414480(&local_30);
  if (param_2 == '\x06') {
    if (*(char *)(*(longlong *)(param_1 + 0x20) + 9) != '\0') {
      FUN_00414b50(&local_30,L".corner");
    }
    if (param_3 == '\0') {
      FUN_00416ba0(&local_48,local_30,L".refresult.tr");
    }
    else {
      FUN_00416ba0(&local_48,local_30,L".testresult.tr");
    }
  }
  else if (param_2 == '\b') {
    if (*(char *)(*(longlong *)(param_1 + 0x20) + 10) != '\0') {
      FUN_00414b50(&local_30,L".corner");
    }
    if (param_3 == '\0') {
      FUN_00416ba0(&local_48,local_30,L".refresult.ac");
    }
    else {
      FUN_00416ba0(&local_48,local_30,L".testresult.ac");
    }
  }
  else {
    if (*(char *)(*(longlong *)(param_1 + 0x20) + 0xb) != '\0') {
      FUN_00414b50(&local_30,L".corner");
    }
    if (param_3 == '\0') {
      FUN_00416ba0(&local_48,local_30,L".refresult.dc");
    }
    else {
      FUN_00416ba0(&local_48,local_30,L".testresult.dc");
    }
  }
  FUN_004414c0(local_20,*(undefined8 *)(param_1 + 0x28),local_48);
  FUN_0044f850(&local_50,*(undefined8 *)(param_1 + 0x38));
  FUN_00441d00(&local_28,local_50,local_20[0]);
  FUN_00416cd0(&local_40,3,*(undefined8 *)(param_1 + 0x40),&LAB_012d5810,local_28);
  FUN_00416cd0(&local_38,3,*(undefined8 *)(param_1 + 0x40),&LAB_012d5810,local_28);
  if (((param_3 != '\0') && (*(char *)(param_1 + 0x59) != '\0')) ||
     ((param_3 == '\0' &&
      ((((param_2 == '\x06' && (*(char *)(*(longlong *)(param_1 + 0x20) + 3) != '\0')) ||
        ((param_2 == '\b' && (*(char *)(*(longlong *)(param_1 + 0x20) + 4) != '\0')))) ||
       ((param_2 == '\x01' && (*(char *)(*(longlong *)(param_1 + 0x20) + 5) != '\0')))))))) {
    FUN_00441640(&local_58,local_38);
    cVar3 = FUN_00440b00(local_58,1);
    if (cVar3 == '\0') {
      FUN_00441640(&local_60,local_38);
      cVar3 = FUN_00440c30(local_60);
      if (cVar3 == '\0') goto LAB_012d5464;
    }
    FUN_012d1d90(param_1,local_38,param_2);
  }
LAB_012d5464:
  uVar1 = *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0xe29);
  if (((param_3 != '\0') && (*(char *)(param_1 + 0x5b) != '\0')) ||
     (((param_3 == '\0' && (*(char *)(param_1 + 0x5b) != '\0')) &&
      ((((param_2 == '\x06' && (*(char *)(*(longlong *)(param_1 + 0x20) + 3) != '\0')) ||
        ((param_2 == '\b' && (*(char *)(*(longlong *)(param_1 + 0x20) + 4) != '\0')))) ||
       ((param_2 == '\x01' && (*(char *)(*(longlong *)(param_1 + 0x20) + 5) != '\0')))))))) {
    FUN_00441640(&local_68,local_38);
    cVar3 = FUN_00440b00(local_68,1);
    if (cVar3 == '\0') {
      FUN_00441640(&local_70,local_38);
      cVar3 = FUN_00440c30(local_70);
      if (cVar3 == '\0') goto LAB_012d5599;
    }
    if (param_4 == 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xa0);
      FUN_012d2130(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb0),local_38,param_2,lVar2 + 0x492
                   ,*(undefined1 *)(lVar2 + 0xe2b),uVar1);
    }
    else {
      FUN_012db2f0(param_4,param_2,local_38,uVar1);
    }
  }
LAB_012d5599:
  if (((param_3 != '\0') && (*(char *)(param_1 + 0x5a) != '\0')) ||
     (((param_3 == '\0' && (*(char *)(param_1 + 0x5a) != '\0')) &&
      ((((param_2 == '\x06' && (*(char *)(*(longlong *)(param_1 + 0x20) + 3) != '\0')) ||
        ((param_2 == '\b' && (*(char *)(*(longlong *)(param_1 + 0x20) + 4) != '\0')))) ||
       ((param_2 == '\x01' && (*(char *)(*(longlong *)(param_1 + 0x20) + 5) != '\0')))))))) {
    FUN_00441640(&local_78,local_40);
    cVar3 = FUN_00440b00(local_78,1);
    if (cVar3 == '\0') {
      FUN_00441640(&local_80,local_40);
      cVar3 = FUN_00440c30(local_80);
      if (cVar3 == '\0') goto code_r0x012d56b8;
    }
    if (param_4 == 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xa0);
      FUN_012d1e50(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb0),local_40,param_2,lVar2 + 0x492
                   ,*(undefined1 *)(lVar2 + 0xe2b),uVar1);
    }
    else {
      FUN_012db250(param_4,param_2,local_40,uVar1);
    }
  }
code_r0x012d56b8:
  FUN_00414560(&local_80,0xd);
  return;
}

