/* Ghidra address: 0176a200 */
/* Ghidra symbol: FUN_0176a200 */


undefined8 FUN_0176a200(longlong param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 local_19;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    FUN_00498350(param_2,0,0,0,0);
  }
  else {
    local_19 = 0;
    lVar1 = FUN_00c410e0(*(undefined8 *)(param_1 + 0x68),param_3 == '\0',param_4,&local_19);
    if (lVar1 == 0) {
      lVar1 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x38),0);
      FUN_00b95ba0(param_2,lVar1 + 0xc);
    }
    else {
      FUN_00b95ba0(param_2,lVar1 + 0xc);
    }
  }
  return param_2;
}

