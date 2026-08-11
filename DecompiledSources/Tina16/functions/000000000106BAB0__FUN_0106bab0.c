/* Ghidra address: 0106bab0 */
/* Ghidra symbol: FUN_0106bab0 */


void FUN_0106bab0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  if (*(char *)(param_1 + 0x6f1) == '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_28);
    FUN_00416cd0(&local_20,3,local_28,&LAB_0106bc28,*(undefined8 *)(param_1 + 0x6e8));
    cVar1 = FUN_00440a20(local_20,1);
    *(bool *)(param_1 + 0x6f0) = cVar1 == '\0';
    goto LAB_0106bb97;
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_10);
  if (local_10 == 0) {
LAB_0106bb32:
    uVar2 = 1;
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_18);
    cVar1 = FUN_01055790(local_18);
    if (cVar1 == '\0') goto LAB_0106bb32;
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x6f0) = uVar2;
LAB_0106bb97:
  if (*(char *)(param_1 + 0x6f0) != '\0') {
    FUN_016fd940(*(undefined8 *)(param_1 + 0x6e0));
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_30);
  FUN_00414ad0(param_1 + 0x6d8,local_30);
  FUN_00414560(&local_30,5);
  return;
}

