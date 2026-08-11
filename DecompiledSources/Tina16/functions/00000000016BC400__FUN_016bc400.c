/* Ghidra address: 016bc400 */
/* Ghidra symbol: FUN_016bc400 */


undefined8 FUN_016bc400(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  while( true ) {
    bVar1 = *(byte *)(param_1 + 0x9a0);
    if (bVar1 < 0x80) {
      bVar2 = ((byte)(&DAT_016bc4bc)[(longlong)(ulonglong)bVar1 >> 3] >> ((ulonglong)bVar1 & 7) & 1)
              != 0;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) break;
    FUN_016b9e20(param_1,&local_18,0x7d,0x7b,0x7d);
    FUN_00414c70(&local_10,local_18);
  }
  FUN_00414bf0(param_2,local_10);
  FUN_00414590(&local_18,2);
  return param_2;
}

