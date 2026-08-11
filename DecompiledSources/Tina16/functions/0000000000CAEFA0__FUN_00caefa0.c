/* Ghidra address: 00caefa0 */
/* Ghidra symbol: FUN_00caefa0 */


void FUN_00caefa0(longlong *param_1,undefined8 *param_2,ulonglong param_3,char param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  char local_res20;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_68;
  undefined1 *local_60;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  longlong local_28;
  int local_1c;
  
  local_60 = auStack_98;
  local_68 = 0;
  local_28 = 0;
  puVar1 = auStack_98;
  local_38 = param_3;
  if ((param_3 == 0xffffffffffffffff) && (puVar1 = auStack_98, param_4 == '\0')) {
    if ((char)param_1[0x1e] == '\0') {
      iVar2 = FUN_00cad710(param_1,1);
      local_38 = (ulonglong)iVar2;
      puVar1 = local_60;
    }
    else {
      local_60 = auStack_98;
      local_38 = FUN_00cad7d0(param_1,1);
      puVar1 = local_60;
    }
  }
  local_60 = puVar1;
  if ((param_2 != (undefined8 *)0x0) && (-1 < (longlong)local_38)) {
    local_40 = FUN_004b6da0(param_2);
    if (0x7fffffffffffffff - local_40 < (longlong)local_38) {
      FUN_0041ddd0(&local_68,PTR_PTR_02005b90);
      uVar3 = FUN_0086dfd0(&PTR_FUN_00ca9548,1,local_68);
      FUN_004134c0(uVar3);
    }
    FUN_00caef50(param_2,local_40 + local_38);
  }
  local_res20 = param_4;
  if ((0x7fffffffffffffff < local_38) && (param_4 == '\0')) {
    local_res20 = '\x01';
  }
  if (local_res20 == '\0') {
    (**(code **)(*param_1 + 0x90))(param_1,0,local_38);
  }
  else {
    (**(code **)(*param_1 + 0x90))(param_1,0,0);
  }
  iVar2 = *(int *)(param_1[0x21] + 0x30);
  if (0 < iVar2) {
    local_1c = iVar2;
    if (local_res20 == '\0') {
      local_1c = FUN_008764e0((longlong)iVar2,local_38);
      local_38 = local_38 - (longlong)local_1c;
    }
    if (param_2 == (undefined8 *)0x0) {
      FUN_00c8b3f0(param_1[0x21],local_1c);
    }
    else {
      FUN_00c8b2a0(param_1[0x21],param_2,local_1c,0xffffffff);
    }
  }
  FUN_00419260(&local_28,&DAT_0086e978,1,(longlong)*(int *)((longlong)param_1 + 0x134));
  do {
    if (local_res20 == '\0') {
      local_50 = local_28;
      if (local_28 != 0) {
        local_50 = *(longlong *)(local_28 + -8);
      }
      local_1c = FUN_008764e0(local_38,local_50);
      if (local_1c < 1) {
        (**(code **)(*param_1 + 0xa0))(param_1,0);
        if (param_2 != (undefined8 *)0x0) {
          lVar4 = (**(code **)*param_2)(param_2);
          lVar5 = FUN_004b6da0(param_2);
          if (lVar5 < lVar4) {
            uVar3 = FUN_004b6da0(param_2);
            FUN_004b6e40(param_2,uVar3);
          }
        }
        FUN_00419430(&local_28,&DAT_0086e978);
        FUN_00414480(&local_68);
        FUN_00419430(&local_28,&DAT_0086e978);
        return;
      }
    }
    else {
      local_48 = local_28;
      if (local_28 != 0) {
        local_48 = *(longlong *)(local_28 + -8);
      }
      local_1c = (int)local_48;
    }
    (**(code **)(*param_1 + 0x188))(param_1,&local_28,local_1c,0);
    FUN_00c8c8a0(&PTR_FUN_00c8c438,1,0);
    if (0 < local_1c) {
      if (param_2 != (undefined8 *)0x0) {
        local_78 = 0;
        FUN_0086e8c0(&LAB_0086e608,param_2,local_28);
      }
      if (local_res20 == '\0') {
        local_38 = local_38 - (longlong)local_1c;
      }
    }
  } while( true );
}

