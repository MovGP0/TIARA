/* Ghidra address: 00598e40 */
/* Ghidra symbol: FUN_00598e40 */


void FUN_00598e40(longlong *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_488 [40];
  undefined1 *local_460;
  int local_44c;
  longlong local_448;
  undefined1 local_440 [1024];
  longlong local_40;
  longlong local_38 [2];
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_460 = auStack_488;
  if ((((param_2 < 0) || (param_3 < 0)) || ((int)param_1[1] < param_2 + param_3)) ||
     (puVar1 = auStack_488, param_2 + param_3 < 0)) {
    FUN_00594f90();
    puVar1 = local_460;
  }
  local_460 = puVar1;
  if (0 < param_3) {
    local_20 = (undefined1 *)0x0;
    local_28 = local_440;
    local_38[0] = (longlong)param_3;
    if (param_1[4] == 0) {
      FUN_004185d0(*param_1 + (longlong)param_2 * 8,
                   **(undefined8 **)(param_1[2] + 6 + (ulonglong)*(byte *)(param_1[2] + 1)),
                   local_38[0]);
    }
    else {
      if (0x80 < local_38[0]) {
        FUN_00418e30(&local_20,param_1[2],1,local_38);
        local_28 = local_20;
      }
      FUN_00409a70(*param_1 + (longlong)param_2 * 8,local_28,(longlong)(param_3 * 8));
    }
    local_448 = (longlong)((int)param_1[1] - (param_2 + param_3));
    if (local_448 < 1) {
      FUN_0040d200(*param_1 + (longlong)param_2 * 8,(longlong)(param_3 * 8),0);
    }
    else {
      FUN_00409a70(*param_1 + (longlong)(param_2 + param_3) * 8,*param_1 + (longlong)param_2 * 8,
                   local_448 * 8);
      FUN_0040d200(*param_1 + (longlong)((int)param_1[1] - param_3) * 8,(longlong)(param_3 * 8),0);
    }
    *(int *)(param_1 + 1) = (int)param_1[1] - param_3;
    if ((param_1[4] != 0) && (local_44c = 0, -1 < param_3 + -1)) {
      do {
        (*(code *)param_1[4])(param_1[3],local_28 + (longlong)local_44c * 8,5);
        local_44c = local_44c + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    if (param_1[4] != 0) {
      if (local_20 == (undefined1 *)0x0) {
        FUN_004185d0(local_28,**(undefined8 **)
                                (param_1[2] + 6 + (ulonglong)*(byte *)(param_1[2] + 1)),local_38[0])
        ;
      }
      else {
        local_40 = param_1[2];
        FUN_00419430(&local_20,local_40);
      }
    }
  }
  return;
}

