/* Ghidra address: 01b53340 */
/* Ghidra symbol: FUN_01b53340 */


void FUN_01b53340(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_0064de00(*(undefined8 *)(param_1 + 0x730),*(undefined8 *)(PTR_DAT_02004010 + 0x914));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x738),*(undefined8 *)(PTR_DAT_02004010 + 0x91c));
  (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))
            (*(longlong **)(param_1 + 0x708),*(undefined4 *)(PTR_DAT_02004010 + 0x934));
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*plVar2 + 0x60))(plVar2,*(undefined8 *)(PTR_DAT_02004010 + 0x92c));
  FUN_00410f20(plVar2);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 0x4f0);
  (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_1 + 0x5570));
  iVar4 = 0;
  while( true ) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 0x4f0);
    iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (iVar1 <= iVar4) break;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 0x4f0);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,iVar4);
    iVar1 = FUN_0043e650(local_30,*(undefined8 *)(PTR_DAT_02004010 + 0x924));
    if (iVar1 == 0) break;
    iVar4 = iVar4 + 1;
  }
  if (*(longlong *)(PTR_DAT_02004010 + 0x924) != 0) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 0x4f0);
    iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (iVar4 < iVar1) {
      (**(code **)(**(longlong **)(param_1 + 0x700) + 0x268))(*(longlong **)(param_1 + 0x700),iVar4)
      ;
      goto LAB_01b534e4;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x268))(*(longlong **)(param_1 + 0x700),0);
LAB_01b534e4:
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 0x4f0);
  uVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
  (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))
            (*(longlong **)(param_1 + 0x710),
             CONCAT71((int7)((ulonglong)uVar3 >> 8),0 < (int)uVar3) & 0xffffffff);
  FUN_007fdf10(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x6d0) + 0x9c));
  FUN_00414560(&local_30,3);
  return;
}

