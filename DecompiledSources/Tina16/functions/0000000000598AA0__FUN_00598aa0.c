/* Ghidra address: 00598aa0 */
/* Ghidra symbol: FUN_00598aa0 */


void FUN_00598aa0(longlong *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_498 [32];
  longlong local_478;
  undefined1 *local_470;
  longlong local_458;
  int local_44c;
  longlong local_448;
  longlong local_440;
  undefined1 local_438 [1032];
  undefined1 *local_30;
  undefined1 *local_20;
  
  local_470 = auStack_498;
  if ((((param_2 < 0) || (param_3 < 0)) || ((int)param_1[1] < param_2 + param_3)) ||
     (puVar1 = auStack_498, param_2 + param_3 < 0)) {
    FUN_00594f90();
    puVar1 = local_470;
  }
  local_470 = puVar1;
  if (0 < param_3) {
    local_478 = param_1[2] + (ulonglong)*(byte *)(param_1[2] + 1);
    local_458 = (longlong)*(int *)(local_478 + 2);
    local_20 = (undefined1 *)0x0;
    local_30 = local_438;
    local_448 = param_3 * local_458;
    if (param_1[4] == 0) {
      FUN_004185d0(*param_1 + param_2 * local_458,**(undefined8 **)(local_478 + 6),(longlong)param_3
                  );
    }
    else {
      if (0x400 < local_448) {
        local_30 = (undefined1 *)FUN_004095c0(local_448);
        local_20 = local_30;
      }
      FUN_00409a70(*param_1 + param_2 * local_458,local_30,local_448);
    }
    local_440 = ((int)param_1[1] - (param_2 + param_3)) * local_458;
    if (local_440 < 1) {
      FUN_0040d200(*param_1 + param_2 * local_458,local_448,0);
    }
    else {
      FUN_00409a70(*param_1 + (param_2 + param_3) * local_458,*param_1 + param_2 * local_458,
                   local_440);
      FUN_0040d200(*param_1 + ((int)param_1[1] - param_3) * local_458,local_448,0);
    }
    *(int *)(param_1 + 1) = (int)param_1[1] - param_3;
    if ((param_1[4] != 0) && (local_44c = 0, iVar2 = param_3, -1 < param_3 + -1)) {
      do {
        (*(code *)param_1[4])(param_1[3],local_30 + local_44c * local_458,5);
        local_44c = local_44c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (param_1[4] != 0) {
      if (local_20 == (undefined1 *)0x0) {
        FUN_004185d0(local_30,**(undefined8 **)
                                (param_1[2] + 6 + (ulonglong)*(byte *)(param_1[2] + 1)),
                     (longlong)param_3);
      }
      else {
        FUN_004185d0(local_20,**(undefined8 **)
                                (param_1[2] + 6 + (ulonglong)*(byte *)(param_1[2] + 1)),
                     (longlong)param_3);
        FUN_004095f0(local_20);
      }
    }
  }
  return;
}

