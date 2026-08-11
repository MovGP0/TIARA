/* Ghidra address: 0147c450 */
/* Ghidra symbol: FUN_0147c450 */


undefined8 FUN_0147c450(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00448ed0();
  lVar1 = FUN_005c05d0(*(undefined8 *)PTR_DAT_020041f0,uVar2,0);
  uVar2 = FUN_005bbcb0(uVar2,lVar1 * -1000);
  uVar2 = FUN_005bbff0(uVar2,1);
  FUN_0043f780(param_1,uVar2);
  return param_1;
}

