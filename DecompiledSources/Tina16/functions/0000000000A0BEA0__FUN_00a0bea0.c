/* Ghidra address: 00a0bea0 */
/* Ghidra symbol: FUN_00a0bea0 */


void FUN_00a0bea0(longlong *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  param_1[1] = 0;
  if (param_2 != 0x3e) {
    *(undefined8 *)(*param_1 + 0x28) = 0x3e0000000c;
    *(int *)(*param_1 + 0x30) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_3 != 0x278) {
    *(undefined8 *)(*param_1 + 0x28) = 0x27800000015;
    *(int *)(*param_1 + 0x30) = (int)param_3;
    (**(code **)*param_1)(param_1);
  }
  lVar1 = *param_1;
  lVar2 = param_1[3];
  FUN_00626680(param_1 + 1,0,0x270);
  *param_1 = lVar1;
  param_1[3] = lVar2;
  *(undefined4 *)(param_1 + 4) = 1;
  FUN_00a0c3d0(param_1);
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[0x32] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_00a19da0(param_1);
  FUN_00a0d750(param_1);
  *(undefined4 *)((longlong)param_1 + 0x24) = 200;
  return;
}

