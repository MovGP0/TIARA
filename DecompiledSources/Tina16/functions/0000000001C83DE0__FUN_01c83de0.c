/* Ghidra address: 01c83de0 */
/* Ghidra symbol: FUN_01c83de0 */


void FUN_01c83de0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 unaff_RDI;
  
  FUN_007e2d20(*(undefined8 *)(param_1 + 0xca8),param_2);
  cVar3 = (char)param_2;
  FUN_007e2d20(*(undefined8 *)(param_1 + 0xca0),
               CONCAT71((int7)((ulonglong)unaff_RDI >> 8),cVar3 == '\0') & 0xffffffff);
  FUN_007e2da0(*(undefined8 *)(param_1 + 0xcc0),param_2);
  FUN_007e2da0(*(undefined8 *)(param_1 + 0xcc8),param_2);
  if (*(longlong *)(param_1 + 0x1b78) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb80) + 0x4f0);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(longlong *)(param_1 + 0x1b78));
    if (cVar3 == '\0') {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb80) + 0x4f0);
      iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      (**(code **)(*plVar1 + 0x98))(plVar1,iVar2 + -1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb80) + 0x4f0);
      iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      (**(code **)(*plVar1 + 0x98))(plVar1,iVar2 + -1);
    }
  }
  *(char *)(*(longlong *)(param_1 + 0x27a8) + 0x98) = cVar3;
  *PTR_DAT_02001e78 = cVar3;
  FUN_0199e510(*(undefined8 *)(param_1 + 0x27a8));
  FUN_01c74860(param_1);
  return;
}

