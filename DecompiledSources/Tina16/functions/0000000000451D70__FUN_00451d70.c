/* Ghidra address: 00451d70 */
/* Ghidra symbol: FUN_00451d70 */


byte FUN_00451d70(void)

{
  undefined2 uVar1;
  undefined1 local_a;
  undefined1 uStack_9;
  
  uVar1 = FUN_00427ab0();
  local_a = (byte)uVar1;
  uStack_9 = (byte)((ushort)uVar1 >> 8);
  return (local_a ^ uStack_9) & 0xf;
}

