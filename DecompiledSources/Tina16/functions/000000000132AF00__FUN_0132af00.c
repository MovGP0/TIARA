/* Ghidra address: 0132af00 */
/* Ghidra symbol: FUN_0132af00 */


void FUN_0132af00(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  double dVar1;
  undefined1 local_118 [256];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  dVar1 = (double)FUN_0040c2f0(0x4024000000000000);
  dVar1 = (double)FUN_0040af80((double)(*param_4 / 9 + -6) * dVar1,
                               (longlong)*param_4 % 9 & 0xffffffff);
  *(double *)(PTR_DAT_02004010 + 0x7e0) = (double)(*param_4 % 9 + 1) * dVar1;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),*(undefined8 *)(PTR_DAT_02004010 + 0x7e0));
  FUN_01c88850(*(undefined8 *)(param_1 + 0x708));
  FUN_0040e840(local_118,*param_4);
  FUN_004169a0(&local_18,local_118);
  FUN_00416ba0(&local_10,&DAT_0132b06c,local_18);
  FUN_013a4ea0(*(undefined8 *)PTR_DAT_020032b8,&local_10);
  FUN_013a4910(*(undefined8 *)PTR_DAT_020032b8);
  FUN_00414560(&local_18,2);
  return;
}

