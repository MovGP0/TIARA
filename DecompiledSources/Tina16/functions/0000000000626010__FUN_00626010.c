/* Ghidra address: 00626010 */
/* Ghidra symbol: FUN_00626010 */


undefined4 FUN_00626010(undefined4 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong *local_res18 [2];
  longlong local_30 [2];
  
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  FUN_00419260(local_30,&DAT_00620f00,1,(longlong)(int)param_2[2]);
  iVar3 = 0;
  if (local_30[0] != 0) {
    iVar3 = (int)*(undefined8 *)(local_30[0] + -8);
  }
  uVar2 = iVar3 - 1;
  if (*(int *)((longlong)param_2 + 0x14) < 1) {
    iVar1 = 0;
    if (-1 < (int)uVar2) {
      do {
        FUN_00461840(local_30[0] + (longlong)(int)(uVar2 - iVar1) * 0x18,
                     *param_2 + (longlong)iVar1 * 0x18);
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    iVar1 = 0;
    if (uVar2 < 0x80000000) {
      do {
        FUN_00461840(local_30[0] + (longlong)*(int *)(param_2[1] + (longlong)iVar1 * 4) * 0x18,
                     *param_2 + (longlong)iVar1 * 0x18);
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  (**(code **)(*local_res18[0] + 0x18))(local_res18[0],param_1,local_30);
  FUN_00419430(local_30,&DAT_00620f00);
  FUN_00419430(local_30,&DAT_00620f00);
  FUN_0041b800(local_res18);
  return 0;
}

