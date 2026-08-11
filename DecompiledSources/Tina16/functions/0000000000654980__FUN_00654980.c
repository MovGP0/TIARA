/* Ghidra address: 00654980 */
/* Ghidra symbol: FUN_00654980 */


void FUN_00654980(longlong param_1,longlong *param_2)

{
  char cVar1;
  code *pcVar2;
  longlong *local_38;
  longlong local_30;
  
  pcVar2 = (code *)FUN_00411550(param_2,0xfff4);
  (*pcVar2)(param_2,param_1);
  local_38 = param_2;
  local_30 = param_1;
  FUN_0064fca0(param_1,0xb04c,&local_38,1);
  if (local_30 == param_1) {
    FUN_0064fca0(param_1,0xb02c,param_2,1);
    FUN_006548a0(param_1,param_2);
    if ((*(ushort *)((longlong)param_2 + 0x34) & 2) == 0) {
      FUN_0064fca0(param_2,0xb009,0,0);
      FUN_0064fca0(param_2,0xb008,0,0);
      FUN_0064fca0(param_2,0xb023,0,0);
      FUN_0064fca0(param_2,0xb03d,0,0);
      FUN_0064fca0(param_2,0xb050,0,0);
      FUN_0064fca0(param_2,0xb058,0,0);
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_00640c18);
      if (cVar1 == '\0') {
        cVar1 = FUN_0065be20(param_1);
        if (cVar1 != '\0') {
          (**(code **)(*param_2 + 0x180))(param_2);
        }
      }
      else {
        FUN_0064fca0(param_2,0xb011,0,0);
        FUN_00655e40(param_1);
      }
      FUN_00654320(param_1,param_2);
    }
    FUN_0064fca0(param_1,0xb036,param_2,1);
  }
  return;
}

