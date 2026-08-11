/* Ghidra address: 007818b0 */
/* Ghidra symbol: FUN_007818b0 */


undefined4
FUN_007818b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  uVar1 = 0;
  if ((DAT_02012570 & 1) != 0) {
    if (DAT_02012560 == (undefined8 *)0x0) {
      FUN_0077ea90();
      lVar2 = FUN_007810c0();
      if (lVar2 != 0) {
        uVar1 = (**(code **)*DAT_02012560)((undefined8 *)*DAT_02012560,param_2,param_3,&local_38);
      }
    }
    else {
      uVar1 = (**(code **)*DAT_02012560)((undefined8 *)*DAT_02012560,param_2,param_3,&local_38);
    }
  }
  return uVar1;
}

