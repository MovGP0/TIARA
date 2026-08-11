/* Ghidra address: 01be9ce0 */
/* Ghidra symbol: FUN_01be9ce0 */


void FUN_01be9ce0(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0xe0))(param_1,&local_38);
  if ((*(byte *)(param_1 + 0x6c) & 2) != 0) {
    uVar2 = FUN_01c07120(param_1);
    lVar3 = FUN_01c03e40(uVar2);
    FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),*(undefined4 *)(lVar3 + 0xa4));
    (**(code **)(*(longlong *)param_1[0x62] + 200))((longlong *)param_1[0x62],local_38,local_34);
    (**(code **)(*(longlong *)param_1[0x62] + 0xc0))((longlong *)param_1[0x62],local_30,local_34);
  }
  if ((*(byte *)(param_1 + 0x6c) & 8) != 0) {
    uVar2 = FUN_01c07120(param_1);
    uVar2 = FUN_01c03e40(uVar2);
    uVar1 = FUN_01bff2c0(uVar2);
    FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),uVar1);
    (**(code **)(*(longlong *)param_1[0x62] + 200))
              ((longlong *)param_1[0x62],local_38,local_2c + -1);
    (**(code **)(*(longlong *)param_1[0x62] + 0xc0))
              ((longlong *)param_1[0x62],local_30,local_2c + -1);
  }
  return;
}

