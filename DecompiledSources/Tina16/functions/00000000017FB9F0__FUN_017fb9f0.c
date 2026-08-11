/* Ghidra address: 017fb9f0 */
/* Ghidra symbol: FUN_017fb9f0 */


void FUN_017fb9f0(void)

{
  char cVar1;
  
  cVar1 = FUN_017fe590(*(undefined8 *)PTR_DAT_02001d08,DAT_02110168,1,0);
  if (cVar1 != '\0') {
    (**(code **)(*DAT_02110168 + 0x90))(DAT_02110168);
  }
  cVar1 = FUN_017fe590(*(undefined8 *)PTR_DAT_02001d08,DAT_02110170,2,0);
  if (cVar1 != '\0') {
    (**(code **)(*DAT_02110170 + 0x90))(DAT_02110170);
  }
  return;
}

