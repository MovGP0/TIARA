/* Ghidra address: 015eedf0 */
/* Ghidra symbol: FUN_015eedf0 */


undefined1 FUN_015eedf0(undefined8 param_1,char param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_328 [32];
  ulonglong local_308;
  ulonglong local_300;
  int *local_2f8;
  undefined1 local_2f0;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined1 *local_2c0;
  char local_2a9;
  int local_2a8;
  int local_2a4;
  undefined8 local_2a0;
  ulonglong uStack_298;
  ulonglong local_290;
  undefined8 uStack_288;
  longlong *local_280;
  undefined8 local_278;
  undefined1 local_26a [522];
  longlong local_60;
  longlong local_58;
  undefined8 *local_50;
  undefined1 local_31;
  
  local_2c0 = auStack_328;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2c8 = 0;
  local_278 = 0;
  local_31 = 0;
  local_50 = (undefined8 *)0x0;
  local_58 = 0;
  local_60 = 0;
  uStack_288 = *(undefined8 *)(PTR_DAT_020034d0 + 0x18);
  local_2a0 = (ulonglong)CONCAT16(1,CONCAT15(1,CONCAT14(param_2,0x1010001)));
  uStack_298 = *(ulonglong *)(PTR_DAT_020034d0 + 8) & 0xffffffff;
  local_290._3_5_ = (undefined5)((ulonglong)*(undefined8 *)(PTR_DAT_020034d0 + 0x10) >> 0x18);
  local_290 = CONCAT53(local_290._3_5_,
                       CONCAT12(PTR_DAT_020030c0[2],(short)*(undefined8 *)(PTR_DAT_020034d0 + 0x10))
                      ) & 0xffffffffffffff00;
  cVar1 = FUN_019a02e0(param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_2c8,0x51a);
    FUN_015fcf20(local_2c8,0,0,0);
  }
  local_308 = local_308 & 0xffffffffffffff00;
  local_300 = local_300 & 0xffffffffffff0000;
  local_2f8 = &local_2a4;
  local_2a9 = FUN_014b7d50(0xd,param_1,0,0);
  if (local_2a9 == '\0') {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_2d0,local_2a4 + 0x86);
    FUN_015fcf20(local_2d0,0,0,0);
  }
  FUN_015fcb30(&local_278,PTR_DAT_02004770);
  uVar2 = FUN_00442620(local_26a,local_278);
  FUN_015fcc20(uVar2,&local_60,0,0);
  local_58 = FUN_0154bb80(&DAT_01546f18,1);
  FUN_01ca2f40(*(undefined8 *)PTR_DAT_02004e40,&local_2d8,param_1);
  FUN_01569030(local_58,local_2d8);
  local_308 = 0;
  local_2f8 = (int *)((ulonglong)local_2f8 & 0xffffffffffffff00);
  local_2f0 = 0;
  local_300 = param_1;
  FUN_0155bbe0(local_58,local_278,local_60,&local_2a0);
  if (param_2 != '\0') {
    FUN_015eed30(local_58);
  }
  local_50 = (undefined8 *)FUN_015ec7f0(local_58,local_278,local_60);
  if (param_4 != (longlong *)0x0) {
    iVar3 = *(int *)(local_50 + 2);
    local_2a8 = 0;
    if (-1 < iVar3 + -1) {
      do {
        local_280 = (longlong *)FUN_00b94e60(local_50,local_2a8);
        (**(code **)(*local_280 + 0x288))(local_280,&local_2e0);
        (**(code **)(*param_4 + 200))(param_4,0,local_2e0);
        local_2a8 = local_2a8 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 0x10))(param_3,*(undefined8 *)(local_58 + 0x8f8));
  }
  if (local_50 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*local_50)(local_50);
    FUN_00418590(uVar2,&DAT_01984da0);
  }
  if (local_58 != 0) {
    FUN_00410f20(local_58);
  }
  if (local_60 != 0) {
    uVar2 = FUN_00442620(local_26a,local_278);
    FUN_015fcd60(local_60,uVar2,0);
    local_60 = 0;
  }
  FUN_015fcbd0(PTR_DAT_02004770,0);
  FUN_00414560(&local_2e0,4);
  FUN_00414480(&local_278);
  return local_31;
}

