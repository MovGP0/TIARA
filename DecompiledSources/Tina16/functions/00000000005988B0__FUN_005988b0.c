/* Ghidra address: 005988b0 */
/* Ghidra symbol: FUN_005988b0 */


void FUN_005988b0(longlong *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int local_440;
  undefined1 *local_430;
  undefined1 local_428 [1024];
  
  local_430 = (undefined1 *)0x0;
  if ((((param_2 < 0) || (param_3 < 0)) || ((int)param_1[1] < param_2 + param_3)) ||
     (param_2 + param_3 < 0)) {
    FUN_00594f90();
  }
  if (0 < param_3) {
    puVar1 = (undefined1 *)0x0;
    if (param_1[4] != 0) {
      if (param_3 < 0x81) {
        puVar1 = local_428;
      }
      else {
        FUN_00419260(&local_430,&DAT_00598858,1,(longlong)param_3);
        puVar1 = local_430;
      }
      FUN_00409a70(*param_1 + (longlong)param_2 * 8,puVar1,(longlong)(param_3 * 8));
    }
    iVar2 = (int)param_1[1] - (param_2 + param_3);
    local_440 = param_2;
    if (0 < (longlong)iVar2) {
      FUN_00409a70(*param_1 + (longlong)(param_2 + param_3) * 8,*param_1 + (longlong)param_2 * 8,
                   (longlong)iVar2 * 8);
      local_440 = param_2 + iVar2;
    }
    FUN_0040d200(*param_1 + (longlong)local_440 * 8,(longlong)(param_3 * 8),0);
    *(int *)(param_1 + 1) = (int)param_1[1] - param_3;
    if ((param_1[4] != 0) && (iVar2 = 0, -1 < param_3 + -1)) {
      do {
        (*(code *)param_1[4])(param_1[3],puVar1 + (longlong)iVar2 * 8,5);
        iVar2 = iVar2 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  FUN_00419430(&local_430,&DAT_00598858);
  return;
}

