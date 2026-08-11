/* Ghidra address: 01cc4120 */
/* Ghidra symbol: FUN_01cc4120 */


void FUN_01cc4120(longlong param_1,undefined8 param_2,int param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_20;
  
  local_50 = auStack_c8;
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_20 = *(longlong *)(param_1 + 8);
  if ((*(char *)(local_20 + 0x4464) == '\0') || (0x4000 < param_3)) {
    puVar1 = auStack_c8;
    if (*(char *)(local_20 + 0x4464) != '\0') {
      FUN_01cc28c0(local_20);
      *(undefined1 *)(local_20 + 0x4464) = 0;
      puVar1 = local_50;
    }
    local_50 = puVar1;
    lVar2 = FUN_004b6da0(*(undefined8 *)(local_20 + 0x438));
    if (lVar2 + param_3 < 0x7d000000) {
      (**(code **)(**(longlong **)(local_20 + 0x438) + 0x20))
                (*(longlong **)(local_20 + 0x438),param_2,param_3);
    }
    else {
      FUN_0041ddd0(&local_88,&PTR_PTR_01cbf640);
      local_78[0] = 2000;
      local_70 = 0;
      FUN_00442f70(&local_80,local_88,local_78,0);
      FUN_01b05000(local_80,0);
    }
  }
  else {
    local_50 = auStack_c8;
    if (0x4000 < *(int *)(local_20 + 0x4460) + param_3) {
      local_50 = auStack_c8;
      lVar2 = FUN_004b6da0(*(undefined8 *)(local_20 + 0x438));
      if (lVar2 + *(int *)(local_20 + 0x4460) < 0x7d000000) {
        (**(code **)(**(longlong **)(local_20 + 0x438) + 0x20))
                  (*(longlong **)(local_20 + 0x438),local_20 + 0x460,*(int *)(local_20 + 0x4460));
      }
      else {
        uVar3 = FUN_00b89270();
        FUN_0041ddd0(&local_68,&PTR_PTR_01cbf640);
        FUN_00b8e650(uVar3,&local_60,L"CurveObj.sFileSizeError",local_68);
        local_78[0] = 2000;
        local_70 = 0;
        FUN_00442f70(&local_58,local_60,local_78,0);
        FUN_01b05000(local_58,0);
      }
      *(undefined4 *)(local_20 + 0x4460) = 0;
    }
    FUN_00409a70(param_2,local_20 + 0x460 + (longlong)*(int *)(local_20 + 0x4460),(longlong)param_3)
    ;
    *(int *)(local_20 + 0x4460) = *(int *)(local_20 + 0x4460) + param_3;
  }
  FUN_00414560(&local_a0,5);
  FUN_00414560(&local_68,3);
  return;
}

