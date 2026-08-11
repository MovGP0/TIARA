/* Ghidra address: 010caf00 */
/* Ghidra symbol: FUN_010caf00 */


void FUN_010caf00(longlong param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  short sVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  int local_10;
  int local_c;
  
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  uVar2 = FUN_010cb120(param_1,&local_c);
  *param_3 = uVar2;
  FUN_010ca040(param_1,local_20,1);
  sVar1 = *(short *)(*(longlong *)(param_1 + 0x18) + -2 + (longlong)*(int *)(param_1 + 8) * 2);
  if ((local_c == 0) && (sVar1 != 0x2f)) {
    FUN_0043f750(&local_30,*(undefined4 *)(param_1 + 0x10));
    FUN_00416ba0(&local_28,L"/ expected, lineno: ",local_30);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_28);
    sVar1 = FUN_004134c0(uVar2);
  }
  if ((local_c == 0) && (sVar1 == 0x2f)) {
    FUN_010c9e60(param_1);
    uVar2 = FUN_010cb120(param_1,&local_10);
    *param_4 = uVar2;
    FUN_010ca040(param_1,&local_38,1);
    if (local_c != local_10) {
      FUN_0043f750(&local_48,*(undefined4 *)(param_1 + 0x10));
      FUN_00416ba0(&local_40,L"Wrong ramp data section, lineno: ",local_48);
      uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_40);
      FUN_004134c0(uVar2);
    }
  }
  *param_2 = local_c;
  FUN_00414560(&local_48,6);
  return;
}

