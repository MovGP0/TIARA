/* Ghidra address: 01be8270 */
/* Ghidra symbol: FUN_01be8270 */


void FUN_01be8270(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  code *local_28;
  longlong local_20;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x668);
  *(undefined8 *)(param_1 + 0x668) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x698);
  *(undefined8 *)(param_1 + 0x698) = 0;
  FUN_00410f20(uVar1);
  local_28 = FUN_01be9750;
  local_20 = param_1;
  thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),0xb020,1,&local_28);
  FUN_01be16f0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

