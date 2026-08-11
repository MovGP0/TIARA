/* Ghidra address: 01847e00 */
/* Ghidra symbol: FUN_01847e00 */


undefined8 FUN_01847e00(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  int local_4c;
  undefined1 local_41;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  
  local_60 = auStack_f8;
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_41 = *(undefined1 *)(param_1 + 0x88);
  *(undefined1 *)(param_1 + 0x88) = 1;
  puVar1 = auStack_f8;
  if (*(char *)(param_1 + 0x89) != '\0') {
    FUN_0046f160(&local_78);
    (**(code **)(**(longlong **)(param_1 + 0x30) + 8))(*(longlong **)(param_1 + 0x30),&local_78);
    puVar1 = local_60;
  }
  local_60 = puVar1;
  local_38 = *(longlong *)(param_1 + 0x90);
  local_40 = 0;
  do {
    if (local_38 == 0) {
code_r0x01847f4b:
      local_30 = *(longlong *)(param_1 + 0x90);
      *(undefined1 *)(local_30 + 0x82) = 0;
      *(undefined1 *)(local_30 + 0x138) = 0;
      *(undefined1 *)(local_30 + 0xb0) = 1;
      FUN_00414ad0(local_30 + 0x160,*(undefined8 *)(param_1 + 0x20));
      (**(code **)(**(longlong **)(local_30 + 0x128) + 0x10))(*(longlong **)(local_30 + 0x128));
      *(undefined1 *)(local_30 + 0x82) = 0;
      *(undefined1 *)(local_30 + 0x138) = 0;
      *(undefined1 *)(local_30 + 0xb0) = 0;
      FUN_00414480(local_30 + 0x160);
      if (*(char *)(param_1 + 0x89) == '\0') {
        FUN_0046f180(param_2);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
                  (*(longlong **)(param_1 + 0x30),param_2);
      }
      if (local_38 != 0) {
        *(undefined8 *)(local_38 + 0x118) = local_40;
      }
      *(undefined1 *)(param_1 + 0x88) = local_41;
      if ((local_38 != 0) && (*(char *)(local_38 + 0x152) != '\0')) {
        iVar3 = FUN_0184caf0();
        local_4c = 0;
        if (-1 < iVar3 + -1) {
          do {
            uVar5 = FUN_0184cd80(*(undefined8 *)(param_1 + 0x90),local_4c);
            cVar2 = FUN_004113d0(uVar5,&DAT_01843700);
            if (cVar2 != '\0') {
              lVar6 = FUN_0184cd80(*(undefined8 *)(param_1 + 0x90),local_4c);
              iVar4 = FUN_0043e420(L"Result",*(undefined8 *)(lVar6 + 0x20));
              if (iVar4 != 0) {
                plVar7 = (longlong *)FUN_0184cd80(*(undefined8 *)(param_1 + 0x90),local_4c);
                (**(code **)(*plVar7 + 0x10))(plVar7,&local_90);
                cVar2 = FUN_0046c280(&local_90);
                if (cVar2 == '\0') {
                  lVar6 = FUN_0184cd80(*(undefined8 *)(param_1 + 0x90),local_4c);
                  cVar2 = *(char *)(lVar6 + 0x48);
                  if ((cVar2 == '\0') || ((byte)(cVar2 - 2U) < 2)) {
                    plVar7 = (longlong *)FUN_0184cd80(*(undefined8 *)(param_1 + 0x90),local_4c);
                    FUN_00468530(&local_c0,0,1);
                    (**(code **)(*plVar7 + 8))(plVar7,&local_c0);
                  }
                  else if (cVar2 == '\x04') {
                    plVar7 = (longlong *)FUN_0184cd80(*(undefined8 *)(param_1 + 0x90),local_4c);
                    FUN_00468a10(&local_a8,0);
                    (**(code **)(*plVar7 + 8))(plVar7,&local_a8);
                  }
                  else if (cVar2 == '\a') {
                    plVar7 = (longlong *)FUN_0184cd80(*(undefined8 *)(param_1 + 0x90),local_4c);
                    FUN_0046f180(&local_d8);
                    (**(code **)(*plVar7 + 8))(plVar7,&local_d8);
                  }
                }
              }
            }
            local_4c = local_4c + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      FUN_00417840(&local_d8,&DAT_004013d8,5);
      return param_2;
    }
    if (*(char *)(local_38 + 200) != '\0') {
      local_40 = *(undefined8 *)(local_38 + 0x118);
      *(undefined8 *)(local_38 + 0x118) = *(undefined8 *)(param_1 + 0x90);
      goto code_r0x01847f4b;
    }
    local_38 = *(longlong *)(local_38 + 0x110);
  } while( true );
}

