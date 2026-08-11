/* Ghidra address: 00649e00 */
/* Ghidra symbol: FUN_00649e00 */


longlong FUN_00649e00(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 == '\0') {
    uVar1 = FUN_00649db0(param_1);
    *param_2 = uVar1;
    lVar2 = FUN_00649ce0(*param_2,5,DAT_02012300,0,param_1);
  }
  else {
    lVar2 = FUN_00649a90(param_1,param_4);
    if (lVar2 != 0) {
      uVar1 = FUN_0065b870(lVar2);
      *param_2 = uVar1;
    }
  }
  return lVar2;
}

