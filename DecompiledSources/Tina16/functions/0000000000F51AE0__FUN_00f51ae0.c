/* Ghidra address: 00f51ae0 */
/* Ghidra symbol: FUN_00f51ae0 */


void FUN_00f51ae0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_01af2a70(*(undefined8 *)(param_1 + 0xf10),FUN_00f51ad0);
  lVar1 = *(longlong *)(param_1 + 0xf10);
  *(undefined8 *)(lVar1 + 0x18) = 0x4059000000000000;
  *(undefined8 *)(lVar1 + 0x30) = param_3;
  FUN_00414ad0(lVar1 + 0x28,local_res20);
  if (param_2 == '\x04') {
    FUN_01af29d0(*(undefined8 *)(param_1 + 0xf10),4);
  }
  else {
    FUN_01af29d0(*(undefined8 *)(param_1 + 0xf10),0);
  }
  if (*(char *)(param_1 + 0x5dc) == '\x02') {
    FUN_01af29b0(*(undefined8 *)(param_1 + 0xf10),2);
  }
  else {
    FUN_01af29b0(*(undefined8 *)(param_1 + 0xf10),3);
  }
  FUN_00414480(&local_res20);
  return;
}

