/* Ghidra address: 01703240 */
/* Ghidra symbol: FUN_01703240 */


void FUN_01703240(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708));
  if (cVar1 == '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),0);
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x128))(*(longlong **)(param_1 + 0x6f8),1);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x128))
                      (*(longlong **)(param_1 + 0x700),1);
  }
  else {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),L"<Auto>");
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x128))(*(longlong **)(param_1 + 0x6f8),0);
    (**(code **)(**(longlong **)(param_1 + 0x700) + 0x128))(*(longlong **)(param_1 + 0x700),0);
    uVar2 = FUN_00414480(param_1 + 0x770);
  }
  if (*(byte *)(param_1 + 0x758) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (*(byte *)(param_1 + 0x758) & 0x1f) &
            0x1cU) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x128))(*(longlong **)(param_1 + 0x708),0);
  }
  FUN_01703530(param_1);
  return;
}

