/* Ghidra address: 00836840 */
/* Ghidra symbol: FUN_00836840 */


void FUN_00836840(longlong *param_1)

{
  char cVar1;
  undefined4 local_24;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_008350c0(param_1,local_20);
  cVar1 = FUN_008355d0(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_006805f0(param_1);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x2b8))(param_1,local_20[0],&local_24);
      if (cVar1 == '\0') {
        if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
          *(byte *)((longlong)param_1 + 0x4e9) = *(byte *)((longlong)param_1 + 0x4e9) | 2;
          (**(code **)(*param_1 + 600))(param_1);
        }
        FUN_008358c0(param_1,local_24);
        (**(code **)(*param_1 + 0x2c0))(param_1);
      }
    }
  }
  FUN_00414480(local_20);
  return;
}

