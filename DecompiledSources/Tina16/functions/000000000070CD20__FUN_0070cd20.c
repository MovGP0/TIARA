/* Ghidra address: 0070cd20 */
/* Ghidra symbol: FUN_0070cd20 */


undefined4 *
FUN_0070cd20(longlong param_1,undefined4 *param_2,int param_3,undefined8 param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined1 local_48 [4];
  int local_44;
  undefined1 local_3f;
  
  FUN_0040d200(local_48,0x20,0);
  uVar1 = FUN_00786090(param_1);
  thunk_FUN_041b2403(uVar1,0x417,(longlong)param_3,local_48);
  FUN_0040d200(param_2,0x30,0);
  *param_2 = 0x30;
  param_2[1] = 0xf;
  param_2[10] = param_5;
  *(undefined8 *)(param_2 + 8) = param_4;
  uVar1 = FUN_00786090(param_1);
  thunk_FUN_041b2403(uVar1,0x43f,(longlong)local_44,param_2);
  *(undefined1 *)((longlong)param_2 + 0x11) = local_3f;
  if (*(char *)(param_1 + 0x50) == '\0') {
    uVar1 = FUN_00786090(param_1);
    thunk_FUN_041b2403(uVar1,1099,(longlong)local_44,*(undefined8 *)(param_2 + 8));
  }
  return param_2;
}

