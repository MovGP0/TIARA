/* Ghidra address: 01cb1e80 */
/* Ghidra symbol: FUN_01cb1e80 */


undefined8 FUN_01cb1e80(undefined8 param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_28;
  int local_1c;
  
  local_40 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_01cb1d80(local_res8,0);
  local_28 = *(longlong *)(param_3 + 8);
  iVar3 = *(int *)(local_28 + 0x10);
  local_1c = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar2 = FUN_01d347d0(local_28,local_1c);
      FUN_01cb1e40(auStack_68,uVar2);
      local_1c = local_1c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

