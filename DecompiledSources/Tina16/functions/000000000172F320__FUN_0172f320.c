/* Ghidra address: 0172f320 */
/* Ghidra symbol: FUN_0172f320 */


void FUN_0172f320(undefined8 param_1,undefined8 param_2,uint param_3,byte param_4,longlong param_5,
                 undefined8 param_6,undefined1 param_7,undefined8 param_8,undefined1 param_9)

{
  undefined8 uVar1;
  undefined1 local_5d [26];
  undefined1 local_43 [35];
  
  uVar1 = FUN_0172a2b0(&DAT_01728b68,1,*(undefined8 *)PTR_DAT_02001f18);
  FUN_0172a910(uVar1,*(int *)(param_5 + 0x14) + (param_3 & 0xffff) * 0x1a + 2);
  FUN_0172a920(uVar1,local_5d,0x1a);
  FUN_00415020(param_6,local_5d,param_7);
  FUN_0172a910(uVar1,*(int *)(param_5 + 0x10) + (uint)param_4 * 0x1b + 1);
  FUN_0172a920(uVar1,local_43,0x1b);
  FUN_00415020(param_8,local_43,param_9);
  FUN_00410f20(uVar1);
  return;
}

