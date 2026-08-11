/* Ghidra address: 00caf660 */
/* Ghidra symbol: FUN_00caf660 */


void FUN_00caf660(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  (**(code **)(*param_1 + 0x90))(param_1,0,0);
  FUN_00c8ac30(param_1[0x21]);
  do {
    iVar1 = FUN_00cae370(param_1,0,0xffffffff,1);
    if (iVar1 < 1) {
      (**(code **)(*param_1 + 0x110))(param_1,1);
    }
    else {
      FUN_00c8ac30(param_1[0x21]);
    }
    FUN_00c8c8a0(&PTR_FUN_00c8c438);
  } while( true );
}

