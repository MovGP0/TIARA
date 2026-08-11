/* Ghidra address: 015ab240 */
/* Ghidra symbol: FUN_015ab240 */


undefined1 FUN_015ab240(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined1 local_9;
  
  local_20 = auStack_48;
  local_9 = 0;
  if (param_1 != 0) {
    local_18 = *(undefined8 *)PTR_PTR_02002030;
    *(undefined8 *)PTR_PTR_02002030 = 0;
    cVar1 = FUN_004113d0(param_1,param_2);
    if (cVar1 != '\0') {
      local_9 = 1;
    }
    *(undefined8 *)PTR_PTR_02002030 = local_18;
  }
  return local_9;
}

