/* Ghidra address: 00624dd0 */
/* Ghidra symbol: FUN_00624dd0 */


void FUN_00624dd0(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  local_18 = (longlong *)0x0;
  if (*param_3 != 0) {
    uVar1 = FUN_0041b800(&local_10);
    uVar2 = (**(code **)*param_1)(param_1,&LAB_00624eb8,uVar1);
    if ((uVar2 & 0x80000000) == 0) {
      uVar1 = FUN_0041b800(&local_18);
      uVar2 = (**(code **)(*local_10 + 0x20))(local_10,param_2,uVar1);
      if ((uVar2 & 0x80000000) == 0) {
        uVar2 = (**(code **)(*local_18 + 0x30))(local_18,*param_3);
        if ((uVar2 & 0x80000000) == 0) {
          *param_3 = 0;
        }
      }
    }
  }
  FUN_0041b800(&local_18);
  FUN_0041b800(&local_10);
  return;
}

