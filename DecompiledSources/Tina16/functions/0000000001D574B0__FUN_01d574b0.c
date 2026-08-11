/* Ghidra address: 01d574b0 */
/* Ghidra symbol: FUN_01d574b0 */


void FUN_01d574b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  
  dVar1 = *(double *)(param_3 + 0x748);
  dVar2 = *(double *)(param_3 + 0x6a8);
  dVar3 = *(double *)(param_3 + 0x728);
  uVar4 = FUN_016ee490(param_2,*(char *)(param_1 + 0x18) + '\x02',1,0);
  FUN_016edfa0(param_2,param_3,uVar4,*(undefined8 *)(param_1 + 0x10),
               ((dVar1 * 1000.0) / dVar2) * dVar3);
  return;
}

