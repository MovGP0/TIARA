/* Ghidra address: 0134f2e0 */
/* Ghidra symbol: FUN_0134f2e0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0134f2e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [40];
  
  DAT_021078b0 = param_2;
  DAT_021078b8 = param_3;
  DAT_02108118 = FUN_004aeac0(param_2,param_3);
  uVar2 = FUN_00b959c0(DAT_02108118);
  DAT_02108110 = (short)uVar2;
  DAT_02108108 = (int)DAT_02108110;
  DAT_02108112 = (short)((uint)uVar2 >> 0x10);
  DAT_0210810c = (int)DAT_02108112;
  DAT_021078bc = DAT_02108108;
  if ((0 < DAT_02108108) && (DAT_021078bc = DAT_02108108 + -2000, DAT_021078bc < 0)) {
    DAT_021078bc = 0;
  }
  DAT_021078c0 = DAT_0210810c;
  if ((0 < DAT_0210810c) && (DAT_021078c0 = DAT_0210810c + -2000, DAT_021078c0 < 0)) {
    DAT_021078c0 = 0;
  }
  DAT_021078c4 = DAT_02108108 - DAT_021078bc;
  DAT_021078c8 = DAT_0210810c - DAT_021078c0;
  DAT_021078c4 = (DAT_021078c4 + 0x7d7) / 8;
  DAT_021078c8 = (DAT_021078c8 + 0x7d7) / 8;
  _DAT_02108110 = uVar2;
  FUN_00419260(&DAT_021078e0,&DAT_0134e7e0,1,(longlong)(DAT_021078c4 * DAT_021078c8));
  iVar4 = DAT_021078c4 * DAT_021078c8;
  DAT_021078d8 = 0;
  if (-1 < iVar4 + -1) {
    do {
      puVar1 = (undefined1 *)(DAT_021078e0 + (longlong)DAT_021078d8 * 8);
      *puVar1 = 1;
      puVar1[1] = 1;
      puVar1[2] = 1;
      DAT_021078d8 = DAT_021078d8 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar3 = FUN_00b94e60(param_1,iVar5);
      FUN_0134ed90(auStack_48,uVar3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  DAT_021078cc = ((DAT_02108108 - DAT_021078bc) + 4) / 8 +
                 (((DAT_0210810c - DAT_021078c0) + 4) / 8) * DAT_021078c4;
  DAT_021080f8 = 1000;
  FUN_00419260(&DAT_021080f0,&DAT_0134e818,1,1000);
  FUN_0134f0b0(auStack_48);
  return;
}

