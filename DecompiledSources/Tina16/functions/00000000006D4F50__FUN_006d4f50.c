/* Ghidra address: 006d4f50 */
/* Ghidra symbol: FUN_006d4f50 */


void FUN_006d4f50(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_00655080(param_1);
  if (param_1[0x95] != 0) {
    cVar1 = FUN_007d53b0(param_1[0x95]);
    if (cVar1 != '\0') {
      uVar2 = FUN_007d56e0(param_1[0x95]);
      FUN_0064fca0(param_1,0x1303,0,uVar2);
    }
  }
  if (((short)param_1[0x9a] != 0) || (*(short *)((longlong)param_1 + 0x4d2) != 0)) {
    FUN_006d58e0(param_1);
  }
  if (param_1[0x97] != 0) {
    (**(code **)(*(longlong *)param_1[0x99] + 0x10))((longlong *)param_1[0x99],param_1[0x97]);
    (**(code **)(*param_1 + 0x278))(param_1,*(undefined4 *)((longlong)param_1 + 0x4b4));
    FUN_00410f20(param_1[0x97]);
    param_1[0x97] = 0;
  }
  return;
}

