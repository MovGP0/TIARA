/* Ghidra address: 00b064b0 */
/* Ghidra symbol: FUN_00b064b0 */


void FUN_00b064b0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  *(undefined8 *)(param_1 + 0x508) = *param_2;
  *(undefined8 *)(param_1 + 0x510) = param_2[1];
  *(undefined8 *)(param_1 + 0x518) = param_2[2];
  *(undefined8 *)(param_1 + 0x520) = param_2[3];
  FUN_00414480(param_1 + 0x528);
  iVar1 = 0x20;
  do {
    if ((*(byte *)(param_1 + 0x508 + ((longlong)(ulonglong)(byte)iVar1 >> 3)) >>
         ((ulonglong)(byte)iVar1 & 7) & 1) != 0) {
      FUN_00416760(local_30,iVar1);
      FUN_00416cd0(param_1 + 0x528,3,*(undefined8 *)(param_1 + 0x528),&LAB_00b06594,local_30[0]);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x80);
  FUN_00414480(local_30);
  return;
}

