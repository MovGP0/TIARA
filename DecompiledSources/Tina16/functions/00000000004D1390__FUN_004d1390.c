/* Ghidra address: 004d1390 */
/* Ghidra symbol: FUN_004d1390 */


void FUN_004d1390(_FILETIME *param_1)

{
  BOOL BVar1;
  _FILETIME local_30;
  _FILETIME local_28;
  _FILETIME local_20 [2];
  
  BVar1 = GetSystemTimes(local_20,&local_30,&local_28);
  if (BVar1 != 0) {
    *param_1 = local_20[0];
    param_1[1] = local_28;
    param_1[2] = local_30;
    param_1[3].dwLowDateTime = 0;
    param_1[3].dwHighDateTime = 0;
  }
  return;
}

