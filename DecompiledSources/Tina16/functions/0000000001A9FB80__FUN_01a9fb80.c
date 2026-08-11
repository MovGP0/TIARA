/* Ghidra address: 01a9fb80 */
/* Ghidra symbol: FUN_01a9fb80 */


void FUN_01a9fb80(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0x12d) == '\0') {
    FUN_01a98380(param_1,param_2,param_3,&local_28,&local_24);
    local_20 = local_28 - *(int *)(param_1 + 0x188);
    local_28 = local_20 + -2;
    local_1c = local_24 - *(int *)(param_1 + 0x18c);
    local_24 = local_1c + -2;
    local_20 = local_20 + 3;
    local_1c = local_1c + 3;
    if (param_4 == '\0') {
      thunk_FUN_040ef8c2(*(undefined8 *)(param_1 + 0x148),&local_28);
    }
    else {
      thunk_FUN_03a2fc9d(*(undefined8 *)(param_1 + 0x140),&local_28,0xffffffff);
    }
  }
  return;
}

