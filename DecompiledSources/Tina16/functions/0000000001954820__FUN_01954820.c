/* Ghidra address: 01954820 */
/* Ghidra symbol: FUN_01954820 */


void FUN_01954820(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,char param_7,undefined4 param_8)

{
  char cVar1;
  
  *(char *)(param_1 + 0x2a) = param_7;
  (**(code **)(*param_1 + 0x260))(param_1,param_2,param_3,param_4,param_5,param_6);
  *(undefined1 *)(param_1 + 0x2a) = 0;
  if (param_7 == '\0') {
    cVar1 = FUN_01953ba0(param_1);
    if (cVar1 != '\0') {
      return;
    }
    cVar1 = FUN_01950830(param_1);
    if (cVar1 == '\0') {
      return;
    }
  }
  (**(code **)(*param_1 + 0x270))(param_1,param_2,param_3,param_4,param_5,param_6,param_8);
  return;
}

