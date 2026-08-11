/* Ghidra address: 00a0bfc0 */
/* Ghidra symbol: FUN_00a0bfc0 */


undefined8 FUN_00a0bfc0(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x24);
  if ((uVar1 & 0xfffffffe) != 200) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x14;
    *(uint *)(lVar2 + 0x2c) = uVar1;
    (**(code **)*param_1)(param_1);
  }
  uVar4 = FUN_00a0c030(param_1);
  if ((int)uVar4 == 2) {
    if (param_2 != 0) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x33;
      (*(code *)*puVar3)(param_1);
    }
    FUN_00a1bd30(param_1);
    uVar4 = 2;
  }
  else if ((int)uVar4 == 1) {
    uVar4 = 1;
  }
  return uVar4;
}

