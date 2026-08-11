/* Ghidra address: 006fa0e0 */
/* Ghidra symbol: FUN_006fa0e0 */


void FUN_006fa0e0(longlong *param_1,uint param_2)

{
  undefined1 uVar1;
  
  *(bool *)((longlong)param_1 + 0x31a) = (param_2 & 3) != 0;
  (**(code **)(*param_1 + 0x128))(param_1,(param_2 & 4) != 0);
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    FUN_0064dbe0(param_1,(param_2 & 8) == 0);
  }
  if ((*(char *)((longlong)param_1 + 0x31a) == '\0') && ((param_2 & 0x10) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 100) = uVar1;
  *(bool *)((longlong)param_1 + 0x339) = (param_2 & 0x20) != 0;
  *(bool *)((longlong)param_1 + 0x321) = (param_2 & 0x80) != 0;
  return;
}

