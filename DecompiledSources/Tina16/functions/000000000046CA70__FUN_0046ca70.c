/* Ghidra address: 0046ca70 */
/* Ghidra symbol: FUN_0046ca70 */


ulonglong FUN_0046ca70(ushort *param_1,char param_2)

{
  ulonglong uVar1;
  undefined1 local_18 [14];
  undefined1 local_a [2];
  
  if (param_2 == '\0') {
    uVar1 = (ulonglong)CONCAT11((char)((*param_1 & 0x2000) >> 8),(*param_1 & 0x2000) == 0x2000);
  }
  else {
    uVar1 = FUN_0046c6f0(param_1,local_a,local_18);
  }
  return uVar1;
}

