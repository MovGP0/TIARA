/* Ghidra address: 00424770 */
/* Ghidra symbol: FUN_00424770 */


char FUN_00424770(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  char local_21;
  longlong local_20;
  longlong *local_18;
  
  local_30 = auStack_58;
  local_21 = FUN_00412520(*param_2);
  if (local_21 != '\0') {
    if ((*(byte *)(*param_2 + 0x14) & 1) == 0) {
      piVar1 = (int *)(*param_2 + 0x10);
      *piVar1 = *piVar1 + -1;
    }
    lVar2 = *param_2;
    if (*(int *)(lVar2 + 0x10) == 0) {
      FUN_00412130(lVar2);
      local_20 = *param_2;
      *param_2 = 0;
      local_18 = param_2;
      FUN_00410f20(local_20);
    }
    else {
      FUN_00412130(lVar2);
      local_21 = '\0';
    }
  }
  return local_21;
}

