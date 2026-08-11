/* Ghidra address: 00f8daa0 */
/* Ghidra symbol: FUN_00f8daa0 */


void FUN_00f8daa0(longlong param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined8 local_40;
  undefined1 local_31;
  longlong local_30;
  byte local_21;
  undefined8 local_20;
  
  local_40 = 0;
  local_20 = 0;
  if (param_2 != 2) {
    *(undefined1 *)(param_1 + 0x33f8) = 0;
    *(undefined4 *)(param_1 + 0x34f8) = 0;
    *(undefined4 *)(param_1 + 0x34fc) = 0;
  }
  uVar2 = FUN_00f8b5a0(param_1,0);
  *(undefined4 *)(param_1 + 0x348c) = uVar2;
  _if_compile_design(*(undefined8 *)(param_1 + 0x60),&local_31);
  cVar1 = FUN_00f8bd60(param_1);
  if (cVar1 == '\0') goto LAB_00f8dea2;
  cVar1 = FUN_00f8bd10(param_1);
  if (cVar1 == '\0') goto LAB_00f8dea2;
  *(undefined1 *)(param_1 + 0x3450) = 1;
  *(undefined1 *)(param_1 + 0x3451) = 0;
  while ((((*(char *)(*(longlong *)PTR_DAT_020019c8 + 0xd40) != '\x01' &&
           (*(char *)(param_1 + 0x33f8) == '\0')) && (*(int *)(param_1 + 0x34f8) == 0)) &&
         ((*(int *)(param_1 + 0x34fc) == 0 && (*(char *)(param_1 + 0x3475) == '\0'))))) {
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    if (*(char *)(param_1 + 0x3475) != '\0') goto LAB_00f8dea2;
    FUN_00f8e690(param_1);
    FUN_00f8e6b0(param_1);
    FUN_015fa560();
    uVar2 = _get_mcu_IP(*(undefined8 *)(param_1 + 0x60));
    if (*(char *)(param_1 + 0x3474) != '\0') {
      cVar1 = FUN_00f8e800(param_1,uVar2);
      if (cVar1 != '\0') {
        iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x34e0),*(undefined8 *)(param_1 + 0x34e8));
        if (iVar3 != 0) {
          *(undefined4 *)(param_1 + 0x34fc) = 1;
          goto LAB_00f8dea2;
        }
      }
    }
    bVar6 = 0;
    do {
      iVar3 = _step_simulation_new(*(undefined8 *)(param_1 + 0x60),&local_21,1,0xffffffffffffffff,1)
      ;
      bVar6 = bVar6 | local_21;
      uVar5 = _get_mcu_select_label(*(undefined8 *)(param_1 + 0x60));
      FUN_00442b00(&local_40,uVar5);
      FUN_00414ad0(param_1 + 0x3430,local_40);
      iVar4 = FUN_00416db0(*(undefined8 *)(param_1 + 0x3430),*(undefined8 *)(param_1 + 0x3440));
      if (iVar4 == 0) break;
    } while (iVar3 != 0);
    if (iVar3 == 0) {
      FUN_016fd940(L"TINA: Internal error in the HDL engine");
      goto LAB_00f8dea2;
    }
    uVar5 = _get_mcu_status(*(undefined8 *)(param_1 + 0x60));
    FUN_00f85520(*(undefined8 *)PTR_DAT_020019c8,bVar6);
    *(undefined1 *)(param_1 + 0x3451) = 1;
    *(undefined8 *)(param_1 + 0x3468) = uVar5;
    FUN_00f8d6e0();
    if (*(char *)(param_1 + 0x3472) != '\0') {
      FUN_00f8d840(param_1);
    }
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    if (*(char *)(param_1 + 0x3475) != '\0') goto LAB_00f8dea2;
    cVar1 = FUN_00f60310(*(undefined8 *)PTR_DAT_02002ba8,*(int *)(param_1 + 0x34a0) + 1,&local_30);
    if ((cVar1 != '\0') && (*(char *)(local_30 + 0xc) != '\0')) {
      *(undefined1 *)(param_1 + 0x33f8) = 1;
      FUN_00f8d300(param_1,0);
      _MCU_SetRunUntil(*(undefined8 *)(param_1 + 0x60),0,0);
      FUN_00f90ab0(param_1,0,0);
    }
    if ((*(char *)(param_1 + 0x33f8) == '\0') && (*(char *)(param_1 + 0x3475) == '\0')) {
      uVar5 = FUN_0065b870(*(undefined8 *)PTR_DAT_020019c8);
      thunk_FUN_041b2403(uVar5,0x123d,0);
    }
    cVar1 = FUN_00f8df50(param_1);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x33f8) = 1;
      FUN_00f8d300(param_1,0);
      _MCU_SetRunUntil(*(undefined8 *)(param_1 + 0x60),0,0);
      FUN_00f90ab0(param_1,0,0);
    }
  }
  if (*(char *)(param_1 + 0x3475) != '\0') goto LAB_00f8dea2;
  if (*(char *)(param_1 + 0x3474) != '\0') {
    uVar2 = _get_mcu_IP(*(undefined8 *)(param_1 + 0x60));
    FUN_00f8e800(param_1,uVar2);
  }
  if (*(char *)(param_1 + 0x3475) == '\0') {
    uVar5 = FUN_0065b870(*(undefined8 *)PTR_DAT_020019c8);
    thunk_FUN_041b2403(uVar5,0x123d,0,0);
  }
  if (*(int *)(param_1 + 0x3464) == 1) {
    cVar1 = __pic_vdd_is_on(*(undefined8 *)(param_1 + 0x60));
    if (cVar1 == '\0') goto LAB_00f8de79;
LAB_00f8de86:
    FUN_00f8d6e0(param_1);
    FUN_00f8d8a0(param_1);
  }
  else {
LAB_00f8de79:
    if (*(int *)(param_1 + 0x3464) != 1) goto LAB_00f8de86;
  }
  FUN_00f8df80(param_1);
LAB_00f8dea2:
  FUN_00414480(&local_40);
  FUN_00414480(&local_20);
  return;
}

