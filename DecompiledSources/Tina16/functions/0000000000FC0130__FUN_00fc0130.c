/* Ghidra address: 00fc0130 */
/* Ghidra symbol: FUN_00fc0130 */


void FUN_00fc0130(longlong param_1,undefined8 param_2)

{
  double *pdVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [4];
  
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
            (*(longlong **)(param_1 + 0x6b0),*(undefined4 *)(param_1 + 0xb88));
  (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x268))
            (*(longlong **)(param_1 + 0x6d8),*(undefined4 *)(param_1 + 0xb8c));
  (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))
            (*(longlong **)(param_1 + 0x6e8),*(undefined4 *)(param_1 + 0xb90));
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x268))
            (*(longlong **)(param_1 + 0x700),*(undefined4 *)(param_1 + 0xb94));
  FUN_004169a0(local_40,param_1 + 0xbd9);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x728),local_40[0]);
  FUN_004169a0(&local_48,param_1 + 0xbc4);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x738),local_48);
  *(undefined8 *)(param_1 + 0x798) = 0x40a2c00000000000;
  *(undefined8 *)(param_1 + 0x7a0) = 0x40b2c00000000000;
  *(undefined8 *)(param_1 + 0x7a8) = 0x40c2c00000000000;
  *(undefined8 *)(param_1 + 0x7b0) = 0x40cc200000000000;
  *(undefined8 *)(param_1 + 0x7b8) = 0x40d2c00000000000;
  *(undefined8 *)(param_1 + 0x7c0) = 0x40dc200000000000;
  *(undefined8 *)(param_1 + 0x7c8) = 0x40e2c00000000000;
  *(undefined8 *)(param_1 + 2000) = 0x40ec200000000000;
  *(undefined8 *)(param_1 + 0x7d8) = 0x40f2c00000000000;
  *(undefined8 *)(param_1 + 0x7e0) = 0x40fc200000000000;
  *(undefined8 *)(param_1 + 0x7e8) = 0x410c200000000000;
  *(undefined8 *)(param_1 + 0x7f0) = 0x410e848000000000;
  *(undefined8 *)(param_1 + 0x7f8) = 0x411e848000000000;
  *(undefined8 *)(param_1 + 0x800) = 0x412e848000000000;
  dVar6 = *(double *)(param_1 + 0xcc8) / 4096.0;
  *(undefined4 *)(param_1 + 0x808) = 0;
  bVar3 = false;
  iVar4 = 0;
  do {
    if ((!bVar3) && (dVar6 <= *(double *)(param_1 + 0x798 + (longlong)iVar4 * 8))) {
      *(int *)(param_1 + 0x808) = iVar4;
      bVar3 = true;
    }
    pdVar1 = (double *)(param_1 + 0x798 + (longlong)iVar4 * 8);
    if (*pdVar1 <= dVar6 && dVar6 != *pdVar1) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 0x4f0);
      (**(code **)(*plVar2 + 0x98))(plVar2,0);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xe);
  dVar6 = *(double *)(param_1 + 0xcc8);
  iVar5 = 0;
  iVar4 = 0;
  do {
    if ((dVar6 / 8.0) * 1.1 < *(double *)(param_1 + 0x798 + (longlong)iVar4 * 8)) {
      if (iVar5 == 0) {
        iVar5 = iVar4 + -1;
      }
      *(undefined8 *)(param_1 + 0x798 + (longlong)iVar4 * 8) =
           *(undefined8 *)(param_1 + 0x798 + (longlong)iVar5 * 8);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 0x4f0);
      (**(code **)(*plVar2 + 0x98))(plVar2,(iVar5 - *(int *)(param_1 + 0x808)) + 1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xe);
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
            (*(longlong **)(param_1 + 0x6b0),*(undefined4 *)(param_1 + 0xb88));
  (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x268))
            (*(longlong **)(param_1 + 0x6d8),*(undefined4 *)(param_1 + 0xb8c));
  (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))
            (*(longlong **)(param_1 + 0x6e8),*(undefined4 *)(param_1 + 0xb90));
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x268))
            (*(longlong **)(param_1 + 0x700),*(undefined4 *)(param_1 + 0xb94));
  *(undefined4 *)(param_1 + 0x80c) = *(undefined4 *)(param_1 + 0xb98);
  *(undefined4 *)(param_1 + 0x818) = *(undefined4 *)(param_1 + 0xb9c);
  *(undefined4 *)(param_1 + 0x81c) = *(undefined4 *)(param_1 + 0xba0);
  *(undefined8 *)(param_1 + 0x820) = *(undefined8 *)(param_1 + 0xba8);
  *(undefined4 *)(param_1 + 0x82c) = *(undefined4 *)(param_1 + 0xbbc);
  *(int *)(param_1 + 0x828) = *(int *)(param_1 + 0xbc0);
  FUN_0043f750(&local_50,*(int *)(param_1 + 0xbc0) * 0x100 + *(int *)(param_1 + 0x82c));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x718),local_50);
  FUN_00fc0a10(param_1,param_2);
  FUN_00fc0910(param_1,param_2);
  FUN_00414560(&local_50,3);
  return;
}

