/* Ghidra address: 005981e0 */
/* Ghidra symbol: FUN_005981e0 */


void FUN_005981e0(longlong *param_1,int param_2,int param_3)

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
      if (param_3 < 0x401) {
        puVar1 = local_428;
      }
      else {
        FUN_00419260(&local_430,&DAT_00598188,1,(longlong)param_3);
        puVar1 = local_430;
      }
      FUN_00409a70(*param_1 + (longlong)param_2,puVar1,(longlong)param_3);
    }
    iVar2 = (int)param_1[1] - (param_2 + param_3);
    local_440 = param_2;
    if (0 < (longlong)iVar2) {
      FUN_00409a70(*param_1 + (longlong)(param_2 + param_3),*param_1 + (longlong)param_2,
                   (longlong)iVar2);
      local_440 = param_2 + iVar2;
    }
    FUN_0040d200(*param_1 + (longlong)local_440,(longlong)param_3,0);
    *(int *)(param_1 + 1) = (int)param_1[1] - param_3;
    if ((param_1[4] != 0) && (iVar2 = 0, -1 < param_3 + -1)) {
      do {
        (*(code *)param_1[4])(param_1[3],puVar1 + iVar2,5);
        iVar2 = iVar2 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  FUN_00419430(&local_430,&DAT_00598188);
  return;
}

