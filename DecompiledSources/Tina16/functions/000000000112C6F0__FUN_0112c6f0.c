/* Ghidra address: 0112c6f0 */
/* Ghidra symbol: FUN_0112c6f0 */


undefined8 FUN_0112c6f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0112b910(param_2);
  lVar1 = FUN_005c05d0(*(undefined8 *)PTR_DAT_020041f0,uVar2,0);
  uVar2 = FUN_005bbcb0(uVar2,lVar1 * -1000);
  FUN_0112b8b0(param_1,uVar2);
  return param_1;
}

