/* Ghidra address: 0186dfa0 */
/* Ghidra symbol: FUN_0186dfa0 */


void FUN_0186dfa0(void)

{
  undefined8 uVar1;
  undefined1 local_18 [8];
  undefined **local_10 [2];
  
  DAT_02110514 = DAT_02110514 + -1;
  if (DAT_02110514 == -1) {
    uVar1 = FUN_0197c220();
    local_10[0] = &PTR_FUN_0186c4e8;
    local_18[0] = 3;
    FUN_0197ec60(uVar1,&PTR_FUN_01927248,local_10,0,local_18,0);
    uVar1 = FUN_0197c220();
    local_10[0] = &PTR_FUN_0186c8f0;
    local_18[0] = 3;
    FUN_0197ec60(uVar1,&PTR_FUN_01929d50,local_10,0,local_18,0);
  }
  return;
}

