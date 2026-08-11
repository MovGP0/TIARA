/* Ghidra address: 008ec2e0 */
/* Ghidra symbol: FUN_008ec2e0 */


ushort FUN_008ec2e0(undefined8 param_1,byte param_2)

{
  ushort uVar1;
  
  if (param_2 < 0xa0) {
    uVar1 = (ushort)param_2;
  }
  else {
    uVar1 = *(ushort *)(&DAT_01e288ac + (ulonglong)param_2 * 2);
  }
  return uVar1;
}

