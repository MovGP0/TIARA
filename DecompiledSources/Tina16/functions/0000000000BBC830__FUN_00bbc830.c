/* Ghidra address: 00bbc830 */
/* Ghidra symbol: FUN_00bbc830 */


void FUN_00bbc830(longlong param_1,longlong *param_2,int param_3,int param_4,int param_5,int param_6
                 ,undefined4 param_7)

{
  int iVar1;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x18))) {
    if (param_6 < *(int *)(param_1 + 0x14)) {
      FUN_00498350(local_48,param_4,param_5,param_4 + *(int *)(param_1 + 0x10),param_5 + param_6);
      iVar1 = (*(int *)(param_1 + 0x14) - param_6) / 2;
      FUN_00498350(local_38,param_3 * *(int *)(param_1 + 0x10),iVar1,
                   (param_3 + 1) * *(int *)(param_1 + 0x10),iVar1 + param_6);
    }
    else {
      FUN_00498350(local_38,param_3 * *(int *)(param_1 + 0x10),0,
                   (param_3 + 1) * *(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14));
      param_5 = param_5 + (param_6 - *(int *)(param_1 + 0x14)) / 2;
      FUN_00498350(local_48,param_4,param_5,param_4 + *(int *)(param_1 + 0x10),
                   param_5 + *(int *)(param_1 + 0x14));
    }
    (**(code **)(*param_2 + 0x78))(param_2,local_48,*(undefined8 *)(param_1 + 8),local_38,param_7);
  }
  return;
}

