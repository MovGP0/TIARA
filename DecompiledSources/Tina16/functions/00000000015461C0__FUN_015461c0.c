/* Ghidra address: 015461c0 */
/* Ghidra symbol: FUN_015461c0 */


void FUN_015461c0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_78 [2];
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [3];
  
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  if (DAT_01f6177c != '\0') {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x700),1);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x700),local_20);
    FUN_00409da0(&local_48,0);
    FUN_00441640(local_40,local_48);
    FUN_00416ba0(&local_28,local_40[0],L"license.ini");
    FUN_00409da0(&local_58,0);
    FUN_00441640(&local_50,local_58);
    FUN_00416ba0(&local_30,local_50,L"setup.ini");
    cVar1 = FUN_00440a20(local_28,1);
    if (cVar1 == '\0') {
      cVar1 = FUN_00440a20(local_30,1);
      if (cVar1 == '\0') {
        uVar3 = FUN_00448ed0();
        FUN_01b1f360(&local_60);
        uVar4 = FUN_00448650(local_60,PTR_DAT_02004830);
        local_78[0] = FUN_005bbb10(uVar3,uVar4);
      }
      else {
        uVar3 = FUN_00448ed0();
        uVar2 = FUN_00440970(local_30);
        uVar4 = FUN_00442290(uVar2);
        local_78[0] = FUN_005bbb10(uVar3,uVar4);
      }
    }
    else {
      uVar3 = FUN_00448ed0();
      uVar2 = FUN_00440970(local_28);
      uVar4 = FUN_00442290(uVar2);
      local_78[0] = FUN_005bbb10(uVar3,uVar4);
    }
    local_78[0] = local_78[0] - *(int *)(param_1 + 0x70c);
    if (local_78[0] < 1) {
      local_78[0] = 0;
    }
    local_70 = 0;
    FUN_00442f70(&local_68,local_20[0],local_78,0);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x700),local_68);
  }
  FUN_00414560(&local_68,6);
  FUN_00414560(&local_30,3);
  return;
}

