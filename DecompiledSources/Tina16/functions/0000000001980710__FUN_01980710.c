/* Ghidra address: 01980710 */
/* Ghidra symbol: FUN_01980710 */


void FUN_01980710(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x208) != 0) {
    *(undefined4 *)(param_1 + 0x18) = param_2;
    uVar1 = FUN_01980680(param_1);
    FUN_019789b0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1a0),uVar1);
    FUN_01976b70(*(undefined8 *)(param_1 + 8));
    FUN_01980530(param_1);
  }
  return;
}

