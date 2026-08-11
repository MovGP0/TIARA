/* Ghidra address: 00a3dd90 */
/* Ghidra symbol: FUN_00a3dd90 */


void FUN_00a3dd90(longlong *param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 == '\x03') {
    if (DAT_01e726a0 == 0) {
      DAT_01e726a0 = FUN_00608c80(&PTR_FUN_005f92e8,1);
      FUN_0060bbf0(DAT_01e726a0,3);
    }
    uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
    uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    (**(code **)(*param_1 + 0x10))(param_1,DAT_01e726a0);
    (**(code **)(*param_1 + 0x88))(param_1,uVar1);
    (**(code **)(*param_1 + 0x70))(param_1,uVar2);
  }
  else {
    FUN_0060bbf0(param_1);
  }
  return;
}

