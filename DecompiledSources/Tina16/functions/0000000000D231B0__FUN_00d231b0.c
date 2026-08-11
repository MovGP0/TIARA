/* Ghidra address: 00d231b0 */
/* Ghidra symbol: FUN_00d231b0 */


void FUN_00d231b0(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_00cd5760(param_1,param_2);
  if ((char)param_2 != '\x03') {
    if ((char)param_2 == '\x04') {
      uVar1 = FUN_00cd7960();
      FUN_00cd7950(uVar1,param_1[0xc],*(undefined4 *)((longlong)param_1 + 0x44));
    }
    else {
      (**(code **)(*param_1 + 0x70))(param_1);
    }
  }
  return;
}

