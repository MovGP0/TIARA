/* Ghidra address: 01cf0a40 */
/* Ghidra symbol: FUN_01cf0a40 */


void FUN_01cf0a40(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if ((char)lVar1 != '\0') {
    (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  }
  (**(code **)(*param_1 + 0x150))(param_1,param_2,param_3,param_4);
  if ((char)lVar1 != '\0') {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  }
  if (((char)param_1[1] == '\0') && (*PTR_DAT_02001158 == '\0')) {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  }
  *PTR_DAT_02001158 = 0;
  return;
}

