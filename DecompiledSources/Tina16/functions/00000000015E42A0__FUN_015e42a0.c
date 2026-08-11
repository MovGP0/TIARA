/* Ghidra address: 015e42a0 */
/* Ghidra symbol: FUN_015e42a0 */


void FUN_015e42a0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(short *)(param_1 + 0x1c0) != 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_3,1);
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
      FUN_004095f0(*(undefined8 *)(param_1 + 0x1b0));
    }
    uVar1 = FUN_004095c0((longlong)*(int *)(param_1 + 0x1c4));
    *(undefined8 *)(param_1 + 0x1b0) = uVar1;
    (**(code **)(*param_2 + 0x18))
              (param_2,*(undefined8 *)(param_1 + 0x1b0),*(undefined4 *)(param_1 + 0x1c4));
  }
  return;
}

