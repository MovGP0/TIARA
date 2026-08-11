/* Ghidra address: 005bff30 */
/* Ghidra symbol: FUN_005bff30 */


bool FUN_005bff30(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_005bbcb0(param_2,param_3 * 1000);
  cVar1 = FUN_005bbeb0(*(undefined8 *)(param_1 + 0x58),uVar2);
  return cVar1 < '\0';
}

