/* Ghidra address: 01c0bf60 */
/* Ghidra symbol: FUN_01c0bf60 */


void FUN_01c0bf60(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  uVar2 = FUN_01be5730(param_1);
  lVar3 = FUN_01c03e40(uVar2);
  FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar3 + 0xc0));
  (**(code **)(*(longlong *)param_1[0x62] + 0xa8))((longlong *)param_1[0x62],param_2);
  local_38 = *param_2;
  _local_30 = CONCAT44((int)((ulonglong)param_2[1] >> 0x20),0x18);
  uVar2 = FUN_01be5730(param_1);
  lVar3 = FUN_01c03e40(uVar2);
  FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar3 + 0x80));
  (**(code **)(*(longlong *)param_1[0x62] + 0xa8))((longlong *)param_1[0x62],&local_38);
  if ((((*(char *)((longlong)param_1 + 0x366) != '\x02') &&
       (*(char *)((longlong)param_1 + 0x365) != '\0')) &&
      (*(char *)((longlong)param_1 + 0x363) == '\0')) &&
     (cVar1 = (**(code **)(*param_1 + 0x228))(param_1), cVar1 == '\0')) {
    return;
  }
  FUN_00423b50(param_2,0,1);
  FUN_00423b10(param_2,0xfffffffe,0xfffffffc);
  uVar2 = FUN_01be5730(param_1);
  lVar3 = FUN_01c03e40(uVar2);
  FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar3 + 0xb4));
  (**(code **)(*(longlong *)param_1[0x62] + 0xa8))((longlong *)param_1[0x62],param_2);
  return;
}

