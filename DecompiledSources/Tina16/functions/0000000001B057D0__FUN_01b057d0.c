/* Ghidra address: 01b057d0 */
/* Ghidra symbol: FUN_01b057d0 */


int FUN_01b057d0(longlong param_1,ushort param_2)

{
  int unaff_EBX;
  
  if ((param_2 == 0) || (*(ushort *)(param_1 + 10) < param_2)) {
    FUN_01b04d70(0x216,&LAB_01b05818,0);
  }
  else {
    unaff_EBX = *(int *)(param_1 + 0x84) + (uint)param_2 + -1;
  }
  return unaff_EBX;
}

