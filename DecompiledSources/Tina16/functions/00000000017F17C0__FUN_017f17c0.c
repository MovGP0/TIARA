/* Ghidra address: 017f17c0 */
/* Ghidra symbol: FUN_017f17c0 */


void FUN_017f17c0(longlong param_1,undefined1 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d0 [9];
  undefined1 local_84 [60];
  int local_48;
  undefined4 local_44;
  longlong local_40;
  longlong local_38;
  
  local_f0 = auStack_148;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_d0[0] = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_017f0910(param_1,&local_44,local_84);
  FUN_00742eb0(*(undefined8 *)(param_1 + 0x7f8),1);
  FUN_00742ed0(*(undefined8 *)(param_1 + 0x7f8),1000);
  if (*(longlong *)(param_1 + 0xb48) != 0) {
    *(undefined8 *)(param_1 + 0x890) = *(undefined8 *)(*(longlong *)(param_1 + 0xb48) + 0x628);
    lVar3 = *(longlong *)(param_1 + 0xb48);
    *(undefined8 *)(param_1 + 0x898) = *(undefined8 *)(lVar3 + 0x630);
    *(undefined8 *)(param_1 + 0x8a0) = *(undefined8 *)(lVar3 + 0x638);
    *(undefined8 *)(param_1 + 0x8a8) = *(undefined8 *)(lVar3 + 0x640);
    *(undefined8 *)(param_1 + 0x8b0) = *(undefined8 *)(lVar3 + 0x648);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0xb48) + 0x650);
    puVar6 = (undefined8 *)(param_1 + 0x8b8);
    for (lVar3 = 0x48; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0xb48));
  }
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  uVar2 = FUN_017e1bd0(&DAT_017df868,1,0,0);
  *(undefined8 *)(param_1 + 0xb48) = uVar2;
  FUN_017e8080(uVar2,*(undefined8 *)(param_1 + 0x868),*(undefined8 *)(param_1 + 0x7c8));
  FUN_01695540(*(undefined8 *)(param_1 + 0xb48),
               *(undefined8 *)(*(longlong *)(param_1 + 0x868) + 0x4e8));
  lVar3 = *(longlong *)(param_1 + 0xb48);
  *(undefined8 *)(lVar3 + 0x628) = *(undefined8 *)(param_1 + 0x890);
  *(undefined8 *)(lVar3 + 0x630) = *(undefined8 *)(param_1 + 0x898);
  *(undefined8 *)(lVar3 + 0x638) = *(undefined8 *)(param_1 + 0x8a0);
  *(undefined8 *)(lVar3 + 0x640) = *(undefined8 *)(param_1 + 0x8a8);
  *(undefined8 *)(lVar3 + 0x648) = *(undefined8 *)(param_1 + 0x8b0);
  puVar5 = (undefined8 *)(param_1 + 0x8b8);
  puVar6 = (undefined8 *)(lVar3 + 0x650);
  for (lVar4 = 0x48; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(lVar3 + 0x5f8) = *(undefined1 *)(param_1 + 0xb43);
  FUN_01695da0(lVar3,param_2);
  FUN_016942f0(*(undefined8 *)(param_1 + 0xb48));
  uVar2 = FUN_019a45d0();
  FUN_01694110(*(undefined8 *)(*(longlong *)(param_1 + 0xb48) + 0x550),1,uVar2,0);
  FUN_011162c0(*(undefined8 *)(*(longlong *)(param_1 + 0xb48) + 0x550));
  FUN_01115c40(*(undefined8 *)(param_1 + 0xb48));
  local_40 = FUN_013bdbe0(&DAT_013bda78,1,*(undefined8 *)(param_1 + 0xb48));
  local_48 = FUN_013bfdc0(local_40);
  if (local_48 != 0) {
    cVar1 = FUN_01695e60(*(undefined8 *)(param_1 + 0xb48));
    if (cVar1 == '\0') {
      cVar1 = FUN_01695ee0(*(undefined8 *)(param_1 + 0xb48));
      if (cVar1 == '\0') {
        FUN_017e2900(*(undefined8 *)(param_1 + 0xb48),0);
        goto LAB_017f1afb;
      }
    }
    FUN_017f0b20(param_1,param_1 + 0xb30);
  }
LAB_017f1afb:
  if (local_48 == 0) {
    cVar1 = FUN_01695e20(*(undefined8 *)(param_1 + 0xb48));
    if (cVar1 == '\0') {
      cVar1 = FUN_01695e40(*(undefined8 *)(param_1 + 0xb48));
      if (cVar1 == '\0') {
        FUN_01696180(*(undefined8 *)(param_1 + 0xb48));
        local_38 = FUN_010c2660(&DAT_010c2500,1,*(undefined8 *)(param_1 + 0xb48));
        local_48 = FUN_010c7360(local_38);
        if (local_48 != 0) {
          FUN_017f0b20(param_1,param_1 + 0xb30);
        }
        if (local_48 == 0) {
          cVar1 = FUN_00c53220(*(undefined8 *)(*(longlong *)(param_1 + 0xb48) + 0x4f8));
          if (cVar1 == '\0') {
            FUN_017e2760(*(undefined8 *)(param_1 + 0xb48),2);
          }
          cVar1 = FUN_017e28e0(*(undefined8 *)(param_1 + 0xb48));
          if (cVar1 == '\0') {
            FUN_01115c40(*(undefined8 *)(param_1 + 0xb48));
            FUN_00f08d50(&local_100,9);
            FUN_017f0d10(param_1,local_100);
            FUN_010c2250(&local_108,0);
            FUN_00414ad0(param_1 + 0xb30,local_108);
            FUN_017ea2d0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),
                         *(undefined8 *)(*(longlong *)(param_1 + 0xb48) + 0x550),0,6);
            cVar1 = FUN_013b2e80(*(undefined8 *)(*(longlong *)(param_1 + 0xb48) + 0x550));
            if (cVar1 != '\0') {
              (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0xa10) + 0x180))
                        (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
            }
            if (*(char *)(*(longlong *)(param_1 + 0xb48) + 0x5f8) != '\0') {
              FUN_00b95290(*(undefined8 *)(param_1 + 0xb38));
              FUN_013b2f00(*(undefined8 *)(param_1 + 0xb38),
                           *(undefined8 *)(*(longlong *)(param_1 + 0xb48) + 0x4e8));
            }
            if ((*(char *)(param_1 + 0xb40) != '\0') && (*(longlong *)PTR_DAT_02004e40 != 0)) {
              local_e0 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x1808);
              FUN_01c7ad30(*(undefined8 *)PTR_DAT_02004e40,
                           *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x13a0),
                           *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x13a8),
                           *(undefined8 *)(local_e0 + 0x2e0));
            }
            if ((*(char *)(param_1 + 0xb41) != '\0') && (*(longlong *)PTR_DAT_02004e40 != 0)) {
              local_e8 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x1808);
              FUN_01c7ad30(*(undefined8 *)PTR_DAT_02004e40,
                           *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x13d0),
                           *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x13d8),
                           *(undefined8 *)(local_e8 + 0x2e8));
              FUN_01c7ad30(*(undefined8 *)PTR_DAT_02004e40,
                           *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x13e0),
                           *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x13e8),
                           *(undefined8 *)(local_e8 + 0x2f0));
            }
            if ((*(char *)(param_1 + 0xb42) != '\0') && (*(longlong *)PTR_DAT_02004e40 != 0)) {
              FUN_01c7b040(*(undefined8 *)PTR_DAT_02004e40,param_1);
            }
            FUN_017f0d90(param_1);
            if (local_38 != 0) {
              FUN_00410f20(local_38);
            }
            if (local_40 != 0) {
              FUN_00410f20(local_40);
            }
            if (*PTR_DAT_02004808 == '\0') {
              FUN_017efd70(param_1);
            }
            else {
              FUN_017f2b70(param_1,local_44);
            }
            FUN_00742eb0(*(undefined8 *)(param_1 + 0x7f8),0);
            goto LAB_017f1f59;
          }
          FUN_017f0b20(param_1,param_1 + 0xb30);
        }
        goto LAB_017f1f4b;
      }
    }
    FUN_00f08d50(&local_f8,9);
    FUN_017f0d10(param_1,local_f8);
  }
LAB_017f1f4b:
  FUN_017f1fa0(0,local_f0);
LAB_017f1f59:
  FUN_00414560(&local_108,3);
  FUN_00414480(local_d0);
  return;
}

