/* Ghidra address: 014e17f0 */
/* Ghidra symbol: FUN_014e17f0 */


void FUN_014e17f0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_016a1760);
  if (cVar1 != '\0') {
    FUN_00416760(local_20,*(undefined1 *)(*(longlong *)(param_2 + 0x20) + 1));
    uVar2 = FUN_004170c0(local_20[0],L"01XZ",1);
    FUN_01d3aad0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8),*(undefined8 *)(param_2 + 0x18),
                 CONCAT71((int7)((ulonglong)uVar2 >> 8),(char)uVar2 + -1) & 0xffffffff);
  }
  FUN_00414480(local_20);
  return;
}

