/* Ghidra address: 00894a30 */
/* Ghidra symbol: FUN_00894a30 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00894a30(undefined8 param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 local_res8;
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
  FUN_00892130(local_res8,0);
  if (DAT_01e23558 == '\0') {
    FUN_00882f90();
    FUN_00890270();
    FUN_00892920();
    FUN_008949a0();
    DAT_01e23558 = '\x01';
  }
  _DAT_01e23550 = local_res8;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

