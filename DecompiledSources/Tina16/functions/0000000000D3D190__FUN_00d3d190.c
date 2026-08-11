/* Ghidra address: 00d3d190 */
/* Ghidra symbol: FUN_00d3d190 */


void FUN_00d3d190(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_005fefe0(param_2);
  if ((cVar2 != '\0') && (*(char *)((longlong)param_1 + 0xac) == '\0')) {
    if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
      uVar1 = FUN_005ffa40(param_2);
      (**(code **)(*param_1 + 0xa8))(param_1,uVar1);
    }
    if (*(char *)((longlong)param_1 + 0x7d) != '\0') {
      uVar1 = FUN_005ffa40(param_2);
      (**(code **)(*param_1 + 0xa0))(param_1,uVar1);
    }
  }
  return;
}

