/* Ghidra address: 013cc9a0 */
/* Ghidra symbol: FUN_013cc9a0 */


void FUN_013cc9a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x28))(*(longlong **)(param_1 + 0x8c0));
  if (0 < iVar1) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x28))();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x30))
                          (*(longlong **)(param_1 + 0x8c0),iVar3);
        *(undefined1 *)(lVar2 + 0x18) = 0;
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x90))(*(longlong **)(param_1 + 0x8c0));
    FUN_01cec4a0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0));
    FUN_01aceb90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),1);
  }
  FUN_00805990(param_1);
  return;
}

