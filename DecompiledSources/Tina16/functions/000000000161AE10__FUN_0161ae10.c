/* Ghidra address: 0161ae10 */
/* Ghidra symbol: FUN_0161ae10 */


undefined8 FUN_0161ae10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(int *)(param_1 + 8) == 1) {
    FUN_00416cd0(&local_10,4,&DAT_0161af14,*(undefined8 *)(param_1 + 0x10),&DAT_0161af24,
                 *(undefined8 *)(param_1 + 0x18));
  }
  else if (*(int *)(param_1 + 8) == 0) {
    FUN_00416cd0(&local_10,4,&LAB_0161af34,*(undefined8 *)(param_1 + 0x10),&DAT_0161af24,
                 *(undefined8 *)(param_1 + 0x18));
  }
  else {
    uVar1 = FUN_0043fc00(*(undefined8 *)(param_1 + 0x10));
    FUN_01636fd0(param_3,&local_10,uVar1);
  }
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(&local_10);
  return param_2;
}

