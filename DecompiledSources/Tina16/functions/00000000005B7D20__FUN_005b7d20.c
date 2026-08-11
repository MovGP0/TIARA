/* Ghidra address: 005b7d20 */
/* Ghidra symbol: FUN_005b7d20 */


undefined8 FUN_005b7d20(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
    iVar1 = *(int *)(param_1 + 0x44);
    *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 0x10);
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 8 + (longlong)iVar1 * 0x10);
    *param_3 = uVar2;
    uVar3 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
  }
  return uVar3;
}

