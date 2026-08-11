/* Ghidra address: 01531880 */
/* Ghidra symbol: FUN_01531880 */


void FUN_01531880(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00417c40(PTR_DAT_02004010,param_1 + 0x988,&DAT_01d0d0b8);
  FUN_00410f20(*(undefined8 *)PTR_DAT_02004a88);
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x1c28))(*(undefined8 **)(param_1 + 0x1c28));
  FUN_00418590(uVar1,&DAT_014db680);
  DAT_0210edd8 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x8a0) + 0x80) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x1c08) + 0x18))
              (*(longlong **)(param_1 + 0x1c08),L"Netlist Editor",L"ShowWarnings",&LAB_01531a04);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x1c08) + 0x18))
              (*(longlong **)(param_1 + 0x1c08),L"Netlist Editor",L"ShowWarnings",&DAT_015319f4);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1c08));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1c30));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1c38));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1c40));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1c10));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1c50));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1c58));
  return;
}

