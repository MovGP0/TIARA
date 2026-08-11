/* Ghidra address: 00a99eb0 */
/* Ghidra symbol: FUN_00a99eb0 */


longlong FUN_00a99eb0(longlong *param_1)

{
  short sVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x100))(param_1);
  sVar1 = FUN_0065bc10(uVar2);
  return (longlong)sVar1;
}

