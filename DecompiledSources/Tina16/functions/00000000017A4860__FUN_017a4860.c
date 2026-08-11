/* Ghidra address: 017a4860 */
/* Ghidra symbol: FUN_017a4860 */


void FUN_017a4860(longlong param_1,undefined8 param_2,char *param_3)

{
  *param_3 = *(char *)(param_1 + 0x7b1) == '\0';
  if (*param_3 == '\0') {
    FUN_0072d440(L"Structure error!",1,4,0);
  }
  *(undefined1 *)(param_1 + 0x7b1) = 0;
  return;
}

