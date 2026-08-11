/* Ghidra address: 013e85d0 */
/* Ghidra symbol: FUN_013e85d0 */


void FUN_013e85d0(longlong param_1)

{
  char cVar1;
  undefined1 local_120 [256];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_20 = 0;
  local_10 = 0;
  cVar1 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x6d0));
  *(char *)(param_1 + 0x768) = cVar1;
  if (cVar1 == '\0') {
    FUN_00441920(&local_10,*(undefined8 *)(param_1 + 0x780));
    FUN_00724380(*(undefined8 *)(param_1 + 0x708),local_10);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0xa8))(*(longlong **)(param_1 + 0x708));
    if (cVar1 != '\0') {
      FUN_00724270(*(undefined8 *)(param_1 + 0x708),&local_20);
      FUN_0043e1a0(&local_18,local_20);
      FUN_00414ad0(param_1 + 0x780,local_18);
      FUN_00416910(local_120,*(undefined8 *)(param_1 + 0x780),0xff);
      FUN_013e8340(param_1,local_120);
    }
  }
  FUN_00414480(&local_20);
  FUN_00414560(&local_18,2);
  return;
}

