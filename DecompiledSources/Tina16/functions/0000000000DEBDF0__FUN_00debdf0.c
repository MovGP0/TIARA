/* Ghidra address: 00debdf0 */
/* Ghidra symbol: FUN_00debdf0 */


ulonglong FUN_00debdf0(byte *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 unaff_RBX;
  
  if (*(char *)(param_3 + 0x328) == '\0') {
    FUN_016ddcd0(param_2,param_3,*(ushort *)(param_1 + 2) + 1,*(ushort *)(param_1 + 2) + 2,param_4,0
                );
  }
  else {
    FUN_016de220(param_2,param_3,*param_1 + 1,1,param_4,0);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1) & 0xffffffff;
}

