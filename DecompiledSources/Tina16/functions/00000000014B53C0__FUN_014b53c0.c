/* Ghidra address: 014b53c0 */
/* Ghidra symbol: FUN_014b53c0 */


void FUN_014b53c0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x860) + 0x5e0) != '\0') {
    FUN_00c0dad0(*(longlong *)(param_1 + 0x860),0);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2768) + 0xb0);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x860) + 0x4e8));
    FUN_014a1f90(0,0,0,0);
  }
  return;
}

