/* Ghidra address: 01cc24b0 */
/* Ghidra symbol: FUN_01cc24b0 */


void FUN_01cc24b0(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  local_30 = 0;
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x4468) != 0) {
    iVar3 = *(int *)(param_1 + 0x4470);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        FUN_00419430(*(longlong *)(param_1 + 0x4468) + (longlong)iVar2 * 0x20,&DAT_01cb36e0);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00419430(param_1 + 0x4468,&DAT_01cb4bd8);
  }
  local_20 = (undefined8 *)(param_1 + 0x440);
  uVar1 = *local_20;
  *local_20 = 0;
  FUN_00410f20(uVar1);
  local_28 = (undefined8 *)(param_1 + 0x438);
  uVar1 = *local_28;
  *local_28 = 0;
  FUN_00410f20(uVar1);
  FUN_00416830(&local_30,param_1 + 0x22a,0x105);
  FUN_004412f0(local_30);
  FUN_00442c30(*(undefined8 *)(param_1 + 0x458));
  FUN_01d34780(param_1,param_2 & 0xfc);
  FUN_00414480(&local_30);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

