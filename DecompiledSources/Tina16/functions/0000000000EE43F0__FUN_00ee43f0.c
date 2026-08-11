/* Ghidra address: 00ee43f0 */
/* Ghidra symbol: FUN_00ee43f0 */


void FUN_00ee43f0(longlong param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x9ab) != '\0') {
    pwVar2 = L"TINA_Subckts_Funcs.lib";
    FUN_00416cd0(&local_10,3,*(undefined8 *)PTR_DAT_020049a0,L"\\Spicelib\\",
                 L"TINA_Subckts_Funcs.lib");
    FUN_016bb4f0(*(undefined8 *)(param_1 + 0x1e0),local_10,0);
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x10) + 0x244) = 0;
    FUN_004144d0(*(longlong *)(param_1 + 0x1e0) + 0xd88);
    FUN_004144d0(*(longlong *)(param_1 + 0x1e0) + 0xd80);
    while( true ) {
      FUN_016b8f10(&local_18,*(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + 0xd80));
      iVar1 = FUN_00415a60(local_18,&DAT_00ee45f4);
      if (iVar1 == 0) break;
      pwVar2 = (wchar_t *)((ulonglong)pwVar2 & 0xffffffffffffff00);
      FUN_00ee2730(*(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + 8),
                   *(undefined8 *)(param_1 + 0x238),*(undefined8 *)(param_1 + 0x228),
                   *(undefined8 *)(param_1 + 0x230),pwVar2,0,0,0,1,0);
    }
  }
  FUN_004144d0(&local_18);
  FUN_00414480(&local_10);
  return;
}

