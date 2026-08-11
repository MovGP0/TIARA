/* Ghidra address: 01780680 */
/* Ghidra symbol: FUN_01780680 */


void FUN_01780680(longlong param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 local_res10 [3];
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00416dc0(local_20,local_res10[0],1,2);
  if (local_20[0] == 0) {
    FUN_00414b50(local_20,&LAB_017807ac);
  }
  else {
    FUN_0177f180(local_20);
  }
  bVar2 = 0;
  do {
    FUN_004169a0(local_30,param_1 + 0x638 + (ulonglong)*(byte *)(param_1 + 0x621) * 0x45 +
                          (ulonglong)bVar2 * 3);
    iVar1 = FUN_00416db0(local_30[0],local_20[0]);
    if (iVar1 == 0) {
      *(byte *)(param_1 + 0x621) = bVar2;
      break;
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 != 0x17);
  FUN_0177fdb0(param_1,local_res10[0]);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return;
}

