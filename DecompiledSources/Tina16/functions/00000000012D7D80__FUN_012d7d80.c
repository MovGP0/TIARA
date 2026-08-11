/* Ghidra address: 012d7d80 */
/* Ghidra symbol: FUN_012d7d80 */


void FUN_012d7d80(longlong param_1,char param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (param_2 == '\0') {
    LOCK();
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
    UNLOCK();
    LOCK();
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    UNLOCK();
    LOCK();
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
    UNLOCK();
    LOCK();
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
              (*(longlong **)(param_1 + 0x20),local_20,*(undefined4 *)(param_1 + 0x74));
    FUN_012cca00(*(undefined8 *)(param_1 + 0x80),local_20[0],*(undefined4 *)(param_1 + 0x68),
                 *(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70));
  }
  FUN_00414480(local_20);
  return;
}

