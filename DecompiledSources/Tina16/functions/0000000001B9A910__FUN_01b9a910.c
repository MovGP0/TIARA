/* Ghidra address: 01b9a910 */
/* Ghidra symbol: FUN_01b9a910 */


void FUN_01b9a910(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x810) + 0xa9) != '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x818),&local_28);
    uVar3 = FUN_0043ea00(local_20,local_28);
    if (local_20[0] != 0) {
      uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      goto LAB_01b9a970;
    }
  }
  uVar1 = 0;
LAB_01b9a970:
  (**(code **)(**(longlong **)(param_1 + 0x820) + 0x128))(*(longlong **)(param_1 + 0x820),uVar1);
  uVar3 = FUN_006d5120(*(undefined8 *)(param_1 + 0x7e0));
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))
            (*(longlong **)(param_1 + 0x6e0),
             CONCAT71((int7)((ulonglong)uVar3 >> 8),(int)uVar3 == 0) & 0xffffffff);
  iVar2 = FUN_006d5120(*(undefined8 *)(param_1 + 0x7e0));
  FUN_007e2da0(*(undefined8 *)(param_1 + 0x868),0 < iVar2);
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

