/* Ghidra address: 016baff0 */
/* Ghidra symbol: FUN_016baff0 */


int FUN_016baff0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 local_128;
  undefined8 local_120 [2];
  int local_10c;
  undefined1 local_108 [256];
  
  local_120[0] = 0;
  local_128 = 0;
  FUN_016baf80(param_1,local_108);
  FUN_004154b0(local_120,local_108,0);
  FUN_00416880(&local_128,local_120[0]);
  iVar1 = FUN_0040e860(local_128,&local_10c);
  if (local_10c != 0) {
    FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0xe,local_108,0xffffffff);
  }
  if ((iVar1 < param_2) || (param_3 < iVar1)) {
    FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0x1f,local_108,0xffffffff);
  }
  FUN_00414480(&local_128);
  FUN_004144d0(local_120);
  return iVar1;
}

