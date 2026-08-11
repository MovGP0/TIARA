/* Ghidra address: 01521e20 */
/* Ghidra symbol: FUN_01521e20 */


undefined8 FUN_01521e20(undefined8 param_1,undefined4 param_2,byte param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  longlong *plVar4;
  uint uVar5;
  
  cVar1 = FUN_01995600(param_1,0,0);
  if (cVar1 == '\0') {
    FUN_01d426b0(2000,&LAB_01521efc);
  }
  plVar4 = (longlong *)FUN_01995660(param_1,param_2,0);
  while( true ) {
    if ((*PTR_DAT_02002ce0 != '\0') || (plVar4 == (longlong *)0x0)) {
      return 1;
    }
    uVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    cVar1 = FUN_01d3f2d0(uVar3);
    if ((cVar1 != '\0') || (uVar3 == 0x464)) break;
    uVar5 = (uint)uVar3;
    bVar2 = FUN_01d40050(uVar3);
    if ((param_3 & bVar2) != 0) {
      return 0;
    }
    if (((uVar5 < 1000) && (cVar1 = FUN_01aa12d0(uVar5), cVar1 != '\0')) || (0x7fffffff < uVar5)) {
      return 0;
    }
    FUN_01995800(param_1,param_2,0);
    plVar4 = (longlong *)FUN_01995660(param_1,param_2);
  }
  return 0;
}

