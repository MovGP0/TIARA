/* Ghidra address: 0098b430 */
/* Ghidra symbol: FUN_0098b430 */


undefined8 FUN_0098b430(longlong param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + -4) >> 1;
  }
  if (*(uint *)(param_1 + 0x1c) == uVar3) {
    *param_2 = 0;
    uVar2 = 0;
  }
  else {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    uVar1 = *(undefined2 *)
             (*(longlong *)(param_1 + 0x10) + -2 + (longlong)*(int *)(param_1 + 0x1c) * 2);
    *param_2 = uVar1;
    uVar2 = CONCAT71((uint7)(byte)((ushort)uVar1 >> 8),1);
  }
  return uVar2;
}

