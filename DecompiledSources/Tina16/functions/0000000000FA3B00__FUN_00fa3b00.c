/* Ghidra address: 00fa3b00 */
/* Ghidra symbol: FUN_00fa3b00 */


void FUN_00fa3b00(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x260))(*(longlong **)(param_1 + 0x7f8));
  if (iVar2 < 0xc) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4f0);
    (**(code **)(*plVar1 + 0x40))
              (plVar1,0,
               L"xx = P1A assigned as Capture/Compare input; P1B, P1C, P1D assigned as port pins");
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4f0);
    (**(code **)(*plVar1 + 0x40))(plVar1,1,0);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4f0);
    (**(code **)(*plVar1 + 0x40))(plVar1,2,0);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4f0);
    (**(code **)(*plVar1 + 0x40))(plVar1,3,0);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4f0);
    (**(code **)(*plVar1 + 0x40))
              (plVar1,0,L"Single output; P1A modulated; P1B, P1C, P1D assigned as port pins");
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4f0);
    (**(code **)(*plVar1 + 0x40))
              (plVar1,1,L"Full-Bridge output forward; P1D modulated; P1A active; P1B, P1C inactive")
    ;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4f0);
    (**(code **)(*plVar1 + 0x40))
              (plVar1,2,
               L"Half-Bridge output; P1A, P1B modulated with dead-band control; P1C, P1D assigned as port pins"
              );
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4f0);
    (**(code **)(*plVar1 + 0x40))
              (plVar1,3,L"Full-Bridge output reverse; P1B modulated; P1C active; P1A, P1D inactive")
    ;
  }
  return;
}

