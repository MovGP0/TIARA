/* Ghidra address: 00624ce0 */
/* Ghidra symbol: FUN_00624ce0 */


void FUN_00624ce0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  local_18 = (longlong *)0x0;
  *param_4 = 0;
  uVar1 = FUN_0041b800(&local_10);
  uVar2 = (**(code **)*param_1)(param_1,&LAB_00624db8,uVar1);
  if ((uVar2 & 0x80000000) == 0) {
    uVar1 = FUN_0041b800(&local_18);
    uVar2 = (**(code **)(*local_10 + 0x20))(local_10,param_2,uVar1);
    if ((uVar2 & 0x80000000) == 0) {
      (**(code **)(*local_18 + 0x28))(local_18,param_3,param_4);
    }
  }
  FUN_0041b800(&local_18);
  FUN_0041b800(&local_10);
  return;
}

