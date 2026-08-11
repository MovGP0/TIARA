/* Ghidra address: 00826740 */
/* Ghidra symbol: FUN_00826740 */


undefined8 FUN_00826740(byte param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar2 = (ulonglong)param_1;
  if ((&DAT_020126d8)[uVar2] == 0) {
    uVar1 = FUN_00608c80(&PTR_FUN_005f92e8,1);
    (&DAT_020126d8)[uVar2] = uVar1;
    FUN_004167d0(local_20,*(undefined8 *)(&DAT_01e17768 + uVar2 * 8));
    FUN_0060a8f0((&DAT_020126d8)[uVar2],PTR_IMAGE_DOS_HEADER_0200c280,local_20[0]);
  }
  uVar1 = (&DAT_020126d8)[uVar2];
  FUN_00414480(local_20);
  return uVar1;
}

