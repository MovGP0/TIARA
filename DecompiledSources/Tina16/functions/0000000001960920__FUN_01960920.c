/* Ghidra address: 01960920 */
/* Ghidra symbol: FUN_01960920 */


undefined8
FUN_01960920(longlong param_1,undefined8 param_2,double param_3,double param_4,double param_5,
            double param_6)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  iVar2 = FUN_0040c770((*(double *)(*(longlong *)(param_1 + 0x1c0) + 0x40) * param_5 - 1.0) / 2.0);
  iVar3 = FUN_0040c770((*(double *)(*(longlong *)(param_1 + 0x1c0) + 0x40) * param_5) / 2.0);
  iVar4 = FUN_0040c770((*(double *)(*(longlong *)(param_1 + 0x1c0) + 0x40) * param_6 - 1.0) / 2.0);
  iVar5 = FUN_0040c770((*(double *)(*(longlong *)(param_1 + 0x1c0) + 0x40) * param_6) / 2.0);
  dVar6 = (double)FUN_019508b0(param_1);
  local_5c = FUN_0040c770(dVar6 * param_5 + param_3);
  dVar6 = (double)FUN_01950860(param_1);
  local_58 = FUN_0040c770(dVar6 * param_6 + param_4);
  lVar1 = *(longlong *)(param_1 + 0x1c0);
  if (*(char *)(lVar1 + 0x2c) == '\0') {
    local_54 = FUN_0040c770(*(double *)(param_1 + 0xa8) * param_5);
    local_50 = FUN_0040c770(*(double *)(param_1 + 0xb0) * param_6);
  }
  else {
    local_54 = FUN_0040c770((*(double *)(param_1 + 0xa8) - *(double *)(lVar1 + 0x30)) * param_5);
    local_50 = FUN_0040c770((*(double *)(param_1 + 0xb0) -
                            *(double *)(*(longlong *)(param_1 + 0x1c0) + 0x30)) * param_6);
  }
  local_50 = local_58 + local_50;
  local_54 = local_5c + local_54;
  if ((*(byte *)(lVar1 + 0x3d) & 1) != 0) {
    local_5c = local_5c + iVar2;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x1c0) + 0x3d) & 2) != 0) {
    local_54 = local_54 - iVar3;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x1c0) + 0x3d) & 4) != 0) {
    local_58 = local_58 + iVar4;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x1c0) + 0x3d) & 8) != 0) {
    local_50 = local_50 - iVar5;
  }
  iVar2 = FUN_0040c770(*(double *)(param_1 + 0x2e0) * param_5);
  iVar3 = FUN_0040c770(*(double *)(param_1 + 0x2e8) * param_6);
  FUN_00498350(param_2,local_5c + iVar2,local_58 + iVar3,(local_54 - iVar2) + 1,
               (local_50 - iVar3) + 1);
  return param_2;
}

