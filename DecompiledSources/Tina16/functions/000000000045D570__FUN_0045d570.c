/* Ghidra address: 0045d570 */
/* Ghidra symbol: FUN_0045d570 */


undefined8
FUN_0045d570(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,ushort param_5)

{
  undefined8 uVar1;
  
  if (param_3 == 0x400) {
    uVar1 = thunk_FUN_041b6395(param_1,param_2,param_4,param_5);
    if (((int)uVar1 == -0x7ffdfffb) && ((param_5 & 0x2000) == 0x2000)) {
      uVar1 = 0x80020008;
    }
  }
  else {
    uVar1 = 0x80004001;
  }
  return uVar1;
}

