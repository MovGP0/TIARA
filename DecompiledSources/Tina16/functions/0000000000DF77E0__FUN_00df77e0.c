/* Ghidra address: 00df77e0 */
/* Ghidra symbol: FUN_00df77e0 */


void FUN_00df77e0(longlong param_1,longlong param_2,char param_3,ulonglong param_4,double param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  uVar4 = FUN_01b05600(param_1,**(undefined1 **)(lVar2 + 8));
  uVar5 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar2 + 8) + 1));
  uVar6 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar2 + 8) + 2));
  uVar7 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar2 + 8) + 3));
  uVar8 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar2 + 8) + 4));
  uVar9 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar2 + 8) + 5));
  uVar10 = FUN_01b05690(param_1,param_4 & 0xffffffff,1);
  uVar11 = FUN_01b05690(param_1,param_4 & 0xffffffff,2);
  puVar3 = *(undefined8 **)(lVar2 + 0x18);
  uVar12 = *puVar3;
  uVar13 = puVar3[1];
  uVar1 = puVar3[3];
  if ((param_3 == '\x01') || (param_3 == '\x05')) {
    FUN_017dc6a0(*(undefined8 *)(param_2 + 0xd8),0,uVar1,uVar4,uVar5);
    FUN_017dc990(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,uVar4,uVar5,uVar11);
    FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0xbff0000000000000,uVar5,uVar6,uVar10);
    FUN_017dca30(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,uVar10,uVar9,uVar7);
    FUN_017dc6a0(*(undefined8 *)(param_2 + 0xd8),0,uVar1,uVar7,uVar8);
    FUN_017dc990(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,uVar7,uVar8,uVar10);
    FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0xbff0000000000000,uVar8,uVar9,uVar11);
    FUN_017dca30(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,uVar11,uVar6,uVar4);
  }
  else if (param_3 == '\x06') {
    FUN_017dc6a0(*(undefined8 *)(param_2 + 0xd8),0,uVar1,uVar4,uVar5);
    FUN_017dc990(*(undefined8 *)(param_2 + 0xd8),0,uVar12,uVar4,uVar5,
                 *(undefined4 *)(param_2 + 0x308));
    FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,uVar5,uVar6,uVar10);
    FUN_017dc6a0(*(undefined8 *)(param_2 + 0xd8),0,uVar1,uVar7,uVar8);
    FUN_017dc990(*(undefined8 *)(param_2 + 0xd8),0,uVar13,uVar7,uVar8,
                 *(undefined4 *)(param_2 + 0x308));
    FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,uVar8,uVar9,uVar11);
  }
  else if (param_3 == '\b') {
    uVar12 = FUN_00c43c40(param_5 * (double)puVar3[2],0x401921fb54442d18);
    uVar13 = FUN_0040bcd0(uVar12);
    uVar14 = FUN_0040bdd0(uVar12);
    uVar14 = uVar14 ^ 0x8000000000000000;
    FUN_017dc6a0(*(undefined8 *)(param_2 + 0xd8),0,uVar1,uVar4,uVar5);
    FUN_017dc990(*(undefined8 *)(param_2 + 0xd8),0,uVar13,uVar4,uVar5,uVar11);
    FUN_017dc990(*(undefined8 *)(param_2 + 0xd8),1,uVar14,uVar4,uVar5,uVar11);
    FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0xbff0000000000000,uVar5,uVar6,uVar10);
    FUN_017dca30(*(undefined8 *)(param_2 + 0xd8),0,uVar13,uVar10,uVar9,uVar7);
    FUN_017dca30(*(undefined8 *)(param_2 + 0xd8),1,uVar14,uVar10,uVar9,uVar7);
    FUN_017dc6a0(*(undefined8 *)(param_2 + 0xd8),0,uVar1,uVar7,uVar8);
    FUN_017dc990(*(undefined8 *)(param_2 + 0xd8),0,uVar13,uVar7,uVar8,uVar10);
    FUN_017dc990(*(undefined8 *)(param_2 + 0xd8),1,uVar14,uVar7,uVar8,uVar10);
    FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0xbff0000000000000,uVar8,uVar9,uVar11);
    FUN_017dca30(*(undefined8 *)(param_2 + 0xd8),0,uVar13,uVar11,uVar6,uVar4);
    FUN_017dca30(*(undefined8 *)(param_2 + 0xd8),1,uVar14,uVar11,uVar6,uVar4);
  }
  return;
}

