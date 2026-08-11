/* Ghidra address: 01cc0730 */
/* Ghidra symbol: FUN_01cc0730 */


void FUN_01cc0730(longlong param_1,undefined8 param_2,ushort param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_10;
  
  local_10 = 0;
  iVar2 = FUN_01d31a40(param_2);
  if (iVar2 != 0) goto code_r0x01cc08bc;
  FUN_01d30f00(param_2,param_1 + 8,1);
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cb38a0);
  if ((cVar1 == '\0') || (param_3 < 0x15)) {
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cb4260);
    if ((cVar1 != '\0') && (0x11 < param_3)) goto LAB_01cc07c8;
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cb46a8);
    if (cVar1 != '\0') goto LAB_01cc07c8;
    FUN_01d312f0(param_2,&local_10);
  }
  else {
LAB_01cc07c8:
    FUN_01d316c0(param_2,&local_10);
  }
  FUN_01cc09f0(param_1,local_10);
  FUN_01d30f00(param_2,param_1 + 0x18,1);
  FUN_01d30f00(param_2,param_1 + 0x1a,0x11);
  FUN_01d30f00(param_2,param_1 + 0x2b,1);
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cb38a0);
  if ((cVar1 == '\0') || (0x12 < param_3)) {
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cb4260);
    if ((cVar1 != '\0') && (param_3 < 0x11)) goto LAB_01cc0874;
    FUN_01d30f00(param_2,param_1 + 0x2c,4);
  }
  else {
LAB_01cc0874:
    FUN_01d30f00(param_2,param_1 + 0x2c,2);
  }
  FUN_01d30f00(param_2,param_1 + 0x30,2);
code_r0x01cc08bc:
  FUN_00414480(&local_10);
  return;
}

