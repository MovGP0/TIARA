/* Ghidra address: 00b4e500 */
/* Ghidra symbol: FUN_00b4e500 */


longlong FUN_00b4e500(longlong param_1,char param_2,undefined8 param_3,undefined2 param_4,
                     undefined2 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_40 = auStack_68;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_00b4d010(local_res8,0,param_3,param_6);
  *(undefined8 *)(local_res8 + 0x18) = param_6;
  *(undefined2 *)(local_res8 + 0x4a) = param_5;
  *(undefined2 *)(local_res8 + 0x48) = param_4;
  FUN_00460ba0(&local_30);
  FUN_00460b80(&local_30);
  FUN_00461840(local_res8 + 0x28,&local_30);
  FUN_00460ba0(&local_30);
  FUN_004144d0(local_res8 + 0x40);
  *(undefined1 *)(local_res8 + 8) = 0;
  if (*(char *)(*(longlong *)(local_res8 + 0x18) + 0x18) != '\x01') {
    FUN_00b4e780(local_res8);
  }
  FUN_00460ba0(&local_30);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

