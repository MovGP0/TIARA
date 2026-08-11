/* Ghidra address: 00dd5710 */
/* Ghidra symbol: FUN_00dd5710 */


void FUN_00dd5710(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,char param_6,undefined1 param_7,undefined1 param_8,
                 undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined1 param_14)

{
  longlong lVar1;
  
  if (param_6 == '\0') {
    *param_1 = (longlong)(param_1 + 1);
    FUN_00dd1c30(param_1 + 1,&PTR_FUN_00dd00f8,param_2,param_3,param_4,param_5);
  }
  else if (param_6 == '\x01') {
    *param_1 = (longlong)(param_1 + 1);
    FUN_00dd1d30(param_1 + 1,&PTR_FUN_00dd0128,param_2,param_3,param_4,param_5);
  }
  else if (param_6 == '\x02') {
    *param_1 = (longlong)(param_1 + 1);
    FUN_00dd1f70(param_1 + 1,&PTR_FUN_00dd0158,param_2,param_3,param_4,param_5);
  }
  else if (param_6 == '\x03') {
    *param_1 = (longlong)(param_1 + 1);
    *(undefined1 *)(param_1 + 3) = param_7;
    FUN_00dd2230(param_1 + 1,&PTR_FUN_00dd0188,param_2,param_3,param_9,param_4,param_5,param_8,
                 param_10,param_11,param_12,param_13,param_14);
  }
  else {
    FUN_01b04d70(0x134,&LAB_00dd58e8,0);
    lVar1 = *param_1;
    *(undefined1 *)(lVar1 + 0x10) = param_7;
    *(undefined1 *)(lVar1 + 6) = param_8;
  }
  return;
}

