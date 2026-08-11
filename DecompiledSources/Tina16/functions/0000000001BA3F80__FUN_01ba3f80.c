/* Ghidra address: 01ba3f80 */
/* Ghidra symbol: FUN_01ba3f80 */


void FUN_01ba3f80(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar2 = FUN_01ba1490(&DAT_01ba0708,1,*(undefined8 *)(param_1 + 0x750),
                       *(undefined8 *)(param_1 + 0x748),*(undefined8 *)(param_1 + 0x740),0);
  *(undefined8 *)(param_1 + 0x710) = uVar2;
  uVar3 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x6c0) + 0x318));
  cVar1 = FUN_01ba2680(uVar2,uVar3,&local_1c,&local_20);
  if (cVar1 == '\0') {
    FUN_0072d440(*(undefined8 *)(*(longlong *)(param_1 + 0x710) + 0x980),1,4,0);
  }
  else {
    uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined8 *)(param_1 + 0x720) = uVar2;
    uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined8 *)(param_1 + 0x718) = uVar2;
    FUN_004144d0(param_1 + 0x728);
    *(undefined4 *)(param_1 + 0x730) = 0;
    *(undefined1 *)(param_1 + 0x738) = 0;
    FUN_00414ad0(*(longlong *)(param_1 + 0x700) + 0xe0,L"Text file (txt)|*.txt");
    FUN_00414ad0(*(longlong *)(param_1 + 0x700) + 0x100,&DAT_01ba4168);
    FUN_00414ad0(*(longlong *)(param_1 + 0x708) + 0xe0,L"Text file (txt)|*.txt");
    FUN_00414ad0(*(longlong *)(param_1 + 0x708) + 0x100,&DAT_01ba4168);
    plVar4 = (longlong *)FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x6c0) + 0x318));
    (**(code **)(*plVar4 + 0x88))(plVar4,local_1c);
    plVar4 = (longlong *)FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x6c0) + 0x318));
    (**(code **)(*plVar4 + 0x70))(plVar4,local_20);
    FUN_01ba4180(param_1);
    FUN_01ba2960(*(undefined8 *)(param_1 + 0x710));
  }
  return;
}

