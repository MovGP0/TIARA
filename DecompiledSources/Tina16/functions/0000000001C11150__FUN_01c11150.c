/* Ghidra address: 01c11150 */
/* Ghidra symbol: FUN_01c11150 */


void FUN_01c11150(longlong *param_1,byte param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 local_58 [4];
  undefined4 local_54;
  int local_4c;
  undefined4 local_48 [2];
  int local_40;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_01bea6c0(param_1,param_2);
  lVar3 = FUN_01c07120(param_1);
  local_30 = FUN_00635840(*(undefined4 *)(lVar3 + 200),0x13);
  lVar3 = FUN_01c07120(param_1);
  uVar2 = FUN_00635930(*(undefined4 *)(lVar3 + 200),0xffffffce);
  local_2c = uVar2;
  FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),local_30);
  (**(code **)(*param_1 + 0xe0))(param_1,local_48);
  (**(code **)(*param_1 + 0xe0))(param_1,local_58);
  (**(code **)(*(longlong *)param_1[0x62] + 200))((longlong *)param_1[0x62],local_40,local_54);
  if ((param_2 & 2) == 0) {
    (**(code **)(*param_1 + 0xe0))(param_1,local_48);
    (**(code **)(*param_1 + 0xe0))(param_1,local_58);
    (**(code **)(*(longlong *)param_1[0x62] + 200))((longlong *)param_1[0x62],local_48[0],local_54);
  }
  else {
    (**(code **)(*param_1 + 0xe0))(param_1,local_48);
    (**(code **)(*param_1 + 0xe0))(param_1,local_58);
    (**(code **)(*(longlong *)param_1[0x62] + 0xc0))((longlong *)param_1[0x62],local_48[0],local_54)
    ;
  }
  if ((param_2 & 1) == 0) {
    (**(code **)(*param_1 + 0xe0))(param_1,local_48);
    (**(code **)(*param_1 + 0xe0))(param_1,local_58);
    (**(code **)(*(longlong *)param_1[0x62] + 200))((longlong *)param_1[0x62],local_48[0],local_4c);
  }
  else {
    (**(code **)(*param_1 + 0xe0))(param_1,local_48);
    (**(code **)(*param_1 + 0xe0))(param_1,local_58);
    (**(code **)(*(longlong *)param_1[0x62] + 0xc0))((longlong *)param_1[0x62],local_48[0],local_4c)
    ;
  }
  FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),uVar2);
  FUN_005fd6d0(*(undefined8 *)(param_1[0x62] + 0x78),1);
  (**(code **)(*param_1 + 0xe0))(param_1,local_48);
  (**(code **)(*param_1 + 0xe0))(param_1,local_58);
  (**(code **)(*(longlong *)param_1[0x62] + 200))((longlong *)param_1[0x62],local_40 + -1,local_54);
  (**(code **)(*param_1 + 0xe0))(param_1,local_48);
  (**(code **)(*param_1 + 0xe0))(param_1,local_58);
  (**(code **)(*(longlong *)param_1[0x62] + 0xc0))((longlong *)param_1[0x62],local_40 + -1,local_4c)
  ;
  (**(code **)(*param_1 + 0xe0))(param_1,local_48);
  (**(code **)(*param_1 + 0xe0))(param_1,local_58);
  (**(code **)(*(longlong *)param_1[0x62] + 200))((longlong *)param_1[0x62],local_40 + -2,local_54);
  FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),uVar2);
  if (param_1[100] != 0) {
    cVar1 = FUN_01bfea90(param_1[100]);
    if ((cVar1 == '\0') && ((param_2 & 4) != 0)) {
      (**(code **)(*param_1 + 0xe0))(param_1,local_48);
      (**(code **)(*param_1 + 0xe0))(param_1,local_58);
      (**(code **)(*(longlong *)param_1[0x62] + 0xc0))
                ((longlong *)param_1[0x62],local_40 + -2,local_4c + 1);
      goto LAB_01c11498;
    }
  }
  (**(code **)(*param_1 + 0xe0))(param_1,local_48);
  (**(code **)(*param_1 + 0xe0))(param_1,local_58);
  (**(code **)(*(longlong *)param_1[0x62] + 200))
            ((longlong *)param_1[0x62],local_40 + -2,local_4c + -1);
LAB_01c11498:
  if ((param_2 & 8) != 0) {
    (**(code **)(*param_1 + 0xe0))(param_1,local_48);
    (**(code **)(*param_1 + 0xe0))(param_1,local_58);
    (**(code **)(*(longlong *)param_1[0x62] + 0xc0))
              ((longlong *)param_1[0x62],local_48[0],local_4c + -1);
  }
  return;
}

