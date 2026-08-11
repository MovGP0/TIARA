/* Ghidra address: 00aa84c0 */
/* Ghidra symbol: FUN_00aa84c0 */


void FUN_00aa84c0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  int local_3c;
  undefined8 local_38;
  char local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_80 = auStack_b8;
  local_88 = 0;
  local_38 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  FUN_00414480(local_20);
  local_50 = *(undefined8 *)(param_1 + 0x1a8);
  FUN_0043ea00(local_20,local_50);
  FUN_00414b50(&local_48,local_20[0]);
  FUN_00414480(local_20);
  if (((*(char *)(param_1 + 0x91) != '\0') && (local_48 != 0)) &&
     (*(longlong *)(param_1 + 0x188) == 0)) {
    if (*(char *)(param_1 + 0x1b0) == '\0') {
      local_29 = 0;
      if ((*(longlong *)(param_1 + 200) == 0) && (*(longlong *)(param_1 + 0xe8) == 0)) {
        (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x448))
                  (*(longlong **)(param_1 + 0xb8),&local_88,*(undefined8 *)(param_1 + 0x1a8),0);
        FUN_00414ad0(param_1 + 0x1a8,local_88);
      }
      else if (*(longlong *)(param_1 + 0x108) != 0) {
        (**(code **)(param_1 + 0x108))
                  (*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0xb8),
                   *(undefined8 *)(param_1 + 0x1a8),&local_38);
        FUN_00414ad0(param_1 + 0x1a8,local_38);
      }
      local_98 = &local_2b;
      uVar3 = FUN_00aa81b0(param_1,*(undefined8 *)(param_1 + 0x1a8),&local_29,&local_2a);
      *(undefined8 *)(param_1 + 0x188) = uVar3;
      if (local_2b != '\0') {
        FUN_00414480(&local_28);
        local_68 = *(undefined8 *)(param_1 + 0x1a8);
        FUN_0043ea00(&local_28,local_68);
        (**(code **)(**(longlong **)(param_1 + 0x240) + 0x80))
                  (*(longlong **)(param_1 + 0x240),local_28,param_1);
        FUN_00414480(&local_28);
      }
      *(undefined1 *)(param_1 + 0x1b0) = 1;
    }
    else {
      local_3c = (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0xb0))
                           (*(longlong **)(param_1 + 0x2a8),local_48);
      if (-1 < local_3c) {
        local_58 = *(undefined8 *)(param_1 + 0x2a8);
        local_60 = FUN_00a2a190(local_58,local_3c);
        if (local_60 != 0) {
          *(undefined4 *)(local_60 + 8) = 0;
          *(int *)(local_60 + 0xc) = *(int *)(local_60 + 0xc) + 1;
        }
        *(longlong *)(param_1 + 0x188) = local_60;
      }
    }
    plVar1 = *(longlong **)(param_1 + 0x188);
    if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 700) == '\0')) {
      cVar2 = (**(code **)(*plVar1 + 0x88))(plVar1);
      if (cVar2 != '\0') {
        local_70 = *(undefined8 *)(param_1 + 0x1c0);
        local_78 = *(undefined8 *)(param_1 + 0x188);
        FUN_004ae7e0(local_70,local_78);
        (**(code **)(**(longlong **)(param_1 + 0x188) + 0x30))(*(longlong **)(param_1 + 0x188),1);
      }
    }
  }
  FUN_00414480(&local_88);
  FUN_00414480(&local_48);
  FUN_00414480(&local_38);
  FUN_00414560(&local_28,2);
  return;
}

