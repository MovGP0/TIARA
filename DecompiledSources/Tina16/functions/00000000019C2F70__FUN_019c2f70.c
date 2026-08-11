/* Ghidra address: 019c2f70 */
/* Ghidra symbol: FUN_019c2f70 */


void FUN_019c2f70(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_40 = *param_2;
  uStack_38 = param_2[1];
  uStack_30 = param_2[2];
  local_58 = *param_3;
  uStack_50 = param_3[1];
  uStack_48 = param_3[2];
  FUN_004179d0(&local_40,&DAT_019bf1e0);
  FUN_004179d0(&local_58,&DAT_019bf1e0);
  iVar2 = FUN_019c30b0(param_1,&local_40);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar2 * 8);
  iVar2 = FUN_004aeba0(uVar1,local_40);
  if (iVar2 == -1) {
    FUN_004ae7e0(uVar1,local_40);
  }
  iVar2 = FUN_004aeba0(uVar1,local_58);
  if (iVar2 == -1) {
    FUN_004ae7e0(uVar1,local_58);
  }
  FUN_00417840(&local_58,&DAT_019bf1e0,2);
  return;
}

