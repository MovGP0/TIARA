/* Ghidra address: 016e8960 */
/* Ghidra symbol: FUN_016e8960 */


longlong FUN_016e8960(longlong param_1,char param_2,longlong param_3,undefined8 param_4,
                     undefined1 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  longlong local_res8;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 *local_30;
  
  local_30 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_58 = param_5;
  local_50 = param_6;
  local_48 = param_7;
  FUN_016e2d40(local_res8,0,param_3,param_4);
  if (param_3 != 0) {
    uVar2 = FUN_016ea1b0(param_3,1);
    *(undefined2 *)(local_res8 + 0x38) = uVar2;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

