/* Ghidra address: 00a1d840 */
/* Ghidra symbol: FUN_00a1d840 */


void FUN_00a1d840(longlong *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  param_1[1] = 0;
  if (param_2 != 0x3e) {
    *(undefined8 *)(*param_1 + 0x28) = 0x3e0000000c;
    *(int *)(*param_1 + 0x30) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_3 != 0x208) {
    *(undefined8 *)(*param_1 + 0x28) = 0x20800000015;
    *(int *)(*param_1 + 0x30) = (int)param_3;
    (**(code **)*param_1)(param_1);
  }
  lVar1 = *param_1;
  lVar2 = param_1[3];
  FUN_00626680(param_1 + 1,0,0x200);
  *param_1 = lVar1;
  param_1[3] = lVar2;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_00a0c3d0(param_1);
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[0x3f] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x17] = 0;
  param_1[8] = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 100;
  return;
}

