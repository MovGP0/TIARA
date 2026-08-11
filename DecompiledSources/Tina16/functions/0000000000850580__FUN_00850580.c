/* Ghidra address: 00850580 */
/* Ghidra symbol: FUN_00850580 */


undefined8 FUN_00850580(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  code *pcVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x508);
  pcVar3 = (code *)FUN_00411550(uVar1,0xffc5);
  cVar2 = (*pcVar3)(uVar1);
  if (cVar2 == '\0') {
    FUN_004238d0(param_2,*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x518),0,
                 *(int *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
  }
  else {
    FUN_004238d0(param_2,0,0,*(undefined4 *)(param_1 + 0x518),*(undefined4 *)(param_1 + 0x9c));
  }
  return param_2;
}

