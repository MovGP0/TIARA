/* Ghidra address: 01400210 */
/* Ghidra symbol: FUN_01400210 */


undefined8 FUN_01400210(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = -1;
  iVar4 = 0;
  FUN_00414480(param_2);
  while (iVar5 < param_3) {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x6f0) + 0x4a0);
    iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (iVar3 <= iVar4) break;
    cVar2 = FUN_0068bca0(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x6f0),iVar4);
    if (cVar2 != '\0') {
      iVar5 = iVar5 + 1;
    }
    iVar4 = iVar4 + 1;
  }
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x6f0) + 0x4a0);
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2,iVar4 + -1);
  return param_2;
}

