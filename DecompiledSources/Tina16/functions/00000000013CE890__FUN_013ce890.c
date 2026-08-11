/* Ghidra address: 013ce890 */
/* Ghidra symbol: FUN_013ce890 */


char FUN_013ce890(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  int local_a0 [2];
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  uint local_6c;
  undefined1 local_60 [4];
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  char local_2a;
  char local_29;
  longlong *local_28;
  undefined8 local_20;
  
  local_80 = auStack_128;
  local_d8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_88 = 0;
  local_90 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  FUN_00742eb0(*(undefined8 *)(param_1 + 0x6b8),1);
  local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_28 = (longlong *)0x0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728));
  if ((cVar2 == '\0') ||
     (cVar2 = FUN_01b24380(*(undefined8 *)(*(longlong *)(param_1 + 0x848) + 0x4e8)), cVar2 != '\0'))
  {
    if (*(char *)(*(longlong *)(param_1 + 0x900) + 0x30a) == '\0') {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),&local_c0);
      FUN_00414ad0(*(longlong *)(param_1 + 0x900) + 0x310,local_c0);
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))
                        (*(longlong **)(param_1 + 0x750));
      uVar5 = FUN_013ce640(param_1,1,uVar4);
      *(undefined8 *)(*(longlong *)(param_1 + 0x900) + 0x318) = uVar5;
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))
                        (*(longlong **)(param_1 + 0x750));
      if (cVar2 != '\0') {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))
                          (*(longlong **)(param_1 + 0x750));
        uVar5 = FUN_013ce640(param_1,2,uVar4);
        *(undefined8 *)(*(longlong *)(param_1 + 0x900) + 800) = uVar5;
      }
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))
                        (*(longlong **)(param_1 + 0x750));
      if (((cVar2 == '\0') ||
          (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x748) + 0x4d8),
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_c8,0), local_c8 != 0)) &&
         ((cVar2 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))
                             (*(longlong **)(param_1 + 0x728)), cVar2 != '\0' ||
          (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 0x4d8),
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_d0,0), local_d0 != 0)))) {
        local_2a = FUN_013c55f0(*(undefined8 *)(param_1 + 0x900),0);
      }
      else {
        local_2a = '\x01';
        FUN_00416ba0(&local_d8,*(undefined8 *)PTR_DAT_02003638,L" must be filled!");
        FUN_013cd4e0(local_d8);
      }
      local_29 = local_2a;
      FUN_00742eb0(*(undefined8 *)(param_1 + 0x6b8),0);
      FUN_00410f20(local_20);
      if (local_28 != (longlong *)0x0) {
        FUN_00410f20(local_28);
      }
      goto LAB_013ceeba;
    }
    if (*(char *)(param_1 + 0x8e8) == '\0') {
      uVar3 = FUN_013d0630(param_1);
      *(undefined1 *)(param_1 + 0x8e8) = uVar3;
    }
    if (*(longlong *)(param_1 + 0x8b0) == 0) {
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,
                           L"Select a curve from Available curves and press the button below the \"Available curves\"."
                          );
      FUN_004134c0(uVar5);
    }
    lVar6 = FUN_013c5cf0(*(undefined8 *)(param_1 + 0x8f8),*(undefined8 *)(param_1 + 0x8b0),local_60)
    ;
    if (lVar6 == 0) {
      FUN_0041ddd0(&local_a8,PTR_PTR_020054a0);
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_a8);
      FUN_004134c0(uVar5);
    }
    local_6c = (uint)(*PTR_DAT_02005258 != '\0');
    local_108 = *(undefined8 *)(*(longlong *)(param_1 + 0x848) + 0x4e8);
    local_100 = *(undefined1 *)(param_1 + 0x93c);
    local_f8 = *(undefined8 *)(*(longlong *)(param_1 + 0x8e0) + 0xe8);
    local_f0 = *(undefined8 *)(param_1 + 0x8b0);
    local_e8 = 0;
    local_28 = (longlong *)FUN_013c6750(*(undefined8 *)(param_1 + 0x8f8),local_20,local_6c,0);
    (**(code **)(*local_28 + 0x38))(local_28,&local_40);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),&local_b8);
    local_108 = CONCAT71(local_108._1_7_,1);
    FUN_00450070(&local_b0,local_40,L"mycurve1",local_b8);
    FUN_00414b50(&local_40,local_b0);
    (**(code **)(*local_28 + 0x60))(local_28,local_40);
    FUN_013b9dc0(*(undefined8 *)(param_1 + 0x8e0));
    local_108 = 0;
    FUN_013bc030(*(undefined8 *)(param_1 + 0x8e0),&local_38,local_40,1);
    local_2a = FUN_013d0b30(param_1,2,local_38,&local_58);
    local_29 = local_2a;
    if (local_2a != '\0') {
      FUN_013cd4e0(local_58);
    }
  }
  else {
    FUN_0041ddd0(&local_90,PTR_PTR_020045c8);
    local_a0[0] = local_5c + 1;
    local_98 = 0;
    FUN_00442f70(&local_88,local_90,local_a0,0);
    FUN_013cd4e0(local_88);
    local_2a = '\x01';
    local_29 = '\x01';
  }
  FUN_013cef20(0,local_80);
LAB_013ceeba:
  FUN_00414560(&local_d8,3);
  FUN_00414560(&local_c0,2);
  FUN_00414560(&local_b0,2);
  FUN_00414560(&local_90,2);
  FUN_00414560(&local_58,5);
  return local_29;
}

