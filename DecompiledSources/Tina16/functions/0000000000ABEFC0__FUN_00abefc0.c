/* Ghidra address: 00abefc0 */
/* Ghidra symbol: FUN_00abefc0 */


int FUN_00abefc0(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  FUN_00a73da0(*(undefined8 *)(param_1 + 0x38),0,param_4);
  lVar1 = *(longlong *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(longlong *)(lVar1 + 0x28) = param_1;
  uVar3 = FUN_00a74830(lVar1,0,param_3);
  uVar4 = FUN_00a74880(*(undefined8 *)(param_1 + 0x38),param_4,param_3);
  iVar5 = FUN_00a9c0c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_00a748d0(*(undefined8 *)(param_1 + 0x38),uVar3);
  FUN_00a748f0(*(undefined8 *)(param_1 + 0x38),uVar4);
  iVar6 = FUN_00a73fc0(*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x28) = uVar2;
  if (iVar5 < iVar6 - param_3) {
    iVar5 = iVar6 - param_3;
  }
  return iVar5;
}

