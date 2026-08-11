/* Ghidra address: 00653f50 */
/* Ghidra symbol: FUN_00653f50 */


void FUN_00653f50(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x70));
  iVar1 = thunk_FUN_041b570f(uVar2);
  if (iVar1 != 0) {
    uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x70));
    lVar3 = thunk_FUN_03de17fb(uVar2);
    if (lVar3 == 0) {
      uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x70));
      thunk_FUN_03e49910(uVar2,&local_28);
      local_2c = *(int *)(*(longlong *)(param_1 + 0x70) + 0x98);
      local_30 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x9c);
      FUN_00650bc0(*(undefined8 *)(param_1 + 0x70),&local_2c,&local_30);
      if (((*(int *)(*(longlong *)(param_1 + 0x70) + 0x98) == local_20 - local_28) &&
          (*(int *)(*(longlong *)(param_1 + 0x70) + 0x9c) == local_1c - local_24)) &&
         ((local_2c != *(int *)(*(longlong *)(param_1 + 0x70) + 0x98) ||
          (local_30 != *(int *)(*(longlong *)(param_1 + 0x70) + 0x9c))))) {
        uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x70));
        thunk_FUN_041cc6e2(uVar2,0,0,0,*(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x98),
                           *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x9c),0x16);
      }
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x108))(*(longlong **)(param_1 + 0x70));
      return;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  pcVar4 = (code *)FUN_00411550(uVar2,0xffee);
  (*pcVar4)(uVar2);
  return;
}

