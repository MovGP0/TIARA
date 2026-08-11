/* Ghidra address: 008b26f0 */
/* Ghidra symbol: FUN_008b26f0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b26f0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_78 [4];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  iVar3 = *(int *)(param_1 + 0x10);
  uVar6 = *(uint *)(param_1 + 0x14);
  uVar7 = *(uint *)(param_1 + 0x18);
  uVar8 = *(uint *)(param_1 + 0x1c);
  iVar2 = 0;
  piVar4 = local_78;
  do {
    iVar1 = iVar2 * 4;
    *piVar4 = (uint)*(byte *)(*(longlong *)(param_1 + 8) + (longlong)iVar1) +
              (uint)*(byte *)(*(longlong *)(param_1 + 8) + (longlong)(iVar1 + 1)) * 0x100 +
              (uint)*(byte *)(*(longlong *)(param_1 + 8) + (longlong)(iVar1 + 2)) * 0x10000 +
              (uint)*(byte *)(*(longlong *)(param_1 + 8) + (longlong)(iVar1 + 3)) * 0x1000000;
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar2 != 0x10);
  iVar3 = FUN_008b0300(iVar3 + ((uVar8 ^ uVar7) & uVar6 ^ uVar8) + local_78[0] + _DAT_01e267d0,
                       CONCAT71((int7)((ulonglong)piVar4 >> 8),7));
  uVar5 = iVar3 + uVar6;
  iVar3 = FUN_008b0300(uVar8 + ((uVar7 ^ uVar6) & uVar5 ^ uVar7) + local_78[1] + _DAT_01e267d4,0xc);
  uVar9 = iVar3 + uVar5;
  iVar3 = FUN_008b0300(uVar7 + ((uVar6 ^ uVar5) & uVar9 ^ uVar6) + local_78[2] + _DAT_01e267d8,0x11)
  ;
  uVar8 = iVar3 + uVar9;
  iVar3 = FUN_008b0300(uVar6 + ((uVar5 ^ uVar9) & uVar8 ^ uVar5) + local_78[3] + _DAT_01e267dc,0x16)
  ;
  uVar7 = iVar3 + uVar8;
  iVar3 = FUN_008b0300(uVar5 + ((uVar9 ^ uVar8) & uVar7 ^ uVar9) + local_68 + _DAT_01e267e0,7);
  uVar6 = iVar3 + uVar7;
  iVar3 = FUN_008b0300(uVar9 + ((uVar8 ^ uVar7) & uVar6 ^ uVar8) + local_64 + _DAT_01e267e4,0xc);
  uVar5 = iVar3 + uVar6;
  iVar3 = FUN_008b0300(uVar8 + ((uVar7 ^ uVar6) & uVar5 ^ uVar7) + local_60 + _DAT_01e267e8,0x11);
  uVar8 = iVar3 + uVar5;
  iVar3 = FUN_008b0300(uVar7 + ((uVar6 ^ uVar5) & uVar8 ^ uVar6) + local_5c + _DAT_01e267ec,0x16);
  uVar7 = iVar3 + uVar8;
  iVar3 = FUN_008b0300(uVar6 + ((uVar5 ^ uVar8) & uVar7 ^ uVar5) + local_58 + _DAT_01e267f0,7);
  uVar6 = iVar3 + uVar7;
  iVar3 = FUN_008b0300(uVar5 + ((uVar8 ^ uVar7) & uVar6 ^ uVar8) + local_54 + _DAT_01e267f4,0xc);
  uVar5 = iVar3 + uVar6;
  iVar3 = FUN_008b0300(uVar8 + ((uVar7 ^ uVar6) & uVar5 ^ uVar7) + local_50 + _DAT_01e267f8,0x11);
  uVar8 = iVar3 + uVar5;
  iVar3 = FUN_008b0300(uVar7 + ((uVar6 ^ uVar5) & uVar8 ^ uVar6) + local_4c + _DAT_01e267fc,0x16);
  uVar7 = iVar3 + uVar8;
  iVar3 = FUN_008b0300(uVar6 + ((uVar5 ^ uVar8) & uVar7 ^ uVar5) + local_48 + _DAT_01e26800,7);
  uVar6 = iVar3 + uVar7;
  iVar3 = FUN_008b0300(uVar5 + ((uVar8 ^ uVar7) & uVar6 ^ uVar8) + local_44 + _DAT_01e26804,0xc);
  uVar5 = iVar3 + uVar6;
  iVar3 = FUN_008b0300(uVar8 + ((uVar7 ^ uVar6) & uVar5 ^ uVar7) + local_40 + _DAT_01e26808,0x11);
  uVar8 = iVar3 + uVar5;
  iVar3 = FUN_008b0300(uVar7 + ((uVar6 ^ uVar5) & uVar8 ^ uVar6) + local_3c + _DAT_01e2680c,0x16);
  uVar7 = iVar3 + uVar8;
  iVar3 = FUN_008b0300(uVar6 + (uVar8 ^ uVar5 & (uVar7 ^ uVar8)) + local_78[1] + _DAT_01e26810,5);
  uVar6 = iVar3 + uVar7;
  iVar3 = FUN_008b0300(uVar5 + (uVar7 ^ uVar8 & (uVar6 ^ uVar7)) + local_60 + _DAT_01e26814,9);
  uVar5 = iVar3 + uVar6;
  iVar3 = FUN_008b0300(uVar8 + (uVar6 ^ uVar7 & (uVar5 ^ uVar6)) + local_4c + _DAT_01e26818,0xe);
  uVar8 = iVar3 + uVar5;
  iVar3 = FUN_008b0300(uVar7 + (uVar5 ^ uVar6 & (uVar8 ^ uVar5)) + local_78[0] + _DAT_01e2681c,0x14)
  ;
  uVar7 = iVar3 + uVar8;
  iVar3 = FUN_008b0300(uVar6 + (uVar8 ^ uVar5 & (uVar7 ^ uVar8)) + local_64 + _DAT_01e26820,5);
  uVar6 = iVar3 + uVar7;
  iVar3 = FUN_008b0300(uVar5 + (uVar7 ^ uVar8 & (uVar6 ^ uVar7)) + local_50 + _DAT_01e26824,9);
  uVar5 = iVar3 + uVar6;
  iVar3 = FUN_008b0300(uVar8 + (uVar6 ^ uVar7 & (uVar5 ^ uVar6)) + local_3c + _DAT_01e26828,0xe);
  uVar8 = iVar3 + uVar5;
  iVar3 = FUN_008b0300(uVar7 + (uVar5 ^ uVar6 & (uVar8 ^ uVar5)) + local_68 + _DAT_01e2682c,0x14);
  uVar7 = iVar3 + uVar8;
  iVar3 = FUN_008b0300(uVar6 + (uVar8 ^ uVar5 & (uVar7 ^ uVar8)) + local_54 + _DAT_01e26830,5);
  uVar6 = iVar3 + uVar7;
  iVar3 = FUN_008b0300(uVar5 + (uVar7 ^ uVar8 & (uVar6 ^ uVar7)) + local_40 + _DAT_01e26834,9);
  uVar5 = iVar3 + uVar6;
  iVar3 = FUN_008b0300(uVar8 + (uVar6 ^ uVar7 & (uVar5 ^ uVar6)) + local_78[3] + _DAT_01e26838,0xe);
  uVar8 = iVar3 + uVar5;
  iVar3 = FUN_008b0300(uVar7 + (uVar5 ^ uVar6 & (uVar8 ^ uVar5)) + local_58 + _DAT_01e2683c,0x14);
  uVar7 = iVar3 + uVar8;
  iVar3 = FUN_008b0300(uVar6 + (uVar8 ^ uVar5 & (uVar7 ^ uVar8)) + local_44 + _DAT_01e26840,5);
  uVar6 = iVar3 + uVar7;
  iVar3 = FUN_008b0300(uVar5 + (uVar7 ^ uVar8 & (uVar6 ^ uVar7)) + local_78[2] + _DAT_01e26844,9);
  uVar5 = iVar3 + uVar6;
  iVar3 = FUN_008b0300(uVar8 + (uVar6 ^ uVar7 & (uVar5 ^ uVar6)) + local_5c + _DAT_01e26848,0xe);
  uVar8 = iVar3 + uVar5;
  iVar3 = FUN_008b0300(uVar7 + (uVar5 ^ uVar6 & (uVar8 ^ uVar5)) + local_48 + _DAT_01e2684c,0x14);
  uVar7 = iVar3 + uVar8;
  iVar3 = FUN_008b0300(uVar6 + (uVar7 ^ uVar8 ^ uVar5) + local_64 + _DAT_01e26850,4);
  uVar6 = iVar3 + uVar7;
  iVar3 = FUN_008b0300(uVar5 + (uVar6 ^ uVar7 ^ uVar8) + local_58 + _DAT_01e26854,0xb);
  uVar5 = iVar3 + uVar6;
  iVar3 = FUN_008b0300(uVar8 + (uVar5 ^ uVar6 ^ uVar7) + local_4c + _DAT_01e26858,0x10);
  uVar8 = iVar3 + uVar5;
  iVar3 = FUN_008b0300(uVar7 + (uVar8 ^ uVar5 ^ uVar6) + local_40 + _DAT_01e2685c,0x17);
  uVar7 = iVar3 + uVar8;
  iVar3 = FUN_008b0300(uVar6 + (uVar7 ^ uVar8 ^ uVar5) + local_78[1] + _DAT_01e26860,4);
  uVar6 = iVar3 + uVar7;
  iVar3 = FUN_008b0300(uVar5 + (uVar6 ^ uVar7 ^ uVar8) + local_68 + _DAT_01e26864,0xb);
  uVar5 = iVar3 + uVar6;
  iVar3 = FUN_008b0300(uVar8 + (uVar5 ^ uVar6 ^ uVar7) + local_5c + _DAT_01e26868,0x10);
  uVar8 = iVar3 + uVar5;
  iVar3 = FUN_008b0300(uVar7 + (uVar8 ^ uVar5 ^ uVar6) + local_50 + _DAT_01e2686c,0x17);
  uVar7 = iVar3 + uVar8;
  iVar3 = FUN_008b0300(uVar6 + (uVar7 ^ uVar8 ^ uVar5) + local_44 + _DAT_01e26870,4);
  uVar6 = iVar3 + uVar7;
  iVar3 = FUN_008b0300(uVar5 + (uVar6 ^ uVar7 ^ uVar8) + local_78[0] + _DAT_01e26874,0xb);
  uVar5 = iVar3 + uVar6;
  iVar3 = FUN_008b0300(uVar8 + (uVar5 ^ uVar6 ^ uVar7) + local_78[3] + _DAT_01e26878,0x10);
  uVar8 = iVar3 + uVar5;
  iVar3 = FUN_008b0300(uVar7 + (uVar8 ^ uVar5 ^ uVar6) + local_60 + _DAT_01e2687c,0x17);
  uVar7 = iVar3 + uVar8;
  iVar3 = FUN_008b0300(uVar6 + (uVar7 ^ uVar8 ^ uVar5) + local_54 + _DAT_01e26880,4);
  uVar6 = iVar3 + uVar7;
  iVar3 = FUN_008b0300(uVar5 + (uVar6 ^ uVar7 ^ uVar8) + local_48 + _DAT_01e26884,0xb);
  uVar5 = iVar3 + uVar6;
  iVar3 = FUN_008b0300(uVar8 + (uVar5 ^ uVar6 ^ uVar7) + local_3c + _DAT_01e26888,0x10);
  uVar8 = iVar3 + uVar5;
  iVar3 = FUN_008b0300(uVar7 + (uVar8 ^ uVar5 ^ uVar6) + local_78[2] + _DAT_01e2688c,0x17);
  uVar7 = iVar3 + uVar8;
  iVar3 = FUN_008b0300(uVar6 + ((uVar7 | ~uVar5) ^ uVar8) + local_78[0] + _DAT_01e26890,6);
  uVar6 = iVar3 + uVar7;
  iVar3 = FUN_008b0300(uVar5 + ((uVar6 | ~uVar8) ^ uVar7) + local_5c + _DAT_01e26894,10);
  uVar5 = iVar3 + uVar6;
  iVar3 = FUN_008b0300(uVar8 + ((uVar5 | ~uVar7) ^ uVar6) + local_40 + _DAT_01e26898,0xf);
  uVar8 = iVar3 + uVar5;
  iVar3 = FUN_008b0300(uVar7 + ((uVar8 | ~uVar6) ^ uVar5) + local_64 + _DAT_01e2689c,0x15);
  uVar7 = iVar3 + uVar8;
  iVar3 = FUN_008b0300(uVar6 + ((uVar7 | ~uVar5) ^ uVar8) + local_48 + _DAT_01e268a0,6);
  uVar6 = iVar3 + uVar7;
  iVar3 = FUN_008b0300(uVar5 + ((uVar6 | ~uVar8) ^ uVar7) + local_78[3] + _DAT_01e268a4,10);
  uVar5 = iVar3 + uVar6;
  iVar3 = FUN_008b0300(uVar8 + ((uVar5 | ~uVar7) ^ uVar6) + local_50 + _DAT_01e268a8,0xf);
  uVar8 = iVar3 + uVar5;
  iVar3 = FUN_008b0300(uVar7 + ((uVar8 | ~uVar6) ^ uVar5) + local_78[1] + _DAT_01e268ac,0x15);
  uVar7 = iVar3 + uVar8;
  iVar3 = FUN_008b0300(uVar6 + ((uVar7 | ~uVar5) ^ uVar8) + local_58 + _DAT_01e268b0,6);
  uVar6 = iVar3 + uVar7;
  iVar3 = FUN_008b0300(uVar5 + ((uVar6 | ~uVar8) ^ uVar7) + local_3c + _DAT_01e268b4,10);
  uVar5 = iVar3 + uVar6;
  iVar3 = FUN_008b0300(uVar8 + ((uVar5 | ~uVar7) ^ uVar6) + local_60 + _DAT_01e268b8,0xf);
  uVar8 = iVar3 + uVar5;
  iVar3 = FUN_008b0300(uVar7 + ((uVar8 | ~uVar6) ^ uVar5) + local_44 + _DAT_01e268bc,0x15);
  uVar7 = iVar3 + uVar8;
  iVar3 = FUN_008b0300(uVar6 + ((uVar7 | ~uVar5) ^ uVar8) + local_68 + _DAT_01e268c0,6);
  uVar6 = iVar3 + uVar7;
  iVar3 = FUN_008b0300(uVar5 + ((uVar6 | ~uVar8) ^ uVar7) + local_4c + _DAT_01e268c4,10);
  uVar5 = iVar3 + uVar6;
  iVar3 = FUN_008b0300(uVar8 + ((uVar5 | ~uVar7) ^ uVar6) + local_78[2] + _DAT_01e268c8,0xf);
  uVar8 = iVar3 + uVar5;
  iVar3 = FUN_008b0300(uVar7 + ((uVar8 | ~uVar6) ^ uVar5) + local_54 + _DAT_01e268cc,0x15);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar6;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar3 + uVar8;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar8;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + uVar5;
  return;
}

