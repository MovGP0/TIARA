/* Ghidra address: 018987e0 */
/* Ghidra symbol: FUN_018987e0 */


longlong FUN_018987e0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_2 + 0x38);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_2 + 8);
    lVar2 = 0;
    if ((lVar4 != 0) && (lVar4 != *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x6f8))) {
      lVar2 = FUN_018987e0(param_1,lVar4);
    }
    if ((lVar2 == 0) &&
       (*(longlong *)(param_2 + 8) == *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x6f8))) {
      *(undefined1 *)(param_1 + 0x4f) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x4f) = 2;
    }
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x550);
    uVar3 = FUN_01897f20(&PTR_FUN_01894f80,1,uVar1,param_2);
    lVar4 = FUN_006defe0(uVar1,uVar3,lVar2,*(undefined8 *)(param_2 + 0x40),0,
                         *(undefined1 *)(param_1 + 0x4f));
    *(longlong *)(lVar4 + 0x40) = param_2;
    FUN_006dc990(lVar4,*(undefined8 *)(param_2 + 0x28));
    FUN_006dcbd0(lVar4,*(undefined4 *)(param_2 + 0x30));
    FUN_006dcca0(lVar4,*(undefined4 *)(param_2 + 0x34));
    *(longlong *)(*(longlong *)(lVar4 + 0x40) + 0x38) = lVar4;
  }
  return lVar4;
}

