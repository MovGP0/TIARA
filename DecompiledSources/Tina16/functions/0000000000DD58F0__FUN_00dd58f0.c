/* Ghidra address: 00dd58f0 */
/* Ghidra symbol: FUN_00dd58f0 */


void FUN_00dd58f0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,byte param_7,undefined1 param_8,undefined1 param_9,
                 undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if (param_7 == 0) {
    if ((char)param_6 == '\0') {
      *param_1 = (longlong)(param_1 + 1);
      uVar2 = FUN_00dd3300(param_1 + 1,&PTR_FUN_00dd0228,param_2,param_3,param_4,param_5);
    }
    else if ((char)param_6 == '\x01') {
      *param_1 = (longlong)(param_1 + 1);
      uVar2 = FUN_00dd3690(param_1 + 1,&PTR_FUN_00dd02b8,param_2,param_3,param_4,param_5);
    }
    else if ((char)param_6 == '\x02') {
      *param_1 = (longlong)(param_1 + 1);
      uVar2 = FUN_00dd3c40(param_1 + 1,&PTR_FUN_00dd0348,param_2,param_3,param_4,param_5);
    }
    else if ((char)param_6 == '\x03') {
      *param_1 = (longlong)(param_1 + 1);
      uVar2 = FUN_00dd4210(param_1 + 1,&PTR_FUN_00dd03d8,param_2,param_3,param_9,param_4,param_5,
                           param_8,param_10,param_11,param_12);
    }
    else {
      uVar2 = FUN_01b04d70(0x134,&DAT_00dd5e30,0);
    }
  }
  else if (param_7 == 1) {
    if ((char)param_6 == '\0') {
      *param_1 = (longlong)(param_1 + 1);
      uVar2 = FUN_00dd3300(param_1 + 1,&PTR_FUN_00dd0288,param_2,param_3,param_4,param_5);
    }
    else if ((char)param_6 == '\x01') {
      *param_1 = (longlong)(param_1 + 1);
      uVar2 = FUN_00dd3690(param_1 + 1,&PTR_FUN_00dd0318,param_2,param_3,param_4,param_5);
    }
    else if ((char)param_6 == '\x02') {
      *param_1 = (longlong)(param_1 + 1);
      uVar2 = FUN_00dd3c40(param_1 + 1,&PTR_FUN_00dd03a8,param_2,param_3,param_4,param_5);
    }
    else if ((char)param_6 == '\x03') {
      *param_1 = (longlong)(param_1 + 1);
      uVar2 = FUN_00dd4210(param_1 + 1,&PTR_FUN_00dd03d8,param_2,param_3,param_9,param_4,param_5,
                           param_8,param_10,param_11,param_12);
    }
    else {
      uVar2 = FUN_01b04d70(0x134,&DAT_00dd5e30,0);
    }
  }
  else {
    uVar2 = 0;
    if (param_7 == 3) {
      if ((char)param_6 == '\0') {
        *param_1 = (longlong)(param_1 + 1);
        uVar2 = FUN_00dd3300(param_1 + 1,&PTR_FUN_00dd0258,param_2,param_3,param_4,param_5);
      }
      else if ((char)param_6 == '\x01') {
        *param_1 = (longlong)(param_1 + 1);
        uVar2 = FUN_00dd3710(param_1 + 1,&PTR_FUN_00dd02e8,param_2,param_3,param_4,param_5);
      }
      else if ((char)param_6 == '\x02') {
        *param_1 = (longlong)(param_1 + 1);
        uVar2 = FUN_00dd3cc0(param_1 + 1,&PTR_FUN_00dd0378,param_2,param_3,param_4,param_5);
      }
      else if ((char)param_6 == '\x03') {
        *param_1 = (longlong)(param_1 + 1);
        uVar2 = FUN_00dd4210(param_1 + 1,&PTR_FUN_00dd03d8,param_2,param_3,param_9,param_4,param_5,
                             param_8,param_10,param_11,param_12);
      }
      else {
        uVar2 = FUN_01b04d70(0x134,&DAT_00dd5e30,0);
      }
    }
  }
  if ((param_6 < 4) && (-1 < param_6)) {
    if (param_7 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (param_7 & 0x1f) & 0xbU) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) goto LAB_00dd5dfb;
  }
  *param_1 = (longlong)(param_1 + 1);
  FUN_00dd3300(param_1 + 1,&PTR_FUN_00dd0228,param_2,param_3,param_4,param_5);
LAB_00dd5dfb:
  lVar1 = *param_1;
  *(byte *)(lVar1 + 0x20) = param_7;
  *(undefined1 *)(lVar1 + 6) = param_8;
  return;
}

