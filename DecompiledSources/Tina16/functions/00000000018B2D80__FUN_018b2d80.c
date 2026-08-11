/* Ghidra address: 018b2d80 */
/* Ghidra symbol: FUN_018b2d80 */


void FUN_018b2d80(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  code *pcVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x748);
  *(longlong *)(lVar6 + 0x400) = param_1;
  *(code **)(lVar6 + 0x3f8) = FUN_018b48d0;
  uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x778));
  uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x778));
  uVar5 = FUN_00429990(uVar4,0xfffffff0);
  FUN_00429fc0(uVar3,0xfffffff0,uVar5 | 0x2000);
  lVar6 = FUN_0188d920();
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(lVar6 + 0x10));
  lVar6 = FUN_0188d920();
  (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))
            (*(longlong **)(param_1 + 0x708),*(undefined4 *)(lVar6 + 0x18));
  FUN_018b4280(param_1,0);
  lVar6 = FUN_0188d920();
  *(undefined4 *)(param_1 + 0x7f8) = *(undefined4 *)(lVar6 + 0x18);
  FUN_018b45c0(param_1,0);
  pcVar7 = (code *)FUN_00411550(param_1,0xffc5);
  cVar2 = (*pcVar7)(param_1);
  if (cVar2 != '\0') {
    pcVar7 = (code *)FUN_00411550(param_1,0xffb1);
    (*pcVar7)(param_1,1);
  }
  return;
}

