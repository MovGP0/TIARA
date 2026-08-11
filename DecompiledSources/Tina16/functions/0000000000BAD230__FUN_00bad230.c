/* Ghidra address: 00bad230 */
/* Ghidra symbol: FUN_00bad230 */


longlong FUN_00bad230(longlong param_1,char param_2,undefined4 param_3,int param_4,
                     undefined8 param_5,undefined4 param_6)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_38 = param_6;
  FUN_0044d530(local_res8,0,(&PTR_PTR_01e96980)[(longlong)param_4 * 2],param_5);
  *(undefined4 *)(local_res8 + 0x30) = param_3;
  *(int *)(local_res8 + 0x34) = param_4;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

