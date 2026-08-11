/* Ghidra address: 014b4b80 */
/* Ghidra symbol: FUN_014b4b80 */


void FUN_014b4b80(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x896) == '\0') {
    FUN_01c8d180(*(undefined8 *)PTR_DAT_02004e40,0);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2768) + 0xb0);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x860) + 0x4e8));
    FUN_01c94450(*(undefined8 *)PTR_DAT_02004e40,0);
  }
  return;
}

