/* Ghidra address: 01c87d20 */
/* Ghidra symbol: FUN_01c87d20 */


undefined8 FUN_01c87d20(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0xd08),0);
  FUN_01c87e40(param_1,param_1);
  if ((*PTR_DAT_020052b8 != '\0') && (*(longlong *)PTR_DAT_02002da0 != 0)) {
    FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02002da0 + 0x6f0),0);
    FUN_0132b070(*(undefined8 *)PTR_DAT_02002da0,0);
  }
  if ((*(char *)(param_1 + 0x182e) == '\0') && (*(char *)(param_1 + 0x27c1) == '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

