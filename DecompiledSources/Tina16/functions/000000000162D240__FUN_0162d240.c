/* Ghidra address: 0162d240 */
/* Ghidra symbol: FUN_0162d240 */


void FUN_0162d240(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  int local_64;
  int local_60;
  int local_5c;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_30;
  longlong *local_28;
  longlong local_20 [2];
  
  local_70 = auStack_a8;
  local_78 = 0;
  local_80 = 0;
  local_20[0] = 0;
  local_28 = (longlong *)FUN_00410e60(&PTR_FUN_00472dd0,1);
  if (param_4 == 0) {
    local_48 = *(longlong *)(param_3 + 8);
  }
  else {
    local_48 = *(longlong *)(param_3 + 0x10);
  }
  piVar1 = *(int **)(local_48 + 8);
  if (*piVar1 == 10) {
    FUN_0162d170(piVar1,local_28);
  }
  else {
    FUN_004ae7e0(local_28,piVar1);
  }
  FUN_00419260(local_20,&DAT_0162d1f8,1,(longlong)(int)local_28[2]);
  iVar4 = (int)local_28[2];
  local_5c = 0;
  local_64 = iVar4;
  if (-1 < iVar4 + -1) {
    do {
      uVar3 = FUN_004aeac0(local_28,local_5c);
      *(undefined8 *)(local_20[0] + (longlong)local_5c * 8) = uVar3;
      local_5c = local_5c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_30 = FUN_01641960(*(undefined8 *)(param_2 + 0x20),local_48);
  cVar2 = FUN_01647a50(local_30,local_64);
  if (cVar2 == '\0') {
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_80,PTR_PTR_02003548);
    FUN_00b8e650(uVar3,&local_78,L"HDLStrings.Msg_WrongNumberOfParam",local_80);
    FUN_01613110(local_78);
  }
  uVar3 = FUN_01647d60(local_30,*(undefined8 *)(local_30 + 0x18));
  local_40 = FUN_01626e10(uVar3);
  (**(code **)(*local_28 + 0x10))(local_28);
  FUN_0161db10(local_40,local_28);
  iVar4 = (int)local_28[2];
  local_5c = 0;
  if (-1 < iVar4 + -1) {
    do {
      local_50 = FUN_004aeac0(local_28,local_5c);
      cVar2 = FUN_0162d0c0(*(undefined8 *)(local_50 + 8),local_30,&local_60);
      if (cVar2 != '\0') {
        *(undefined8 *)(local_50 + 8) = *(undefined8 *)(local_20[0] + (longlong)local_60 * 8);
      }
      cVar2 = FUN_0162d0c0(*(undefined8 *)(local_50 + 0x10),local_30,&local_60);
      if (cVar2 != '\0') {
        *(undefined8 *)(local_50 + 0x10) = *(undefined8 *)(local_20[0] + (longlong)local_60 * 8);
      }
      local_5c = local_5c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (param_4 == 0) {
    *(undefined8 *)(param_3 + 8) = local_40;
  }
  else {
    *(undefined8 *)(param_3 + 0x10) = local_40;
  }
  FUN_0163dd40(param_2,param_3);
  FUN_00419430(local_20,&DAT_0162d1f8);
  FUN_00410f20(local_28);
  FUN_00414560(&local_80,2);
  FUN_00419430(local_20,&DAT_0162d1f8);
  return;
}

