/* Ghidra address: 01c12e70 */
/* Ghidra symbol: FUN_01c12e70 */


void FUN_01c12e70(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_01be5730(param_1);
  lVar4 = FUN_01c03e40(uVar3);
  FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar4 + 0xc0));
  (**(code **)(*(longlong *)param_1[0x62] + 0xa8))((longlong *)param_1[0x62],param_2);
  FUN_01be5620(param_1,param_2);
  if ((((*(char *)((longlong)param_1 + 0x366) != '\x02') &&
       (*(char *)((longlong)param_1 + 0x365) != '\0')) &&
      (*(char *)((longlong)param_1 + 0x363) == '\0')) &&
     (cVar1 = (**(code **)(*param_1 + 0x228))(param_1), cVar1 == '\0')) {
    return;
  }
  uVar3 = FUN_01be5730(param_1);
  uVar3 = FUN_01c03e40(uVar3);
  uVar2 = FUN_01bff2c0(uVar3);
  FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),uVar2);
  (**(code **)(*(longlong *)param_1[0x62] + 0xa8))((longlong *)param_1[0x62],param_2);
  return;
}

