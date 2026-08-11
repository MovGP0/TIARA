/* Ghidra address: 012bab50 */
/* Ghidra symbol: FUN_012bab50 */


void FUN_012bab50(longlong param_1,longlong param_2,ulonglong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong local_res18 [2];
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  wchar_t *local_a0;
  undefined1 local_98;
  undefined1 *local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  uint local_5c;
  int local_58;
  undefined1 local_54 [4];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_70 = auStack_c8;
  local_80 = 0;
  local_78 = 0;
  local_38 = (longlong *)0x0;
  local_40 = 0;
  local_50 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00441640(&local_78,*(undefined8 *)(param_2 + 8));
  local_a8 = local_res18[0];
  local_a0 = L".dat";
  FUN_00416cd0(&local_50,4,local_78,L"analstate_");
  FUN_004168e0(&local_80,local_50);
  uVar2 = FUN_00415f70(local_80);
  uVar3 = FUN_0041b800(&local_38);
  thunk_FUN_03998b7b(uVar2,0x1011,0,uVar3);
  local_30 = (longlong *)FUN_0198b200(0,&PTR_FUN_01984d18,1,0);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10);
  local_58 = 0;
  if (-1 < iVar4 + -1) {
    do {
      local_48 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xa8),local_58);
      cVar1 = FUN_0198a580(local_48);
      if (cVar1 == '\x04') {
        (**(code **)(*local_30 + 0x20))(local_30,local_48);
      }
      local_58 = local_58 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_a0 = (wchar_t *)FUN_0041b800(&local_40);
  local_a8 = local_a8 & 0xffffffff00000000;
  local_5c = (**(code **)(*local_38 + 0x18))(local_38,L"Components",0x1011,0);
  if ((local_5c & 0x80000000) == 0) {
    local_28 = (longlong *)FUN_00dd89a0(&PTR_FUN_00dd7468,1,local_40);
    local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    local_a8 = CONCAT71(local_a8._1_7_,1);
    local_a0 = (wchar_t *)CONCAT71(local_a0._1_7_,1);
    local_98 = 0;
    local_90 = local_54;
    local_20 = FUN_014a1990(local_30,local_20,0,0);
    FUN_004b8ba0(local_28,local_20,0);
    FUN_00410f20(local_20);
    FUN_00410f20(local_28);
  }
  FUN_00b95120(local_30);
  uVar2 = (**(code **)*local_30)(local_30);
  FUN_00418590(uVar2,&DAT_01984da0);
  local_a0 = (wchar_t *)FUN_0041b800(&local_40);
  local_a8 = local_a8 & 0xffffffff00000000;
  local_5c = (**(code **)(*local_38 + 0x18))(local_38,L"Globals",0x1011,0);
  if ((local_5c & 0x80000000) == 0) {
    local_28 = (longlong *)FUN_00dd89a0(&PTR_FUN_00dd7468,1,local_40);
    (**(code **)(*local_28 + 0x20))(local_28,param_1 + 0x308,4);
    (**(code **)(*local_28 + 0x20))
              (local_28,*(undefined8 *)(param_1 + 0x118),*(int *)(param_1 + 0x308) * 8);
    *(undefined4 *)(param_1 + 0x498) = 1;
    (**(code **)(*local_28 + 0x20))(local_28,param_1 + 0x498,4);
    *(undefined1 *)(param_1 + 0x326) = 1;
    (**(code **)(*local_28 + 0x20))(local_28,param_1 + 0x326,1);
    (**(code **)(*local_28 + 0x20))(local_28,param_1 + 0x88,1);
    (**(code **)(*local_28 + 0x20))(local_28,param_1 + 0x31c,4);
    if (*(int *)(param_1 + 0x31c) != 0) {
      local_58 = 0;
      do {
        (**(code **)(*local_28 + 0x20))
                  (local_28,*(undefined8 *)(param_1 + 0x1b8 + (longlong)local_58 * 8),
                   *(int *)(param_1 + 0x31c) * 8);
        local_58 = local_58 + 1;
      } while (local_58 != 8);
    }
    FUN_00410f20(local_28);
  }
  FUN_00414520(&local_80);
  FUN_00414480(&local_78);
  FUN_00414480(&local_50);
  FUN_0041b800(&local_40);
  FUN_0041b800(&local_38);
  FUN_00414480(local_res18);
  return;
}

