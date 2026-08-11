/* Ghidra address: 01504270 */
/* Ghidra symbol: FUN_01504270 */


void FUN_01504270(longlong *param_1,undefined1 *param_2,char param_3)

{
  int iVar1;
  double dVar2;
  int local_38;
  int local_34;
  undefined8 local_30 [2];
  
  *(undefined1 *)(param_1 + 0x11) = 1;
  *param_2 = 1;
  if ((char)param_1[0xf] != '\0') {
    FUN_015040f0(param_1,local_30);
    FUN_00e1c130(local_30[0]);
    *(undefined1 *)(param_1 + 0xf) = 0;
    param_1[0x12] = 0;
  }
  FUN_00e1c6c0(&local_38);
  iVar1 = (**(code **)(*param_1 + 0x78))(param_1);
  if (iVar1 == 0) {
    FUN_00e1c9d0(param_2);
    FUN_00e1ca40(&local_34);
    dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1);
    param_1[0x12] = (longlong)((double)local_34 * dVar2);
  }
  else {
    FUN_00e1c960(param_2);
    FUN_00e1ca40(&local_34);
    if (param_3 != '\0') {
      while ((local_34 < local_38 + -1 && ((char)param_1[0x11] != '\0'))) {
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        FUN_00e1ca40(&local_34);
      }
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1);
    param_1[0x12] = (longlong)((double)local_34 * dVar2);
  }
  return;
}

