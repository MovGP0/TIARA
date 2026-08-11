/* Ghidra address: 01cafee0 */
/* Ghidra symbol: FUN_01cafee0 */


void FUN_01cafee0(longlong *param_1,ulonglong param_2,undefined4 param_3,undefined2 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01cafd40(&DAT_01caf3c0,1,param_2 & 0xffffffff,param_3,param_4);
  (**(code **)(*param_1 + 0x50))(param_1,uVar1);
  if ((byte)param_3 < 6) {
    *(undefined1 *)((longlong)param_1 + (ulonglong)(byte)param_3 + 0x1f) = 1;
  }
  if ((byte)param_2 < 8) {
    *(undefined1 *)((longlong)param_1 + (param_2 & 0xff) + 0x25) = 1;
  }
  return;
}

