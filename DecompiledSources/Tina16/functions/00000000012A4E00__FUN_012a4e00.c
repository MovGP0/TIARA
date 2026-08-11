/* Ghidra address: 012a4e00 */
/* Ghidra symbol: FUN_012a4e00 */


undefined8 FUN_012a4e00(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x90))(*(longlong **)(param_1 + 0x80));
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x78))
            (*(longlong **)(param_1 + 0x80),L"Ext.-Func.Gen.");
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -2) {
    iVar2 = iVar2 + -1;
    do {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),local_30,iVar3)
      ;
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x78))
                (*(longlong **)(param_1 + 0x80),local_30[0]);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  FUN_00414480(local_30);
  return uVar1;
}

