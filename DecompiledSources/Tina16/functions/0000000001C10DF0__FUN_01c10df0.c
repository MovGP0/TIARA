/* Ghidra address: 01c10df0 */
/* Ghidra symbol: FUN_01c10df0 */


void FUN_01c10df0(longlong *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int local_30 [4];
  int local_20;
  int local_1c;
  
  cVar1 = FUN_01c06f30(param_1);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_1 + 0x228))(param_1), cVar1 == '\0')) {
    return;
  }
  FUN_004238d0(local_30 + 2,*param_2 + -1,0,*param_2 + *(int *)((longlong)param_1 + 0x34c) + -5,
               *(undefined4 *)((longlong)param_1 + 0x9c));
  if (((((*(char *)((longlong)param_1 + 0x344) != '\0') &&
        (cVar1 = (**(code **)(*param_1 + 0xf0))(param_1), cVar1 != '\0')) ||
       ((*(char *)((longlong)param_1 + 0x344) != '\0' && ((char)param_1[0x6e] == '\0')))) ||
      (cVar1 = (**(code **)(*param_1 + 0x228))(param_1), cVar1 != '\0')) &&
     ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)) {
    local_30[3] = local_30[3] +
                  *(int *)(&DAT_01fe4648 + (ulonglong)((*(byte *)(param_1 + 0x6c) & 2) != 0) * 4);
    local_1c = local_1c -
               *(int *)(&DAT_01fe4648 + (ulonglong)((*(byte *)(param_1 + 0x6c) & 8) != 0) * 4);
    lVar3 = FUN_01c03e40(param_1[0x6d]);
    local_30[0] = *(int *)(lVar3 + 0xc4);
    lVar3 = FUN_01c03e40(param_1[0x6d]);
    local_30[1] = *(undefined4 *)(lVar3 + 0xcc);
    uVar4 = (**(code **)(*param_1 + 0x228))(param_1);
    FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),local_30[uVar4 & 0xff]);
    (**(code **)(*(longlong *)param_1[0x62] + 200))
              ((longlong *)param_1[0x62],local_20 + -1,local_30[3]);
    (**(code **)(*(longlong *)param_1[0x62] + 0xc0))
              ((longlong *)param_1[0x62],local_30[2],local_30[3]);
    (**(code **)(*(longlong *)param_1[0x62] + 0xc0))((longlong *)param_1[0x62],local_30[2],local_1c)
    ;
    cVar1 = (**(code **)(*param_1 + 0x228))(param_1);
    FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),local_30[cVar1 == '\0']);
    (**(code **)(*(longlong *)param_1[0x62] + 200))
              ((longlong *)param_1[0x62],local_20 + -1,local_30[3]);
    (**(code **)(*(longlong *)param_1[0x62] + 0xc0))
              ((longlong *)param_1[0x62],local_20 + -1,local_1c + -1);
    (**(code **)(*(longlong *)param_1[0x62] + 0xc0))
              ((longlong *)param_1[0x62],local_30[2] + -1,local_1c + -1);
  }
  if (*(char *)((longlong)param_1 + 0x35c) == '\0') {
    if ((*(char *)((longlong)param_1 + 0x344) == '\0') &&
       (cVar1 = (**(code **)(*param_1 + 0x228))(param_1), cVar1 != '\0')) {
      lVar3 = FUN_01c03e40(param_1[0x6d]);
      uVar5 = FUN_01c03e40(param_1[0x6d]);
      uVar2 = FUN_01bff2c0(uVar5);
      uVar5 = FUN_0060f4c0(*(undefined4 *)(lVar3 + 0xc0),uVar2);
      FUN_005fda60(*(undefined8 *)(param_1[0x62] + 0x80),uVar5);
    }
    else {
      cVar1 = FUN_01bfea90(param_1[100]);
      if (cVar1 == '\0') {
        lVar3 = FUN_01c03e40(param_1[0x6d]);
        FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar3 + 0xc0));
      }
      else {
        uVar5 = FUN_01c03e40(param_1[0x6d]);
        uVar2 = FUN_01bff2c0(uVar5);
        FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),uVar2);
      }
    }
    FUN_00423b10(local_30 + 2,0xffffffff,0xffffffff);
    (**(code **)(*(longlong *)param_1[0x62] + 0xa8))((longlong *)param_1[0x62],local_30 + 2);
    return;
  }
  return;
}

