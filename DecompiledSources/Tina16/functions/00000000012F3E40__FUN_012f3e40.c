/* Ghidra address: 012f3e40 */
/* Ghidra symbol: FUN_012f3e40 */


void FUN_012f3e40(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_012e9098,1,*(undefined8 *)PTR_DAT_02004030);
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    (**(code **)(**(longlong **)(param_1 + 0xa98) + 0x28))
              (*(longlong **)(param_1 + 0xa98),L"ModelTest Settings",L"Opt_Timeout",
               (int)plVar2[0xde]);
    *(int *)(param_1 + 0xac4) = (int)plVar2[0xde];
    (**(code **)(**(longlong **)(param_1 + 0xa98) + 0x28))
              (*(longlong **)(param_1 + 0xa98),L"ModelTest Settings",L"Opt_CopyRefResults",
               *(undefined4 *)((longlong)plVar2 + 0x6ec));
  }
  return;
}

