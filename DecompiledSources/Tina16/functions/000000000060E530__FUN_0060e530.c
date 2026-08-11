/* Ghidra address: 0060e530 */
/* Ghidra symbol: FUN_0060e530 */


void FUN_0060e530(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    FUN_00410f20(uVar1);
  }
  FUN_0041b800(param_1 + 0x60);
  FUN_004b9ec0(*(undefined8 *)(param_1 + 0x58));
  *(undefined1 *)(param_1 + 0x7c) = 1;
  uVar1 = FUN_0041b800(param_1 + 0x60);
  (**(code **)(*DAT_02011f90 + 0x90))(DAT_02011f90,param_2,2,uVar1);
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))
            (*(longlong **)(param_1 + 0x60),param_1 + 0x48,param_1 + 0x4c);
  return;
}

