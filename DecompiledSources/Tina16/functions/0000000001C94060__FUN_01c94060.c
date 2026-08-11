/* Ghidra address: 01c94060 */
/* Ghidra symbol: FUN_01c94060 */


char FUN_01c94060(longlong param_1,int param_2,short *param_3,char param_4)

{
  wchar_t *pwVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  char local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_20;
  
  local_40 = 0;
  local_20 = 0;
  local_41 = '\0';
  *param_3 = 0;
  if ((-1 < param_2) && (param_2 < *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10))) {
    plVar5 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),param_2);
    if ((char)plVar5[0x12f] == '\0') {
      local_41 = '\x01';
      FUN_01c8cb50(param_1,param_2);
    }
    else {
      if ((*PTR_DAT_020023b0 == '\0') && (cVar2 = FUN_01c8cf20(param_1,plVar5[2]), cVar2 != '\0')) {
        if (param_4 == '\0') {
          uVar7 = FUN_00b89270();
          FUN_00b8e520(uVar7,&local_40,0x81);
          puVar6 = (undefined8 *)FUN_01c8a3c0(param_1,plVar5[2]);
          local_38 = *puVar6;
          local_30 = 0x11;
          FUN_00442f70(&local_20,local_40,&local_38,0);
          sVar3 = FUN_0072d440(local_20,3,0xb,0);
          *param_3 = sVar3;
          if (*param_3 == 2) goto LAB_01c94333;
          if (*param_3 == 6) {
            FUN_01c8a3c0(param_1,*(undefined8 *)(param_1 + 0x2788));
            FUN_00417c40(param_1 + 0x1b80,PTR_DAT_02004010,&DAT_01d0d0b8);
            lVar8 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),param_2);
            FUN_00417c40(PTR_DAT_02004010,lVar8 + 0x40,&DAT_01d0d0b8);
            lVar8 = plVar5[2];
            puVar6 = (undefined8 *)FUN_01c8a3c0(param_1,lVar8);
            local_41 = FUN_014a1f90(0,lVar8,*puVar6,0);
            FUN_01c8a3c0(param_1,*(undefined8 *)(param_1 + 0x2788));
            FUN_00417c40(PTR_DAT_02004010,param_1 + 0x1b80,&DAT_01d0d0b8);
            if (local_41 == '\0') goto LAB_01c94333;
          }
        }
        else {
          puVar6 = (undefined8 *)FUN_01c8a3c0(param_1,plVar5[2]);
          local_38 = *puVar6;
          local_30 = 0x11;
          FUN_00442f70(&local_20,
                       L"The file %s is already open.\rDo you want to revert to the saved version?",
                       &local_38,0);
          sVar3 = FUN_0072d440(local_20,3,3,0);
          *param_3 = sVar3;
          if ((*param_3 == 2) || (*param_3 == 7)) goto LAB_01c94333;
        }
      }
      if (*plVar5 != 0) {
        pwVar1 = (wchar_t *)*plVar5;
        if (pwVar1 == L"Noname") {
          bVar9 = true;
        }
        else if (pwVar1 == (wchar_t *)0x0) {
          bVar9 = false;
        }
        else {
          iVar4 = FUN_0043e420(pwVar1,L"Noname");
          bVar9 = iVar4 == 0;
        }
        if (!bVar9) {
          FUN_01c92470(param_1,*plVar5);
        }
      }
      local_41 = '\x01';
      FUN_01c8cb50(param_1,param_2);
    }
  }
LAB_01c94333:
  FUN_00414480(&local_40);
  FUN_00414480(&local_20);
  return local_41;
}

