/* Ghidra address: 01847a00 */
/* Ghidra symbol: FUN_01847a00 */


longlong FUN_01847a00(longlong param_1,char param_2,undefined8 param_3,undefined1 param_4,
                     undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_48 = param_5;
  FUN_01847460(local_res8,0,param_3,param_4);
  *(undefined1 *)(local_res8 + 0xa0) = param_6;
  *(undefined1 *)(local_res8 + 0xa1) = param_7;
  FUN_0046f180(&local_38);
  FUN_00461840(local_res8 + 0x88,&local_38);
  FUN_00460ba0(&local_38);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

