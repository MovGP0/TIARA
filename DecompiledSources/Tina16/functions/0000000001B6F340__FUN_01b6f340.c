/* Ghidra address: 01b6f340 */
/* Ghidra symbol: FUN_01b6f340 */


void FUN_01b6f340(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c0;
  undefined1 local_b8 [88];
  undefined1 *local_60;
  undefined1 local_4c;
  char local_4b [3];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined8 local_30 [4];
  
  local_60 = auStack_f8;
  local_c0 = 0;
  puVar2 = auStack_f8;
  if (*(char *)(param_1 + 0x9cd) == '\0') {
    puVar2 = auStack_f8;
    if ((*(char *)(param_1 + 0x9cc) == '\0') &&
       (puVar2 = auStack_f8, *(char *)(param_1 + 0x9ce) == '\0')) {
      *(undefined1 *)(param_1 + 0x9cd) = 1;
      if (*(short *)(param_1 + 0x9d4) != 0) {
        *(short *)(param_1 + 0x9d4) = *(short *)(param_1 + 0x9d4) + -1;
      }
      (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0xa0))
                (*(longlong **)(param_1 + 0x9d8),local_4b);
      if (local_4b[0] != *(char *)(param_1 + 0x9ca)) {
        FUN_01b6e340(param_1,local_4b[0]);
      }
      if ((*(char *)(param_1 + 0x9ca) != 'l') && (*(short *)(param_1 + 0x9d4) == 0)) {
        cVar3 = (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x70))
                          (*(longlong **)(param_1 + 0x9d8),param_1 + 0x9e8);
        if (cVar3 != '\0') {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x9d8) + 8);
          iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
          if (iVar4 != 0) {
            plVar1 = *(longlong **)(param_1 + 0x9d8);
            uVar5 = (**(code **)(*plVar1 + 0x60))(plVar1);
            uVar6 = (**(code **)(*(longlong *)plVar1[1] + 0x30))((longlong *)plVar1[1],uVar5);
            lVar7 = FUN_004113f0(uVar6,&PTR_FUN_011057c0);
            *(undefined1 *)(param_1 + 0x9b8) = *(undefined1 *)(lVar7 + 0x2a);
          }
          if (((*(char *)(param_1 + 0x9cc) == '\0') && (*(char *)(param_1 + 0x9ce) == '\0')) &&
             (*(short *)(param_1 + 0x9d4) == 0)) {
            FUN_01b6eb40(param_1,*(undefined8 *)(param_1 + 0x9e8));
            lVar7 = FUN_010e1b10(param_1);
            if (lVar7 != 0) {
              if ((byte)(local_4b[0] - 8U) < 8) {
                bVar8 = ((int)CONCAT71((int7)((ulonglong)lVar7 >> 8),1) << (local_4b[0] - 8U & 0x1f)
                        & 0x18U) != 0;
              }
              else {
                bVar8 = false;
              }
              if (bVar8) {
                uVar6 = FUN_010e1b10(param_1);
                local_d8 = local_40;
                local_d0 = local_48;
                FUN_01138af0(uVar6,&local_4c,local_30,local_38);
                lVar7 = FUN_010e1b10(param_1);
                uVar6 = FUN_010e1b10(param_1);
                FUN_01136e50(uVar6,local_b8,local_30[0],9);
                FUN_004169a0(&local_c0,local_b8);
                FUN_0064de00(*(undefined8 *)(lVar7 + 0x928),local_c0);
                uVar6 = FUN_010e1b10(param_1);
                FUN_0113a9b0(uVar6);
              }
            }
          }
        }
      }
      puVar2 = local_60;
      if ((*(char *)(param_1 + 0x9cc) == '\0') && (*(char *)(param_1 + 0x9ce) == '\0')) {
        uVar6 = FUN_0065b870(param_1);
        local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,1000);
        FUN_00f832e0(uVar6,0x530,0,0);
        puVar2 = local_60;
      }
    }
    local_60 = puVar2;
    *(undefined1 *)(param_1 + 0x9cd) = 0;
    puVar2 = local_60;
  }
  local_60 = puVar2;
  FUN_00414480(&local_c0);
  return;
}

