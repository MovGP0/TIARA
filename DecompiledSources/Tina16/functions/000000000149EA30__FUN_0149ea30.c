/* Ghidra address: 0149ea30 */
/* Ghidra symbol: FUN_0149ea30 */


void FUN_0149ea30(longlong *param_1,undefined8 param_2)

{
  undefined8 local_28;
  longlong *local_20;
  
  if (*(char *)((longlong)param_1 + 10) != '\0') {
    local_20 = (longlong *)param_1[5];
    local_28 = *(undefined8 *)(*local_20 + 0xa0);
    (**(code **)(*param_1 + 0x1c8))(param_1,param_2,&local_28);
    *(undefined1 *)((longlong)param_1 + 10) = 0;
  }
  return;
}

