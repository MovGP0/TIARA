/* Ghidra address: 0172bd70 */
/* Ghidra symbol: FUN_0172bd70 */


longlong FUN_0172bd70(longlong param_1,char param_2,undefined8 param_3,undefined1 param_4,
                     undefined8 param_5,undefined1 param_6)

{
  longlong local_res8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined1 *local_20;
  
  local_20 = auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_00414610(param_5);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  *(undefined8 *)(local_res8 + 0x20) = param_3;
  *(undefined1 *)(local_res8 + 0x28) = param_4;
  FUN_01cfab80(param_3,&local_48);
  local_58 = param_5;
  local_50 = param_6;
  FUN_0172bb90(local_res8,0,(longlong)(short)local_48,param_4);
  FUN_00417740(&local_48,&DAT_01d36af8);
  FUN_00414480(&param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

