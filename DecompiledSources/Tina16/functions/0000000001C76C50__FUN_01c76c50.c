/* Ghidra address: 01c76c50 */
/* Ghidra symbol: FUN_01c76c50 */


void FUN_01c76c50(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0xc0))(param_2);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_2 + 0x118))(param_2);
      if (cVar1 != '\0') {
        *(short *)PTR_DAT_02002200 = *(short *)PTR_DAT_02002200 + 1;
      }
    }
  }
  return;
}

