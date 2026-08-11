/* Ghidra address: 01409a10 */
/* Ghidra symbol: FUN_01409a10 */


void FUN_01409a10(longlong param_1)

{
  ushort *puVar1;
  undefined8 uVar2;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_01d3e870(param_1 + 0x740);
  (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x128))(*(longlong **)(param_1 + 0x6d8),1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d8),1);
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),1);
  FUN_00414ad0(*(longlong *)(param_1 + 0x6e8) + 0xe0,L"Text file (*.txt)|*.txt");
  FUN_00414ad0(*(longlong *)(param_1 + 0x6f0) + 0xe0,L"Text file (*.txt)|*.txt");
  FUN_00414ad0(*(longlong *)(param_1 + 0x6e8) + 0x100,&DAT_01409c90);
  FUN_00414ad0(*(longlong *)(param_1 + 0x6f0) + 0x100,&DAT_01409c90);
  if (*(char *)(param_1 + 0x711) == '\0') {
    *(undefined4 *)(param_1 + 0x738) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x738) = 1;
    FUN_0041ddd0(&local_20,&PTR_PTR_01409800);
    FUN_0064de00(param_1,local_20);
  }
  if (*(int *)(param_1 + 0x700) < 0) {
    *(undefined8 *)(param_1 + 0x708) = *(undefined8 *)(param_1 + 0x748);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x2d0))
              (*(longlong **)(param_1 + 0x6f8),*(int *)(param_1 + 0x700),param_1 + 0x708);
  }
  puVar1 = *(ushort **)(param_1 + 0x708);
  *(ushort *)(param_1 + 0x718) = *puVar1;
  *(ushort *)(param_1 + 0x71a) = puVar1[1];
  uVar2 = FUN_004095c0((uint)*(ushort *)(param_1 + 0x718) * 2);
  *(undefined8 *)(param_1 + 0x720) = uVar2;
  FUN_00409a70(*(undefined8 *)(puVar1 + 4),*(undefined8 *)(param_1 + 0x720),(uint)*puVar1 * 2);
  FUN_00b0b020(*(undefined8 *)(param_1 + 0x6d0),0);
  FUN_01409ca0(param_1);
  FUN_0064cf60(param_1,0x4a6);
  FUN_00414480(&local_20);
  return;
}

