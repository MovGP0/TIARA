/* Ghidra address: 01899ca0 */
/* Ghidra symbol: FUN_01899ca0 */


void FUN_01899ca0(longlong *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  
  FUN_00650ea0(param_1,param_2,param_3,param_4,param_5);
  lVar1 = FUN_01899bf0(param_1);
  if (((char)param_1[100] != '\x01') && ((char)param_1[100] != '\x02')) {
    *(undefined1 *)((longlong)param_1 + 0x319) = 0;
  }
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x4c8) != 0)) {
    (**(code **)(lVar1 + 0x4c8))(*(undefined8 *)(lVar1 + 0x4d0),param_1);
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

