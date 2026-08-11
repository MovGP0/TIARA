/* Ghidra address: 012b18a0 */
/* Ghidra symbol: FUN_012b18a0 */


void FUN_012b18a0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xce8) + 0x260))(*(longlong **)(param_1 + 0xce8));
  if (iVar2 != -1) {
    plVar1 = *(longlong **)(param_1 + 0xce8);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    uVar4 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
    *(undefined8 *)(param_1 + 0xdd8) = uVar4;
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0xce8) + 0x260))(*(longlong **)(param_1 + 0xce8))
    ;
    (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x118))(*(longlong **)(param_1 + 0xdb8),uVar3);
    if (*(char *)(param_1 + 0xdd0) != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x168))(*(longlong **)(param_1 + 0xdb8));
      FUN_010f6af0(param_1,2,0,1);
    }
  }
  return;
}

