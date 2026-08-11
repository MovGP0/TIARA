/* Ghidra address: 01c12f40 */
/* Ghidra symbol: FUN_01c12f40 */


void FUN_01c12f40(longlong *param_1,ulonglong *param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = *param_2;
  local_30 = param_2[1];
  FUN_00423b50(&local_38,0,1);
  FUN_00423b10(&local_38,0xfffffffe,0xfffffffc);
  FUN_01be56d0(param_1,&local_38,param_3);
  if ((((*(char *)((longlong)param_1 + 0x366) != '\x02') &&
       (*(char *)((longlong)param_1 + 0x365) != '\0')) &&
      (*(char *)((longlong)param_1 + 0x363) == '\0')) &&
     (cVar1 = (**(code **)(*param_1 + 0x228))(param_1), cVar1 == '\0')) {
    return;
  }
  uVar2 = FUN_01be5730(param_1);
  FUN_01c03e40(uVar2);
  uVar2 = FUN_01be5730(param_1);
  FUN_01c03e40(uVar2);
  uVar2 = FUN_01c07120(param_1);
  FUN_01c03e40(uVar2);
  uVar2 = FUN_01c07120(param_1);
  FUN_01c03e40(uVar2);
  uVar2 = FUN_01be5730(param_1);
  lVar3 = FUN_01c03e40(uVar2);
  FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),*(undefined4 *)(lVar3 + 0xc4));
  uVar4 = (uint)((char)param_3 == '\0');
  (**(code **)(*(longlong *)param_1[0x62] + 200))
            ((longlong *)param_1[0x62],(int)local_30 - uVar4,local_38._4_4_);
  (**(code **)(*(longlong *)param_1[0x62] + 0xc0))
            ((longlong *)param_1[0x62],local_38 & 0xffffffff,local_38._4_4_);
  (**(code **)(*(longlong *)param_1[0x62] + 0xc0))
            ((longlong *)param_1[0x62],local_38 & 0xffffffff,local_30._4_4_ - uVar4);
  uVar2 = FUN_01be5730(param_1);
  lVar3 = FUN_01c03e40(uVar2);
  FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),*(undefined4 *)(lVar3 + 0xcc));
  (**(code **)(*(longlong *)param_1[0x62] + 200))
            ((longlong *)param_1[0x62],(int)local_30 + -1,local_38._4_4_ - (param_3 & 0xff));
  (**(code **)(*(longlong *)param_1[0x62] + 0xc0))
            ((longlong *)param_1[0x62],(int)local_30 + -1,local_30._4_4_ + -1);
  (**(code **)(*(longlong *)param_1[0x62] + 0xc0))
            ((longlong *)param_1[0x62],(int)local_38 + (param_3 & 0xff),local_30._4_4_ + -1);
  return;
}

