/* Ghidra address: 01b25ce0 */
/* Ghidra symbol: FUN_01b25ce0 */


void FUN_01b25ce0(void)

{
  undefined8 local_20 [2];
  undefined8 local_10 [2];
  
  DAT_02110ce4 = DAT_02110ce4 + -1;
  if (DAT_02110ce4 == -1) {
    DAT_02110ce8 = FUN_01b28f60(&PTR_FUN_01b1c658,1,1);
    *(undefined1 *)(DAT_02110ce8 + 0x50) = 1;
    local_10[0] = FUN_01b26920(&PTR_FUN_01b19d40,1,0);
    FUN_00597e50(DAT_02110ce8 + 8,local_10);
    local_20[0] = FUN_01b26920(&PTR_FUN_01b19d40,1,0);
    FUN_00597e50(DAT_02110ce8 + 8,local_20);
  }
  return;
}

