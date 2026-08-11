/* Ghidra address: 0154d5a0 */
/* Ghidra symbol: FUN_0154d5a0 */


void FUN_0154d5a0(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 longlong param_5,longlong *param_6)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  FUN_00414610(param_5);
  lVar2 = FUN_01571ef0(*(undefined8 *)(param_1 + 0x750),param_2);
  *param_6 = lVar2;
  if (*param_6 != 0) goto LAB_0154d746;
  lVar2 = FUN_015710a0(&DAT_0156d6c8,1,param_2,*(undefined1 *)(param_1 + 0x94e));
  *param_6 = lVar2;
  FUN_01571eb0(*(undefined8 *)(param_1 + 0x750),*param_6);
  FUN_00414b50(&local_10,param_5);
  cVar1 = FUN_015755e0(*(undefined8 *)(param_1 + 0x8d0),param_2,&local_18);
  if (cVar1 == '\0') {
LAB_0154d6c0:
    if ((param_5 != 0) && (1 < param_4)) {
      if (*(char *)(param_1 + 0x94b) == '\0') {
        FUN_01d43440(&local_20,param_3);
        FUN_00416cd0(&local_10,3,param_5,&LAB_0154d7c0,local_20);
      }
      else {
        FUN_00414b50(&local_10,param_5);
      }
    }
  }
  else {
    cVar1 = FUN_01574cc0(local_18);
    if (cVar1 == '\0') goto LAB_0154d6c0;
    lVar2 = FUN_01574cd0(local_18,0);
    if (*(char *)(param_1 + 0x800) == '\0') {
      FUN_015f44d0(&local_10,*(undefined8 *)(lVar2 + 8));
    }
    else {
      FUN_015f44d0(&local_10,*(undefined8 *)(lVar2 + 0x10));
    }
  }
  FUN_01571520(*param_6,local_10);
  *(undefined4 *)(*param_6 + 0x5c) = 2;
LAB_0154d746:
  FUN_015714d0(*param_6,2);
  FUN_00414480(&local_20);
  FUN_00414480(&local_10);
  FUN_00414480(&param_5);
  return;
}

