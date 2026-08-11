/* Ghidra address: 008020a0 */
/* Ghidra symbol: FUN_008020a0 */


undefined1 FUN_008020a0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong local_28;
  undefined1 local_19;
  
  local_50 = auStack_78;
  local_19 = 0;
  DAT_01e13fbc = DAT_01e13fbc + 1;
  if (param_1[0xa2] == 0) {
    if (param_2 == param_1) {
      param_1[0x98] = 0;
    }
    else {
      param_1[0x98] = (longlong)param_2;
    }
  }
  *(longlong **)(DAT_02012670 + 200) = param_2;
  *(longlong **)(DAT_02012670 + 0xd0) = param_1;
  local_38 = *(undefined8 *)(DAT_02012670 + 0xb0);
  FUN_004aee50(local_38,param_1,0);
  FUN_004aec30(*(undefined8 *)(DAT_02012670 + 0xb0),0,param_1);
  cVar2 = FUN_004113d0(param_1,&PTR_FUN_007f0370);
  if (cVar2 == '\0') {
    *(undefined8 *)(DAT_02012670 + 0xd8) = 0;
  }
  else {
    *(longlong **)(DAT_02012670 + 0xd8) = param_1;
    local_40 = *(undefined8 *)(DAT_02012670 + 0xa8);
    FUN_004aee50(local_40,param_1,0);
    FUN_004aec30(*(undefined8 *)(DAT_02012670 + 0xa8),0,param_1);
  }
  if ((*(uint *)((longlong)param_2 + 0xa4) & 0x20) != 0) {
    return local_19;
  }
  *(uint *)((longlong)param_2 + 0xa4) = *(uint *)((longlong)param_2 + 0xa4) | 0x20;
  plVar1 = *(longlong **)(DAT_02012670 + 0xf0);
  if (plVar1 != param_1) {
    if (plVar1 != (longlong *)0x0) {
      if ((*(ushort *)((longlong)plVar1 + 0x34) & 8) == 0) {
        local_28 = FUN_0065b870(plVar1);
      }
      else {
        local_28 = 0;
      }
      *(undefined8 *)(DAT_02012670 + 0xf0) = 0;
      if ((local_28 != 0) && (cVar2 = FUN_007f96f0(local_28,0xb001), cVar2 == '\0'))
      goto LAB_008024d2;
    }
    *(longlong **)(DAT_02012670 + 0xf0) = param_1;
    uVar3 = FUN_0065b870(param_1);
    cVar2 = FUN_007f96f0(uVar3,0xb000);
    if (cVar2 == '\0') goto LAB_008024d2;
  }
  if (param_1[0x99] == 0) {
    param_1[0x99] = (longlong)param_1;
  }
  if ((longlong *)param_1[0x99] == param_2) {
code_r0x008024ac:
    *(uint *)((longlong)param_2 + 0xa4) = *(uint *)((longlong)param_2 + 0xa4) & 0xffffffdf;
    FUN_008080d0(DAT_02012670);
    return 1;
  }
  do {
    if ((param_1[0x99] == 0) || (cVar2 = FUN_00654850(param_1[0x99],param_2), cVar2 != '\0'))
    goto LAB_008023e1;
    local_28 = FUN_0065b870(param_1[0x99]);
    param_1[0x99] = *(longlong *)(param_1[0x99] + 0x78);
    cVar2 = FUN_007f96f0(local_28,0xb01b);
  } while (cVar2 != '\0');
  goto LAB_008024d2;
  while( true ) {
    do {
      local_30 = plVar1;
      plVar1 = (longlong *)local_30[0xf];
    } while ((longlong *)local_30[0xf] != (longlong *)param_1[0x99]);
    param_1[0x99] = (longlong)local_30;
    uVar3 = FUN_0065b870(local_30);
    cVar2 = FUN_007f96f0(uVar3,0xb01a);
    if (cVar2 == '\0') break;
LAB_008023e1:
    plVar1 = param_2;
    if ((longlong *)param_1[0x99] == param_2) {
      local_30 = (longlong *)param_2[0xf];
      if ((*(ushort *)((longlong)param_2 + 0x34) & 0x10) == 0) {
        for (; local_30 != (longlong *)0x0; local_30 = (longlong *)local_30[0xf]) {
          cVar2 = FUN_004113d0(local_30,&PTR_FUN_007ea5f8);
          if (cVar2 != '\0') {
            (**(code **)(*local_30 + 0x268))(local_30,param_2);
          }
        }
      }
      FUN_0064fca0(param_1,0xb007,0,param_2);
      plVar1 = (longlong *)param_1[0xaa];
      if ((plVar1 != (longlong *)0x0) && (plVar1 != param_2)) {
        FUN_0064fca0(plVar1,0xb02a,0,0);
      }
      goto code_r0x008024ac;
    }
  }
LAB_008024d2:
  FUN_00802500(0,local_50);
  return local_19;
}

