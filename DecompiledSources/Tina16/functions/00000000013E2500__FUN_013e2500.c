/* Ghidra address: 013e2500 */
/* Ghidra symbol: FUN_013e2500 */


undefined8 FUN_013e2500(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) != 0) {
    lVar1 = FUN_01adfeb0(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798),param_1,0,0,0,0,
                         param_2);
    if (lVar1 == 0) {
      uVar2 = FUN_01adb8e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),param_1,param_2,
                           param_3,param_4);
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

