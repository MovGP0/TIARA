/* Ghidra address: 006fdf90 */
/* Ghidra symbol: FUN_006fdf90 */


void FUN_006fdf90(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = FUN_00414d00(uVar1);
  FUN_00414740(param_1 + 0x4b8,uVar1,uVar2);
  return;
}

