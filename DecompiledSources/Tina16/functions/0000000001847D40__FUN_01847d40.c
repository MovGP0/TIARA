/* Ghidra address: 01847d40 */
/* Ghidra symbol: FUN_01847d40 */


void FUN_01847d40(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  FUN_00411a80(param_1,param_2);
  iVar2 = FUN_01847410();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xa8);
      uVar4 = FUN_01847630(param_1,iVar5);
      uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1,uVar4);
      (**(code **)(*plVar1 + 0x98))(plVar1,uVar3);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x90));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x98));
  FUN_01847380(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

