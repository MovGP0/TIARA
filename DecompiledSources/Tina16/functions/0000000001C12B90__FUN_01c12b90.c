/* Ghidra address: 01c12b90 */
/* Ghidra symbol: FUN_01c12b90 */


void FUN_01c12b90(longlong *param_1,ulonglong *param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  int local_50 [2];
  undefined8 local_48;
  undefined8 local_40;
  
  local_48 = *param_2;
  local_40 = param_2[1];
  FUN_01bd3670(param_1,&local_48,(ulonglong)param_3);
  if ((((*(char *)((longlong)param_1 + 0x366) != '\x02') &&
       (*(char *)((longlong)param_1 + 0x365) != '\0')) &&
      (*(char *)((longlong)param_1 + 0x363) == '\0')) &&
     (cVar1 = (**(code **)(*param_1 + 0x228))(param_1), cVar1 == '\0')) {
    return;
  }
  uVar2 = FUN_01c07120(param_1);
  lVar3 = FUN_01c03e40(uVar2);
  local_50[0] = *(int *)(lVar3 + 0xc4);
  uVar2 = FUN_01c07120(param_1);
  lVar3 = FUN_01c03e40(uVar2);
  local_50[1] = *(undefined4 *)(lVar3 + 0xcc);
  FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),local_50[(ulonglong)param_3 & 0xff]);
  bVar5 = (char)param_3 == '\0';
  uVar4 = (uint)bVar5;
  (**(code **)(*(longlong *)param_1[0x62] + 200))
            ((longlong *)param_1[0x62],(int)local_40 - uVar4,local_48._4_4_);
  (**(code **)(*(longlong *)param_1[0x62] + 0xc0))
            ((longlong *)param_1[0x62],local_48 & 0xffffffff,local_48._4_4_);
  (**(code **)(*(longlong *)param_1[0x62] + 0xc0))
            ((longlong *)param_1[0x62],local_48 & 0xffffffff,local_40._4_4_ - uVar4);
  FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),local_50[bVar5]);
  (**(code **)(*(longlong *)param_1[0x62] + 200))
            ((longlong *)param_1[0x62],(int)local_40 + -1,local_48._4_4_ - (param_3 & 0xff));
  (**(code **)(*(longlong *)param_1[0x62] + 0xc0))
            ((longlong *)param_1[0x62],(int)local_40 + -1,local_40._4_4_ + -1);
  (**(code **)(*(longlong *)param_1[0x62] + 0xc0))
            ((longlong *)param_1[0x62],(int)local_48 + (param_3 & 0xff),local_40._4_4_ + -1);
  return;
}

