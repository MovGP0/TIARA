/* Ghidra address: 00f8cb00 */
/* Ghidra symbol: FUN_00f8cb00 */


void FUN_00f8cb00(longlong param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_32;
  byte local_31;
  undefined8 local_30 [4];
  
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_30[0] = 0;
  _if_compile_design(*(undefined8 *)(param_1 + 0x60),&local_32);
  uVar2 = FUN_00f8b5a0(param_1,0);
  *(undefined4 *)(param_1 + 0x348c) = uVar2;
  cVar1 = FUN_00f8bd60(param_1);
  if (cVar1 == '\0') goto LAB_00f8cfd8;
  cVar1 = FUN_00f8bd10(param_1);
  if (cVar1 == '\0') goto LAB_00f8cfd8;
  if (*(char *)(param_1 + 0x3450) != '\0') {
    cVar1 = FUN_0160ead0(*(undefined4 *)(param_1 + 0x3464));
    if (cVar1 == '\0') {
      _SetPCChanged(*(undefined8 *)(param_1 + 0x60),0);
      bVar5 = 0;
      while( true ) {
        cVar1 = _IsPCChanged(*(undefined8 *)(param_1 + 0x60));
        if (cVar1 != '\0') break;
        _step_simulation_new(*(undefined8 *)(param_1 + 0x60),&local_31,1,0xffffffffffffffff,1);
        bVar5 = bVar5 | local_31;
      }
      FUN_00f85520(*(undefined8 *)PTR_DAT_020019c8,bVar5);
    }
    else {
      _SetTimeChanged(*(undefined8 *)(param_1 + 0x60),0);
      bVar5 = 0;
      while( true ) {
        cVar1 = _IsTimeChanged(*(undefined8 *)(param_1 + 0x60));
        if (cVar1 != '\0') break;
        _step_simulation_new(*(undefined8 *)(param_1 + 0x60),&local_31,1,0xffffffffffffffff,1);
        bVar5 = bVar5 | local_31;
      }
      FUN_00f85520(*(undefined8 *)PTR_DAT_020019c8,bVar5);
    }
  }
  uVar4 = _get_mcu_status(*(undefined8 *)(param_1 + 0x60));
  *(undefined1 *)(param_1 + 0x3450) = 1;
  *(undefined1 *)(param_1 + 0x3451) = 0;
  *(undefined8 *)(param_1 + 0x3468) = uVar4;
  if (*(int *)(param_1 + 0x3464) == 1) {
    cVar1 = __pic_vdd_is_on(*(undefined8 *)(param_1 + 0x60));
    if (cVar1 != '\0') goto LAB_00f8ce3b;
    uVar6 = FUN_00f81cf0(*(undefined8 *)(*(longlong *)(param_1 + 0x3468) + 0x1370));
    uVar4 = FUN_00b89270();
    FUN_00b8e520(uVar4,&local_48,0x898);
    FUN_00b8fd60(&local_50,uVar6,*PTR_DAT_02005310,0,1);
    FUN_00416cd0(&local_40,3,local_48,&LAB_00f8d04c,local_50);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x30),local_40);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    *(undefined1 *)(param_1 + 0x33f8) = 1;
    *(undefined4 *)(param_1 + 0x34a0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x348c) = 0xffffffff;
    FUN_0040d200(param_1 + 0x68,0x1378,0);
    FUN_0040d200(param_1 + 0x7d,0x1000,0x55);
    FUN_0040d200(param_1 + 0x107d,0x35a,0x55);
    FUN_00f8a700(param_1,0);
    FUN_00f8c0d0(param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x34c0),
                 *(undefined8 *)(param_1 + 0x34c8),*(undefined8 *)(param_1 + 0x34d0),
                 *(undefined4 *)(param_1 + 0x34a0));
    uVar4 = FUN_00b89270();
    FUN_00b8e520(uVar4,&local_58,0x899);
    FUN_016fe230(local_58);
  }
  else {
LAB_00f8ce3b:
    uVar2 = FUN_00f90b40(param_1,*(undefined8 *)(param_1 + 0x3468));
    *(undefined4 *)(param_1 + 0x3404) = uVar2;
    iVar3 = FUN_00f8b5a0(param_1,uVar2);
    if (iVar3 == -1) {
      *(undefined4 *)(param_1 + 0x3400) = *(undefined4 *)(param_1 + 0x348c);
    }
    else {
      *(int *)(param_1 + 0x34a0) = iVar3;
      *(int *)(param_1 + 0x3400) = iVar3;
    }
    uVar6 = FUN_00f81cf0(*(undefined8 *)(*(longlong *)(param_1 + 0x3468) + 0x1370));
    uVar4 = FUN_00b89270();
    FUN_00b8e520(uVar4,&local_68,0x898);
    FUN_00b8fd60(&local_70,uVar6,*PTR_DAT_02005310,0,1);
    FUN_00416cd0(&local_60,3,local_68,&LAB_00f8d04c,local_70);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x30),local_60);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    if (*(char *)(param_1 + 0x3472) != '\0') {
      FUN_00f8a700(param_1,1);
      FUN_00f8c0d0(param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x34c0),
                   *(undefined8 *)(param_1 + 0x34c8),*(undefined8 *)(param_1 + 0x34d0),
                   *(undefined4 *)(param_1 + 0x34a0));
      FUN_010a6f60(1,*(undefined4 *)(param_1 + 0x3400),*(undefined8 *)(param_1 + 8),
                   *(undefined4 *)(param_1 + 0x3498));
    }
    if (param_2 == 2) {
      *(undefined1 *)(param_1 + 0x33f8) = 1;
    }
  }
  FUN_015fa560();
  uVar4 = FUN_0065b870(*(undefined8 *)PTR_DAT_020019c8);
  thunk_FUN_041b2403(uVar4,0x123d,0,0);
LAB_00f8cfd8:
  FUN_00414560(&local_70,7);
  FUN_00414480(local_30);
  return;
}

