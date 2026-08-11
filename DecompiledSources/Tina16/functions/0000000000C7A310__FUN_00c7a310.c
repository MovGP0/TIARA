/* Ghidra address: 00c7a310 */
/* Ghidra symbol: FUN_00c7a310 */


undefined1 FUN_00c7a310(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 uVar5;
  
  lVar2 = FUN_00c7a690(param_1);
  lVar1 = *(longlong *)(param_1 + 0x1e0);
  if (lVar1 != lVar2) {
    thunk_FUN_041b2403(lVar1,2,0,0);
    *(longlong *)(param_1 + 0x1e0) = lVar2;
    uVar3 = thunk_FUN_04118143(*(undefined8 *)(param_1 + 0x1e0),0xfffffffc);
    *(undefined8 *)(param_1 + 0x270) = uVar3;
    thunk_FUN_03c9d277(*(undefined8 *)(param_1 + 0x1e0),0xfffffffc,*(undefined8 *)(param_1 + 0x268))
    ;
  }
  lVar4 = FUN_00c7a6e0(param_1);
  if ((*(longlong *)(param_1 + 0x1d8) != lVar4) || (uVar5 = 0, lVar1 != lVar2)) {
    thunk_FUN_041b2403(*(longlong *)(param_1 + 0x1d8),2,0,0);
    *(longlong *)(param_1 + 0x1d8) = lVar4;
    uVar3 = thunk_FUN_04118143(*(undefined8 *)(param_1 + 0x1d8),0xfffffffc);
    *(undefined8 *)(param_1 + 0x260) = uVar3;
    thunk_FUN_03c9d277(*(undefined8 *)(param_1 + 0x1d8),0xfffffffc,*(undefined8 *)(param_1 + 600));
    uVar5 = 1;
  }
  return uVar5;
}

