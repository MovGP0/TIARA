/* Ghidra address: 007096d0 */
/* Ghidra symbol: FUN_007096d0 */


void FUN_007096d0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_48 [20];
  undefined1 local_34 [12];
  
  if (*(longlong *)(param_2 + 0x10) == 1) {
    plVar2 = (longlong *)FUN_00777cd0();
    cVar1 = (**(code **)(*plVar2 + 0x90))(plVar2);
    if (cVar1 != '\0') {
      plVar2 = (longlong *)FUN_00777cd0();
      (**(code **)(*plVar2 + 0x1c0))(plVar2,local_34,0x2a);
      uVar3 = FUN_00777cd0();
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))(*(longlong **)(param_1 + 0x10),local_48)
      ;
      FUN_00778dc0(uVar3,*(undefined8 *)(param_2 + 8),local_34,local_48,0,0);
    }
  }
  *(undefined8 *)(param_2 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}

