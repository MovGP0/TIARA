/* Ghidra address: 00afe410 */
/* Ghidra symbol: FUN_00afe410 */


void FUN_00afe410(longlong *param_1,char param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  if ((param_2 != *(char *)((longlong)param_1 + 0x799)) &&
     (*(char *)((longlong)param_1 + 0x799) = param_2,
     (*(ushort *)((longlong)param_1 + 0x34) & 1) == 0)) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      FUN_00afe640(param_1,1);
      FUN_00af2250(param_1);
      FUN_00afe640(param_1,0);
      (**(code **)(*param_1 + 0x180))(param_1);
    }
  }
  return;
}

