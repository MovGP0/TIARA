/* Ghidra address: 00d438b0 */
/* Ghidra symbol: FUN_00d438b0 */


longlong * FUN_00d438b0(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00789eb0(local_res8,0,param_3);
  cVar2 = FUN_00d44440(local_res8);
  if (cVar2 == '\x01') {
    *(undefined1 *)(local_res8 + 5) = 1;
  }
  *(undefined1 *)((longlong)local_res8 + 0x79) = 0;
  local_res8[0x11] = 0;
  local_res8[0x10] = 0;
  *(undefined1 *)(local_res8 + 0xf) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x2b) = 0;
  *(undefined1 *)(local_res8 + 0x12) = 0;
  (**(code **)(*local_res8 + 0x48))(local_res8);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

