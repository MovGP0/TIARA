/* Ghidra address: 00726630 */
/* Ghidra symbol: FUN_00726630 */


bool FUN_00726630(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar8;
  ulonglong uVar7;
  
  if (*(longlong *)(param_1 + 0x108) == 0) {
    *(undefined4 *)(param_1 + 0x128) = 0x100;
    *(code **)(param_1 + 0x150) = FUN_00726310;
    uVar4 = FUN_00652880(&PTR_FUN_00721fa0,1,0);
    *(undefined8 *)(param_1 + 0x88) = uVar4;
    lVar1 = *(longlong *)(param_1 + 0x88);
    *(longlong *)(lVar1 + 0x490) = param_1;
    uVar3 = FUN_00427ab0();
    uVar7 = lVar1 + 0x498;
    thunk_FUN_0413b16e(uVar3,FUN_007265f0,uVar7);
    uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x118) = uVar4;
    bVar2 = 0;
    puVar5 = &DAT_01e05a20;
    do {
      if (bVar2 < 0x10) {
        uVar6 = (int)CONCAT62((int6)(uVar7 >> 0x10),1) << (bVar2 & 0x1f);
        uVar7 = (ulonglong)uVar6;
        bVar8 = ((ushort)uVar6 & *(ushort *)(param_1 + 0xd0)) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        uVar7 = (ulonglong)*puVar5;
        *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | *puVar5;
      }
      bVar2 = bVar2 + 1;
      puVar5 = puVar5 + 1;
    } while (bVar2 != 0xd);
    if (*(longlong *)(param_1 + 200) != 0) {
      *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | 0x200;
      *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 200);
    }
    DAT_01e050f0 = param_1;
    uVar4 = (**(code **)(param_1 + 0x100))(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x108) = uVar4;
    bVar8 = *(longlong *)(param_1 + 0x108) != 0;
  }
  else {
    thunk_FUN_041775c2(*(longlong *)(param_1 + 0x108));
    bVar8 = true;
  }
  return bVar8;
}

