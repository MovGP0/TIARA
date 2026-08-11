/* Ghidra address: 011ac230 */
/* Ghidra symbol: FUN_011ac230 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011ac230(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  *(undefined4 *)PTR_DAT_02004708 = 2000;
  if (*(longlong *)PTR_DAT_020013a0 == 0) {
    iVar5 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764);
    iVar2 = 1;
    puVar3 = PTR_DAT_020013a0;
    if (0 < iVar5) {
      do {
        FUN_00416780(puVar3,iVar2 + 0x40);
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + -1;
        puVar3 = puVar3 + 8;
      } while (iVar5 != 0);
    }
  }
  DAT_01f2a640 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) * -2 + 0x14;
  FUN_0043f750(local_30,DAT_01f2a640);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),local_30[0]);
  _DAT_0210723c = *(undefined4 *)(*(longlong *)PTR_DAT_02001d60 + 0x71c);
  _DAT_02107240 = *(undefined4 *)(*(longlong *)PTR_DAT_02001d60 + 0x718);
  FUN_00526500(0x4000000000000000,(double)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764));
  iVar5 = FUN_0040c770();
  _DAT_02107238 = iVar5;
  FUN_008483e0(*(undefined8 *)(param_1 + 0x700),*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) + 1)
  ;
  FUN_00848a70(*(undefined8 *)(param_1 + 0x700),iVar5 + 1);
  FUN_008486b0(*(undefined8 *)(param_1 + 0x700),
               *(undefined4 *)(*(longlong *)PTR_DAT_02003af0 + 0x764));
  FUN_00848790(*(undefined8 *)(param_1 + 0x700),1);
  iVar5 = 1;
  puVar4 = (undefined8 *)PTR_DAT_020013a0;
  do {
    FUN_00414ad0(&PTR_DAT_01f2a648 + (8 - iVar5),*puVar4);
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar5 != 9);
  iVar5 = 0x100;
  puVar1 = &DAT_02107244;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x768);
  iVar2 = 0;
  if (-1 < iVar5 + -1) {
    do {
      (&DAT_02107244)[*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x7cc + (longlong)iVar2 * 4)] = 1;
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_011abdd0(param_1,DAT_021071e0);
  FUN_00414480(local_30);
  return;
}

