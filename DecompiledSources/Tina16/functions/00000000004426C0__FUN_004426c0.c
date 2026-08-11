/* Ghidra address: 004426c0 */
/* Ghidra symbol: FUN_004426c0 */


int FUN_004426c0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  
  while( true ) {
    uVar1 = *param_1;
    if ((uVar1 != *param_2) || (uVar1 == 0)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return (uint)uVar1 - (uint)*param_2;
}

