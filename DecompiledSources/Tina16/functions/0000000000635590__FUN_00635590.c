/* Ghidra address: 00635590 */
/* Ghidra symbol: FUN_00635590 */


uint FUN_00635590(ushort param_1,ushort param_2,ushort param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_78 [96];
  
  if (param_3 == 0) {
    dVar6 = (double)((uint)param_2 * 0x100 - (uint)param_2) / 240.0;
    dVar8 = dVar6;
    dVar7 = dVar6;
  }
  else {
    if (120.0 < (double)param_2) {
      dVar8 = (double)((uint)param_2 + (uint)param_3) -
              ((double)((uint)param_2 * (uint)param_3) + 120.0) / 240.0;
    }
    else {
      dVar8 = ((double)((uint)param_2 * (param_3 + 0xf0)) + 120.0) / 240.0;
    }
    dVar7 = (double)((uint)param_2 * 2) - dVar8;
    iVar1 = FUN_00635480(dVar7,dVar8,(double)param_1 + 80.0);
    dVar6 = ((double)(iVar1 * 0xff) + 120.0) / 240.0;
    iVar1 = FUN_00635480(dVar7,dVar8,(double)param_1);
    iVar2 = FUN_00635480(dVar7,dVar8,(double)param_1 - 80.0);
    dVar8 = ((double)(iVar1 * 0xff) + 120.0) / 240.0;
    dVar7 = ((double)(iVar2 * 0xff) + 120.0) / 240.0;
  }
  uVar3 = FUN_00635560(auStack_78,dVar6);
  uVar4 = FUN_00635560(auStack_78,dVar8);
  uVar5 = FUN_00635560(auStack_78,dVar7);
  return uVar3 & 0xff | (uVar4 & 0xff) << 8 | (uVar5 & 0xff) << 0x10;
}

