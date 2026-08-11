/* Ghidra address: 00895f70 */
/* Ghidra symbol: FUN_00895f70 */


void FUN_00895f70(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  int local_30;
  int local_2c;
  longlong *local_28;
  longlong *local_20;
  
  local_50 = auStack_88;
  local_58 = 0;
  local_48 = 0;
  local_30 = 0x3c00;
  local_28 = (longlong *)FUN_004095c0(0x3c00);
  while (local_2c = (*(code *)PTR_FUN_01e23580)(local_28,&local_30), local_2c != 0) {
    if (local_2c == 0x32) goto LAB_0089617e;
    if (local_2c == 0x6f) {
      FUN_00409620(&local_28,local_30);
    }
    else {
      if (local_2c == 0xe8) goto LAB_0089617e;
      thunk_FUN_041931fb(local_2c);
      FUN_00874a00();
    }
  }
  if (local_30 == 0) {
LAB_0089617e:
    FUN_00896200(0,local_50);
  }
  else {
    cVar1 = FUN_00879990(5,1);
    if (cVar1 == '\0') {
      local_20 = (longlong *)0x0;
    }
    else {
      local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    }
    if (local_20 != (longlong *)0x0) {
      FUN_00895e00(param_1,local_20);
    }
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))(*(longlong **)(param_1 + 0x38));
    local_38 = local_28;
    do {
      local_40 = local_38 + 0x37;
      do {
        FUN_00416800(&local_48,local_40 + 1,0x10);
        if ((local_48 == 0) || (iVar2 = FUN_00416db0(local_48,L"0.0.0.0"), iVar2 == 0)) {
LAB_00896127:
          local_40 = (longlong *)*local_40;
        }
        else {
          if ((local_20 == (longlong *)0x0) ||
             (iVar2 = (**(code **)(*local_20 + 0xb0))(local_20,local_48), iVar2 == -1)) {
            FUN_00416800(&local_58,local_40 + 3,0x10);
            local_68 = local_58;
            FUN_0089bad0(&PTR_FUN_00899290,1,*(undefined8 *)(param_1 + 0x38),local_48);
            goto LAB_00896127;
          }
          local_40 = (longlong *)*local_40;
        }
      } while (local_40 != (longlong *)0x0);
      local_38 = (longlong *)*local_38;
    } while (local_38 != (longlong *)0x0);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x48))(*(longlong **)(param_1 + 0x38));
    FUN_00410f20(local_20);
    FUN_004095f0(local_28);
  }
  FUN_00414480(&local_58);
  FUN_00414480(&local_48);
  return;
}

