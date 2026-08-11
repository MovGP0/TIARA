/* Ghidra address: 011309d0 */
/* Ghidra symbol: FUN_011309d0 */


undefined8
FUN_011309d0(undefined8 param_1,char param_2,undefined8 param_3,undefined2 param_4,
            undefined2 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 local_res8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 local_5c [34];
  undefined1 local_3a [42];
  
  local_70 = auStack_98;
  local_78 = 0;
  local_res8 = param_1;
  puVar1 = auStack_98;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_70;
  }
  local_70 = puVar1;
  FUN_0112f2b0(local_3a,param_3);
  cVar2 = FUN_0112ebb0(local_3a,local_5c,param_4,param_5);
  if (cVar2 == '\0') {
    FUN_0041ddd0(&local_78,PTR_PTR_02003350);
    FUN_0112d910(local_78);
  }
  FUN_01130820(local_res8,0,local_5c);
  FUN_00414480(&local_78);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

