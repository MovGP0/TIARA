/* Ghidra address: 0065b270 */
/* Ghidra symbol: FUN_0065b270 */


void FUN_0065b270(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x370) != 0) {
      param_2 = param_2 - *(int *)(*(longlong *)(lVar2 + 0x370) + 0x10);
    }
    iVar3 = FUN_004aeba0(*(undefined8 *)(lVar2 + 0x378),param_1);
    if (-1 < iVar3) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x378);
      iVar1 = *(int *)(lVar2 + 0x10);
      if (param_2 < 0) {
        param_2 = 0;
      }
      if (iVar1 <= param_2) {
        param_2 = iVar1 + -1;
      }
      if (param_2 != iVar3) {
        FUN_004ae870(lVar2,iVar3);
        FUN_004aec30(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x378),param_2,param_1);
      }
    }
    if (*(longlong *)(param_1 + 0x468) != 0) {
      if (param_2 == 0) {
        uVar4 = 1;
      }
      else {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x378);
        if (param_2 == *(int *)(lVar2 + 0x10) + -1) {
          uVar4 = 0;
        }
        else if (iVar3 < param_2) {
          uVar4 = FUN_004aeac0(lVar2,param_2 + 1);
          uVar4 = FUN_0065b870(uVar4);
        }
        else {
          if (iVar3 <= param_2) {
            return;
          }
          uVar4 = FUN_004aeac0(lVar2,param_2);
          uVar4 = FUN_0065b870(uVar4);
        }
      }
      thunk_FUN_041cc6e2(*(undefined8 *)(param_1 + 0x468),uVar4,0,0,0,0,3);
    }
  }
  return;
}

