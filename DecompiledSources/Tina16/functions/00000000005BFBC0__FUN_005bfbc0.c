/* Ghidra address: 005bfbc0 */
/* Ghidra symbol: FUN_005bfbc0 */


double FUN_005bfbc0(undefined8 param_1,undefined4 param_2,undefined4 param_3,ushort param_4,
                   ushort param_5,double param_6)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  double dVar4;
  
  if ((((ushort)param_3 == 0) && (param_4 == 0)) && (param_5 == 0)) {
    dVar4 = 0.0;
  }
  else {
    uVar2 = *(ushort *)(&DAT_01de65a4 + (ulonglong)param_4 * 4);
    uVar3 = FUN_00448c80(param_2,param_3,1);
    uVar1 = FUN_005bba80(uVar3);
    if (uVar2 < uVar1) {
      uVar3 = FUN_005bbc50(uVar3,(longlong)(int)((7 - ((uint)uVar1 - (uint)uVar2)) * 0x18));
    }
    else if (uVar1 < uVar2) {
      uVar3 = FUN_005bbc50(uVar3,(longlong)(int)(((uint)uVar2 - (uint)uVar1) * 0x18));
    }
    dVar4 = (double)FUN_005bbc50(uVar3,(longlong)(int)((param_5 - 1) * 0xa8));
    while( true ) {
      uVar2 = FUN_005bba50(dVar4);
      if (uVar2 <= (ushort)param_3) break;
      dVar4 = (double)FUN_005bbc50(dVar4,0xffffffffffffff58);
    }
    dVar4 = dVar4 + param_6;
  }
  return dVar4;
}

