/* Ghidra address: 00a02100 */
/* Ghidra symbol: FUN_00a02100 */


longlong FUN_00a02100(longlong param_1,char param_2,undefined8 param_3,int param_4,
                     undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00410e60(local_res8,0);
  local_1c = param_4;
  FUN_00419260(local_res8 + 8,&DAT_009f2be0,1,(longlong)(param_4 + 2));
  FUN_00409a70(param_3,*(undefined8 *)(local_res8 + 8),(longlong)local_1c);
  *(undefined2 *)(*(longlong *)(local_res8 + 8) + (longlong)local_1c) = 0;
  FUN_00a02a30(local_res8);
  FUN_00414ad0(local_res8 + 0x20,param_7);
  FUN_00a02aa0(local_res8,param_5,param_6);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

