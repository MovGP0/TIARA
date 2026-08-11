/* Ghidra address: 00af4890 */
/* Ghidra symbol: FUN_00af4890 */


ulonglong FUN_00af4890(undefined8 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  uint uVar2;
  ushort uVar3;
  ulonglong uVar4;
  
  uVar3 = (ushort)param_2;
  uVar1 = (undefined2)((uint)param_2 >> 0x10);
  uVar4 = (ulonglong)CONCAT22(uVar1,uVar3 - 0x30);
  if ((9 < (ushort)(uVar3 - 0x30)) &&
     (uVar4 = (ulonglong)CONCAT22(uVar1,uVar3 - 0x41), 0x19 < (ushort)(uVar3 - 0x41))) {
    uVar2 = CONCAT22(uVar1,uVar3 - 0x61);
    uVar4 = (ulonglong)uVar2;
    if (0x19 < (ushort)(uVar3 - 0x61)) {
      return (ulonglong)CONCAT31((int3)(uVar2 >> 8),0xbf < uVar3);
    }
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}

