/* Ghidra address: 01528790 */
/* Ghidra symbol: FUN_01528790 */


/* WARNING: Removing unreachable block (ram,0x015287ba) */

void FUN_01528790(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_017d9ab0(*(undefined8 *)(param_1 + 0xd8),0);
  if (*(char *)(param_1 + 0x325) == '\0') {
    FUN_01af25b0(*(undefined8 *)(param_1 + 0xf10),0,&LAB_0152889c,2);
    FUN_016f5430(param_1,1,0);
    FUN_01af25b0(*(undefined8 *)(param_1 + 0xf10),0,&DAT_0152889a,0);
    FUN_017d9ab0(*(undefined8 *)(param_1 + 0xd8),0);
    if (*(char *)(param_1 + 0x324) != '\0') {
      uVar1 = FUN_01b04b70(&PTR_FUN_01af3038,1,param_1);
      FUN_004134c0(uVar1);
    }
  }
  return;
}

