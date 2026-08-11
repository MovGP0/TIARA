/* Ghidra address: 00ea13c0 */
/* Ghidra symbol: FUN_00ea13c0 */


int FUN_00ea13c0(ushort *param_1,byte *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    uVar1 = *param_1;
    uVar2 = (ushort)*param_2;
    if (uVar1 != uVar2) break;
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return ((uVar2 < uVar1) - 1) + (uint)(uVar2 < uVar1);
}

