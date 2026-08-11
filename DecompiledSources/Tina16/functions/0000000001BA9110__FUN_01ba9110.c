/* Ghidra address: 01ba9110 */
/* Ghidra symbol: FUN_01ba9110 */


longlong FUN_01ba9110(longlong param_1,char param_2,undefined4 param_3,undefined4 param_4,
                     undefined8 param_5)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  FUN_00414610(param_5);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  local_38 = param_5;
  FUN_00c816f0(local_res8,0,param_3,param_4);
  uVar1 = FUN_01ba9c60(&DAT_01ba97e8,1);
  *(undefined8 *)PTR_DAT_02002a68 = uVar1;
  FUN_00414ad0(local_res8 + 0x28,param_5);
  FUN_00414480(&param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

