/* Ghidra address: 00c0e8f0 */
/* Ghidra symbol: FUN_00c0e8f0 */


void FUN_00c0e8f0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    uVar2 = FUN_00bf2c10(param_1);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x490) + 0x70);
    (**(code **)(*plVar1 + 0x10))(plVar1,uVar2);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),
                 *(undefined4 *)(param_1 + 200));
    (**(code **)(param_1 + 0x6f0))
              (*(undefined8 *)(param_1 + 0x6f8),param_1,*(undefined8 *)(param_1 + 0x490));
  }
  return;
}

