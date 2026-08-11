/* Ghidra address: 00aa9930 */
/* Ghidra symbol: FUN_00aa9930 */


longlong FUN_00aa9930(longlong param_1,char param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8,0);
  uVar2 = FUN_00abf160(&PTR_FUN_00a8bac8,1,param_3,param_4[0x10]);
  *(undefined8 *)(local_res8 + 0x80) = uVar2;
  (**(code **)(*param_4 + 0x20))(param_4,local_res8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

