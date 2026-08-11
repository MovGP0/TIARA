/* Ghidra address: 01d01ef0 */
/* Ghidra symbol: FUN_01d01ef0 */


undefined8 *
FUN_01d01ef0(longlong *param_1,undefined8 *param_2,char param_3,char param_4,undefined1 param_5,
            undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_38 = 0;
  local_50 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00414610(param_8);
  (**(code **)(*param_1 + 0x288))(param_1,param_2);
  uVar3 = FUN_019a4600();
  if (param_3 != '\0') {
    FUN_00414480(param_2);
  }
  if (1 < *(int *)((longlong)param_1 + 0x18c)) {
    FUN_0043f750(local_30,*(int *)((longlong)param_1 + 0x18c));
    FUN_00416cd0(param_2,3,*param_2,&DAT_01d0212c,local_30[0]);
  }
  if (param_4 != '\0') {
    cVar1 = FUN_01d01e80(param_1);
    if (cVar1 == '\0') {
      FUN_01d05320(param_1,local_20,param_5,param_7,param_8);
      if (local_20[0] != 0) {
        FUN_01d050c0(param_1,&local_50,param_6);
        local_48 = local_50;
        local_40 = 0x11;
        FUN_00442f70(&local_38,local_20[0],&local_48,0);
        FUN_00414b50(local_20,local_38);
        FUN_00416ad0(param_2,local_20[0]);
      }
    }
  }
  uVar2 = FUN_01d08030(param_1,uVar3);
  if ((uVar2 & 2) != 0) {
    FUN_00416ad0(param_2,&DAT_01d0213c);
  }
  if ((uVar2 & 4) != 0) {
    FUN_00416ad0(param_2,&DAT_01d02150);
  }
  if ((uVar2 & 8) != 0) {
    FUN_00416ad0(param_2,&LAB_01d02164);
  }
  FUN_00414480(&local_50);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  FUN_00414480(&param_8);
  return param_2;
}

