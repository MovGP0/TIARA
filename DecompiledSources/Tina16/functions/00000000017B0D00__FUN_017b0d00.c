/* Ghidra address: 017b0d00 */
/* Ghidra symbol: FUN_017b0d00 */


int * FUN_017b0d00(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_00498350(param_2,0xfffffffd,0xfffffffd,3,3);
  param_2[2] = param_2[2] + (*(byte *)(param_1 + 0x145) / 0x10) * 4;
  lVar1 = FUN_017ae270(&DAT_017ad878,1,0);
  *(undefined8 *)(lVar1 + 0x14) = *(undefined8 *)(param_1 + 0x18);
  *(undefined1 *)(lVar1 + 0x1c) = *(undefined1 *)(param_1 + 0x147);
  *(undefined1 *)(lVar1 + 0x1d) = 0;
  uVar2 = FUN_017ae4e0(lVar1,param_2);
  *(undefined8 *)param_2 = uVar2;
  uVar2 = FUN_017ae4e0(lVar1,param_2 + 2);
  *(undefined8 *)(param_2 + 2) = uVar2;
  if (param_2[3] < param_2[1]) {
    FUN_017ad610(param_2 + 1,param_2 + 3);
  }
  if (param_2[2] < *param_2) {
    FUN_017ad610(param_2 + 2,param_2);
  }
  FUN_00429ca0(param_2,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  thunk_FUN_0408d40e(param_2,param_2,param_1 + 0x16c);
  FUN_00410f20(lVar1);
  return param_2;
}

