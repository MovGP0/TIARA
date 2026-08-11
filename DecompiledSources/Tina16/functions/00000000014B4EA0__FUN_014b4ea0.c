/* Ghidra address: 014b4ea0 */
/* Ghidra symbol: FUN_014b4ea0 */


void FUN_014b4ea0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x8b0))(*(undefined8 **)(param_1 + 0x8b0));
  FUN_00418590(uVar1,&DAT_014db680);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x8d0));
  DAT_0210eb00 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x7a0) + 0x80) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x8a8) + 0x18))
              (*(longlong **)(param_1 + 0x8a8),L"Netlist Editor",L"ShowWarnings",&DAT_014b4fcc);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x8a8) + 0x18))
              (*(longlong **)(param_1 + 0x8a8),L"Netlist Editor",L"ShowWarnings",&DAT_014b4fbc);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x8a8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x8c8));
  return;
}

