/* Ghidra address: 018b18a0 */
/* Ghidra symbol: FUN_018b18a0 */


void FUN_018b18a0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_018af290(param_1);
  if ((*(uint *)(*(longlong *)(lVar2 + 0x220) + 10) & 0x8000) == 0) {
LAB_018b18d8:
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_018af290(param_1);
    if (*(char *)(*(longlong *)(lVar2 + 0x220) + 9) == '\0') goto LAB_018b18d8;
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)*(longlong *)(lVar2 + 0x220) >> 8),1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x818) + 0x118))(*(longlong **)(param_1 + 0x818),uVar1);
  lVar2 = FUN_018af290(param_1);
  if ((*(uint *)(*(longlong *)(lVar2 + 0x220) + 10) & 0x10000) == 0) {
LAB_018b1925:
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_018af290(param_1);
    if (*(char *)(*(longlong *)(lVar2 + 0x220) + 9) == '\0') goto LAB_018b1925;
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)*(longlong *)(lVar2 + 0x220) >> 8),1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x820) + 0x118))(*(longlong **)(param_1 + 0x820),uVar1);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x848) + 0x4b0);
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x10) < 1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x818) + 0xe8))(*(longlong **)(param_1 + 0x818),uVar1);
  if (*(char *)(*(longlong *)(param_1 + 0x818) + 0xd9) != '\0') {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x848) + 0x2c0))(*(longlong **)(param_1 + 0x848))
    ;
    if ((char)uVar3 != '\0') {
      uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      goto LAB_018b19a7;
    }
  }
  uVar1 = 0;
LAB_018b19a7:
  (**(code **)(**(longlong **)(param_1 + 0x820) + 0xe8))(*(longlong **)(param_1 + 0x820),uVar1);
  uVar1 = FUN_007dc5f0(0x43,4);
  (**(code **)(**(longlong **)(param_1 + 0x818) + 0x120))(*(longlong **)(param_1 + 0x818),uVar1);
  uVar1 = FUN_007dc5f0(0x56,4);
  (**(code **)(**(longlong **)(param_1 + 0x820) + 0x120))(*(longlong **)(param_1 + 0x820),uVar1);
  return;
}

