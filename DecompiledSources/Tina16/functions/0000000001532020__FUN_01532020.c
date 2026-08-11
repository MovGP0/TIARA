/* Ghidra address: 01532020 */
/* Ghidra symbol: FUN_01532020 */


void FUN_01532020(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x958);
  if (*(char *)(lVar1 + 0x5e0) != '\0') {
    iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x968),L"noname.cir");
    if (iVar3 == 0) {
      FUN_015320c0(param_1,param_2);
    }
    else {
      plVar2 = *(longlong **)(lVar1 + 0x4e8);
      (**(code **)(*plVar2 + 0x100))(plVar2,*(undefined8 *)(param_1 + 0x968));
      FUN_00c0dad0(*(undefined8 *)(param_1 + 0x958),0);
    }
  }
  return;
}

