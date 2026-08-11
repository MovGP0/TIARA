/* Ghidra address: 013189e0 */
/* Ghidra symbol: FUN_013189e0 */


void FUN_013189e0(longlong param_1,char param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (param_2 == '\0') {
    LOCK();
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
    UNLOCK();
    LOCK();
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    UNLOCK();
    LOCK();
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
    UNLOCK();
    LOCK();
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
              (*(longlong **)(param_1 + 0x20),local_20,*(undefined4 *)(param_1 + 0x84));
    FUN_012cca00(*(undefined8 *)(param_1 + 0x90),local_20[0],*(undefined4 *)(param_1 + 0x78),
                 *(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
  }
  FUN_00414480(local_20);
  return;
}

