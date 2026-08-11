/* Ghidra address: 014fba60 */
/* Ghidra symbol: FUN_014fba60 */


bool FUN_014fba60(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 local_120 [16];
  int local_110 [2];
  int local_108;
  
  uVar2 = FUN_01aa16f0(*(undefined8 *)(param_1 + 0x550));
  FUN_014f9d60(local_110,uVar2);
  FUN_014f9dc0(local_120,uVar2);
  lVar3 = (longlong)local_110[0];
  cVar1 = *(char *)(param_1 + 0x587 + lVar3);
  bVar4 = cVar1 != *(char *)(param_1 + 0x567 + lVar3);
  if (bVar4) {
    FUN_01aa3960(param_1,local_108,param_1 + -0x1e0 + (longlong)local_108 * 0x788,param_2,
                 *(undefined8 *)(*(longlong *)(param_1 + 8) + 8),cVar1);
    *(char *)(param_1 + 0x567 + lVar3) = cVar1;
  }
  return bVar4;
}

