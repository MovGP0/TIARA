/* Ghidra address: 00a02aa0 */
/* Ghidra symbol: FUN_00a02aa0 */


void FUN_00a02aa0(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_009f4460();
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (lVar1 == 0) {
      iVar2 = FUN_009fa080(lVar3,param_2);
      if (iVar2 < 0) {
        iVar2 = FUN_009fa080(lVar3,0xffffffff);
      }
      lVar3 = FUN_009fa100(lVar3,iVar2);
      uVar4 = (**(code **)(*(longlong *)(lVar3 + 0x18) + 8))
                        (*(longlong *)(lVar3 + 0x18),1,param_1 + 0x10,param_1 + 0x18,param_2,param_3
                        );
      *(undefined8 *)(param_1 + 0x28) = uVar4;
    }
    else if (*(int *)(lVar1 + 0x18) != param_2) {
      *(int *)(lVar1 + 0x18) = param_2;
      *(undefined4 *)(lVar1 + 0x1c) = param_3;
      iVar2 = FUN_009fa080(lVar3,param_2);
      if (iVar2 < 0) {
        iVar2 = FUN_009fa080(lVar3,0xffffffff);
      }
      lVar3 = FUN_009fa100(lVar3,iVar2);
      uVar4 = FUN_00a01840(*(undefined8 *)(lVar3 + 0x18),1,lVar1);
      *(undefined8 *)(param_1 + 0x28) = uVar4;
      FUN_00410f20(lVar1);
    }
  }
  return;
}

