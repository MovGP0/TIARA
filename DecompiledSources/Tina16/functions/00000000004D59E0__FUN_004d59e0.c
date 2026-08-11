/* Ghidra address: 004d59e0 */
/* Ghidra symbol: FUN_004d59e0 */


undefined8 FUN_004d59e0(undefined8 param_1,char param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined8 local_res8;
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
  FUN_004d22d0(local_res8,0,param_3);
  if ((PTR_FUN_01dc64b0 != (undefined *)0x0) && (-1 < param_4)) {
    (*(code *)PTR_FUN_01dc64b0)(DAT_01dc64b8,local_res8);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

