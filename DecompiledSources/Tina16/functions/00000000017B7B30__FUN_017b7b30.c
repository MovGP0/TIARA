/* Ghidra address: 017b7b30 */
/* Ghidra symbol: FUN_017b7b30 */


undefined8 * FUN_017b7b30(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar3 = FUN_017ae270(&DAT_017ad878,1,0);
  *(undefined8 *)(lVar3 + 0x14) = *(undefined8 *)(param_1 + 0x18);
  *(undefined1 *)(lVar3 + 0x1c) = *(undefined1 *)(param_1 + 0x78);
  uVar4 = FUN_00498310(0,0);
  *param_2 = uVar4;
  uVar1 = FUN_0040c840((double)*(int *)(param_1 + 0x70) / (double)*(float *)(param_1 + 0x7c));
  uVar2 = FUN_0040c840((double)*(int *)(param_1 + 0x74) / (double)*(float *)(param_1 + 0x7c));
  local_30 = FUN_00498310(uVar1,uVar2);
  uVar4 = FUN_017ae4e0(lVar3,&local_30);
  param_2[1] = uVar4;
  FUN_00429ca0(param_2,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  FUN_00410f20(lVar3);
  FUN_017ad620(&local_40,param_2);
  *param_2 = local_40;
  param_2[1] = uStack_38;
  return param_2;
}

