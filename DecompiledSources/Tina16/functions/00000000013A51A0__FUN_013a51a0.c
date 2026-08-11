/* Ghidra address: 013a51a0 */
/* Ghidra symbol: FUN_013a51a0 */


void FUN_013a51a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00416cd0(&local_10,3,L"[PassCommandLine(",*param_2,&LAB_013a5284);
  FUN_013a40d0(param_1,&local_10);
  if (*(char *)(*(longlong *)PTR_DAT_02004e40 + 0x4d2) == '\x01') {
    FUN_00800700(*(undefined8 *)PTR_DAT_02004e40,0);
  }
  FUN_00414480(&local_10);
  return;
}

