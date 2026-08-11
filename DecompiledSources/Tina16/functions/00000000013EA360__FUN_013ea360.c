/* Ghidra address: 013ea360 */
/* Ghidra symbol: FUN_013ea360 */


void FUN_013ea360(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))(*(longlong **)(param_1 + 0x6c8));
  FUN_006d8180(*(undefined8 *)(param_1 + 0x6d0),uVar3);
  iVar6 = 0;
  while( true ) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4a0);
    iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (iVar4 <= iVar6) break;
    cVar2 = FUN_00821920(*(undefined8 *)(param_1 + 0x6c8),iVar6);
    if (cVar2 != '\0') break;
    iVar6 = iVar6 + 1;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4a0);
  uVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x128))
            (*(longlong **)(param_1 + 0x6b0),
             CONCAT71((int7)((ulonglong)uVar5 >> 8),iVar6 < (int)uVar5) & 0xffffffff);
  return;
}

