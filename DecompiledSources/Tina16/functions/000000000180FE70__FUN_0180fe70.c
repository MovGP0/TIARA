/* Ghidra address: 0180fe70 */
/* Ghidra symbol: FUN_0180fe70 */


undefined8 FUN_0180fe70(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*PTR_DAT_02001218 == '\0') {
    FUN_0080dcf0(*(undefined8 *)PTR_DAT_02004030,param_1);
  }
  else {
    FUN_004169f0(local_20,0x104);
    uVar2 = FUN_00416740(local_20[0]);
    uVar1 = thunk_FUN_041b94f3(PTR_IMAGE_DOS_HEADER_0200c280,uVar2,0x104);
    FUN_004169f0(local_20,uVar1);
    FUN_00414ad0(param_1,local_20[0]);
  }
  FUN_00414480(local_20);
  return param_1;
}

