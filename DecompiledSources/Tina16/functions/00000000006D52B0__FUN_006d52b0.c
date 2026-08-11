/* Ghidra address: 006d52b0 */
/* Ghidra symbol: FUN_006d52b0 */


bool FUN_006d52b0(longlong param_1,char param_2)

{
  bool bVar1;
  undefined8 local_10;
  
  local_10 = 0;
  bVar1 = *(char *)(param_1 + 0x4b0) != param_2;
  if (bVar1) {
    if ((param_2 == '\0') &&
       ((*(char *)(param_1 + 0x4c2) == '\x02' || (*(char *)(param_1 + 0x4c2) == '\x03')))) {
      FUN_0041ddd0(&local_10,PTR_PTR_02004b58);
      FUN_006d42b0(local_10);
    }
    *(char *)(param_1 + 0x4b0) = param_2;
    if (param_2 == '\0') {
      *(undefined1 *)(param_1 + 0x4c0) = 0;
    }
  }
  FUN_00414480(&local_10);
  return bVar1;
}

