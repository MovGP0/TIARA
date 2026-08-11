/* Ghidra address: 01512200 */
/* Ghidra symbol: FUN_01512200 */


void FUN_01512200(longlong param_1)

{
  int iVar1;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = 0;
  local_28 = 0;
  local_38[0] = 0x538;
  if ((*(char *)(param_1 + 0x7ed) != '\0') &&
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0xee0) + 0x78))
                        (*(longlong **)(param_1 + 0xee0)), iVar1 != 0)) {
    return;
  }
  FUN_01512260(param_1,local_38);
  return;
}

