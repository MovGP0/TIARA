/* Ghidra address: 004b56a0 */
/* Ghidra symbol: FUN_004b56a0 */


void FUN_004b56a0(longlong *param_1,byte param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong local_20;
  
  local_20 = 0;
  FUN_00411a80(param_1,param_2);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if ((char)param_1[0xe] != '\0') {
    FUN_00419260(&local_20,&DAT_0048cb50,1,(longlong)(int)param_1[8]);
    iVar2 = (int)param_1[8];
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      do {
        *(undefined8 *)(local_20 + (longlong)iVar3 * 8) =
             *(undefined8 *)(param_1[7] + 8 + (longlong)iVar3 * 0x10);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_004b29c0(param_1,param_2 & 0xfc);
  *(undefined4 *)(param_1 + 8) = 0;
  (**(code **)(*param_1 + 0x50))(param_1,0);
  lVar1 = 0;
  if (local_20 != 0) {
    lVar1 = *(longlong *)(local_20 + -8);
  }
  if (0 < lVar1) {
    iVar2 = 0;
    if (local_20 != 0) {
      iVar2 = (int)*(undefined8 *)(local_20 + -8);
    }
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_00410f20(*(undefined8 *)(local_20 + (longlong)iVar3 * 8));
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00419430(&local_20,&DAT_0048cb50);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

