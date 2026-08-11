/* Ghidra address: 00abf160 */
/* Ghidra symbol: FUN_00abf160 */


longlong FUN_00abf160(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00abeeb0(local_res8,0,param_3,param_4);
  *(undefined8 *)(local_res8 + 0x60) = *(undefined8 *)(param_4 + 0x60);
  *(undefined8 *)(local_res8 + 0x68) = *(undefined8 *)(param_4 + 0x68);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

