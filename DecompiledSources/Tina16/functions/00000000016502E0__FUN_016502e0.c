/* Ghidra address: 016502e0 */
/* Ghidra symbol: FUN_016502e0 */


void FUN_016502e0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  longlong local_40 [4];
  
  uVar2 = FUN_00b92140(0);
  FUN_016ee260(param_1,local_40,0xd0,0);
  lVar1 = FUN_016ea6c0(param_1,1);
  *(undefined8 *)(local_40[0] + 0x20) = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(local_40[0] + 0x50) = *(undefined8 *)(lVar1 + 0x28);
  FUN_0164ef00(local_40[0],param_1,param_2,param_3);
  dVar3 = (double)FUN_00b92140(uVar2);
  *(double *)PTR_DAT_02004968 = dVar3 + *(double *)PTR_DAT_02004968;
  return;
}

