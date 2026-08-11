/* Ghidra address: 019ced20 */
/* Ghidra symbol: FUN_019ced20 */


longlong FUN_019ced20(longlong param_1,char param_2,undefined8 *param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  longlong local_res8;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_50 = auStack_78;
  local_40 = *param_3;
  uStack_38 = param_3[1];
  uStack_30 = param_3[2];
  FUN_0046bd60(&local_40);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_004d0ba0(local_res8,0,1);
  *(undefined8 *)(local_res8 + 0x70) = param_4;
  *(undefined8 *)(local_res8 + 0x78) = param_5;
  *(undefined8 *)(local_res8 + 0x80) = param_6;
  *(undefined8 *)(local_res8 + 0x48) = param_8;
  FUN_00461840(local_res8 + 0x58,&local_40);
  *(undefined1 *)(local_res8 + 0x51) = 0;
  *(undefined1 *)(local_res8 + 0x53) = 0;
  *(undefined1 *)(local_res8 + 0x50) = 0;
  *(undefined4 *)(local_res8 + 0x88) = param_7;
  FUN_004d1400(local_res8,1);
  *(undefined1 *)(local_res8 + 0x52) = 1;
  FUN_00460ba0(&local_40);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

