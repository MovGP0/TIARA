/* Ghidra address: 015ca570 */
/* Ghidra symbol: FUN_015ca570 */


void FUN_015ca570(longlong *param_1,byte param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  if (9 < param_2) {
    uVar2 = FUN_015b59b0(&PTR_FUN_015b5818,1,5,param_1);
    FUN_004134c0(uVar2);
  }
  *(byte *)((longlong)param_1 + 0x244) = param_2;
  uVar1 = FUN_015c0b90(param_2);
  *(undefined1 *)((longlong)param_1 + 0x245) = uVar1;
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}

