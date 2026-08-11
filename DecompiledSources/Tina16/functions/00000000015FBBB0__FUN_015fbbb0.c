/* Ghidra address: 015fbbb0 */
/* Ghidra symbol: FUN_015fbbb0 */


undefined1 FUN_015fbbb0(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 local_res8 [4];
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_31 = 0;
  *param_2 = 0;
  iVar3 = 0x13;
  puVar2 = (undefined8 *)PTR_PTR_02004f18;
  do {
    FUN_0043e130(&local_20,*puVar2);
    FUN_0043e130(&local_28,local_res8[0]);
    iVar1 = FUN_00416db0(local_20,local_28);
    if (iVar1 == 0) {
      *param_2 = 0x20;
      local_31 = 1;
      goto LAB_015fbc79;
    }
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_0043e130(&local_30,local_res8[0]);
  iVar3 = FUN_00416db0(local_30,L"PIC16F74_VHDL");
  if (iVar3 == 0) {
    *param_2 = 0x80;
    local_31 = 1;
  }
LAB_015fbc79:
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res8);
  return local_31;
}

