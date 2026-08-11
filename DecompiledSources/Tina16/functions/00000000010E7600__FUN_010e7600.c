/* Ghidra address: 010e7600 */
/* Ghidra symbol: FUN_010e7600 */


void FUN_010e7600(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined1 local_48 [40];
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_010eb5d0(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x98));
      FUN_010eb630(param_1,*(int *)(*(longlong *)(param_1 + 0x18) + 0x9c) - param_2);
    }
    FUN_010e8460(param_1,local_48,2);
    FUN_01acf9e0(lVar1,local_48);
    *PTR_DAT_02002478 = 1;
    local_50 = FUN_00498310(0,0);
    FUN_01ace140(lVar1,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x68),&local_50);
    FUN_01acfa60(lVar1);
    uVar2 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x10));
    uVar3 = FUN_0064d120(*(undefined8 *)(param_1 + 0x10));
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0xf8))
              (*(longlong **)(param_1 + 0x68),0,0,uVar2,uVar3);
    FUN_01aceb90(lVar1,1);
    uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x10));
    thunk_FUN_04015890(uVar4,0);
    *PTR_DAT_02002478 = 0;
    uVar2 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x10));
    *(undefined4 *)(lVar1 + 0x104) = uVar2;
    uVar2 = FUN_0064d120(*(undefined8 *)(param_1 + 0x10));
    *(undefined4 *)(lVar1 + 0x100) = uVar2;
  }
  return;
}

