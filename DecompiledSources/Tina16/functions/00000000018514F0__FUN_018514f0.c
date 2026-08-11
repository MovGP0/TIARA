/* Ghidra address: 018514f0 */
/* Ghidra symbol: FUN_018514f0 */


undefined8 FUN_018514f0(undefined8 param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_48 = 0;
  FUN_01847460(local_res8,0,L"__StringHelper",3);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uVar2 = FUN_01847a00(&PTR_FUN_01843af8,1,0,0);
  FUN_01847420(local_res8,uVar2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

