/* Ghidra address: 00461840 */
/* Ghidra symbol: FUN_00461840 */


void FUN_00461840(ushort *param_1,ushort *param_2)

{
  if (param_1 != param_2) {
    if ((*param_2 & 0xbfe8) == 0) {
      if ((*param_1 & 0xbfe8) != 0) {
        FUN_00460ac0(param_1);
      }
      FUN_00409a70(param_2,param_1,0x18);
    }
    else {
      FUN_00461700(param_1,param_2);
    }
  }
  return;
}

