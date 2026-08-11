/* Ghidra address: 014b7750 */
/* Ghidra symbol: FUN_014b7750 */


void FUN_014b7750(longlong param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_014b7550(param_1);
  uVar2 = FUN_019a4600();
  iVar1 = FUN_019a9ed0(uVar2,PTR_DAT_02003e38,*PTR_DAT_02004638,*PTR_DAT_020044c8,0,
                       *(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x4a0),0,param_2);
  FUN_00801e40(param_1,*(undefined8 *)(param_1 + 0x6b8));
  if (99 < iVar1) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),1);
    FUN_0064cc50(*(longlong *)(param_1 + 0x6b8),
                 (*(int *)(*(longlong *)(param_1 + 0x6e0) + 0x94) -
                 *(int *)(*(longlong *)(param_1 + 0x6b8) + 0x94)) + -6);
  }
  return;
}

