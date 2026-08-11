/* Ghidra address: 015aff50 */
/* Ghidra symbol: FUN_015aff50 */


void FUN_015aff50(longlong *param_1,char param_2)

{
  undefined4 uVar1;
  
  FUN_015a93e0(param_1,param_2);
  if (param_2 != '\x03') {
    if (param_2 == '\x04') {
      uVar1 = FUN_015abce0();
      FUN_015abc70(uVar1,param_1[0xc],*(undefined4 *)((longlong)param_1 + 0x44));
    }
    else {
      (**(code **)(*param_1 + 0x70))(param_1);
    }
  }
  return;
}

