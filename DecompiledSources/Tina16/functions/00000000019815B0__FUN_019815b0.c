/* Ghidra address: 019815b0 */
/* Ghidra symbol: FUN_019815b0 */


undefined8 FUN_019815b0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  bool bVar2;
  
  if (param_3 != 0) {
    uVar1 = FUN_01981610(param_1,param_4);
    if ((byte)uVar1 < 8) {
      bVar2 = ((byte)((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << ((byte)uVar1 & 0x1f)) &
              *(byte *)(param_3 + 0x19)) != 0;
    }
    else {
      bVar2 = false;
    }
    if ((bVar2) || ((char)param_4 == '\0')) {
      FUN_00414ad0(param_2,*(undefined8 *)(param_3 + 8));
      return param_2;
    }
  }
  FUN_00414480(param_2);
  return param_2;
}

