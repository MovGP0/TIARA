/* Ghidra address: 00f2fe70 */
/* Ghidra symbol: FUN_00f2fe70 */


undefined8 FUN_00f2fe70(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  uVar2 = FUN_00f2e9d0(&LAB_00f22a90,1,param_3);
  uVar3 = FUN_00f2e9d0(&LAB_00f22a90,1,param_4);
  FUN_00f2fcf0(local_res8,0,uVar2,uVar3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

