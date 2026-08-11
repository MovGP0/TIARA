/* Ghidra address: 00bbc6e0 */
/* Ghidra symbol: FUN_00bbc6e0 */


void FUN_00bbc6e0(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  int iVar1;
  undefined8 uVar2;
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
    uVar2 = FUN_00609e10(*(undefined8 *)(param_1 + 8));
    FUN_005fead0(param_2,local_48,uVar2,local_38);
  }
  return;
}

