/* Ghidra address: 006ec860 */
/* Ghidra symbol: FUN_006ec860 */


longlong * FUN_006ec860(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
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
  FUN_00652880(local_res8,0,param_3);
  FUN_00659460(local_res8,0);
  (**(code **)(*local_res8 + 0x238))(local_res8,0);
  FUN_0064cbf0(local_res8,0x79);
  FUN_0064cc50(local_res8,0x19);
  FUN_0065bce0(local_res8,1);
  FUN_0064e0c0(local_res8,0);
  *(undefined1 *)(local_res8 + 0x92) = 1;
  *(undefined1 *)((longlong)local_res8 + 0x492) = 3;
  *(undefined1 *)((longlong)local_res8 + 0x491) = 4;
  *(undefined2 *)((longlong)local_res8 + 0x494) = 0x41;
  FUN_006ece40(local_res8);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

