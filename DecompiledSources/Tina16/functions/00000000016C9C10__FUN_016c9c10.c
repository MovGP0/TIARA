/* Ghidra address: 016c9c10 */
/* Ghidra symbol: FUN_016c9c10 */


void FUN_016c9c10(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x9ab) != '\0') {
    uVar3 = FUN_017105e0(0);
    FUN_01717780(uVar3,*(undefined8 *)(param_1 + 0x98),L"[TIReplMacro]",0);
    FUN_01710700(uVar3);
    FUN_00416cd0(local_20,3,*(undefined8 *)PTR_DAT_020049a0,L"\\spicelib\\",L"TINA_Subckts.lib");
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0xa48);
    iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_20[0]);
    if (iVar2 < 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0xa48);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_20[0]);
    }
  }
  FUN_00414480(local_20);
  return;
}

