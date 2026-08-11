/* Ghidra address: 00407770 */
/* Ghidra symbol: FUN_00407770 */


int FUN_00407770(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 local_68 [24];
  ulonglong local_50;
  
  plVar5 = (longlong *)(param_1 + -0x20);
  FUN_00407690();
  lVar1 = *plVar5;
  plVar2 = *(longlong **)(param_1 + -0x18);
  if ((*(ulonglong *)(param_1 + -8) & 8) == 0) {
    iVar3 = thunk_FUN_04184b1a(plVar5,0,0x8000);
    if (iVar3 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = 0;
    }
  }
  else {
    uVar6 = *(ulonglong *)(param_1 + -8) & 0xfffffffffffffff0;
    iVar3 = 0;
    while( true ) {
      thunk_FUN_0413c1ac(plVar5,local_68,0x30);
      iVar4 = thunk_FUN_04184b1a(plVar5,0,0x8000);
      if (iVar4 == 0) break;
      if (uVar6 <= local_50) goto LAB_0040780b;
      uVar6 = uVar6 - local_50;
      plVar5 = (longlong *)((longlong)plVar5 + local_50);
    }
    iVar3 = -1;
  }
LAB_0040780b:
  if (iVar3 == 0) {
    *plVar2 = lVar1;
    *(longlong **)(lVar1 + 8) = plVar2;
  }
  DAT_0200ac40 = 0;
  return iVar3;
}

