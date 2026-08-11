/* Ghidra address: 019813d0 */
/* Ghidra symbol: FUN_019813d0 */


undefined8 * FUN_019813d0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_00414480(param_2);
  if ((*(byte *)(param_1 + 0x19) & 2) != 0) {
    iVar1 = FUN_00416db0(*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_1 + 8));
    if (iVar1 != 0) {
      FUN_01802f80(&local_10,*(undefined8 *)(param_1 + 8));
      FUN_0043f750(&local_18,*(undefined1 *)(param_1 + 0x19));
      FUN_00416cd0(param_2,0xb,*param_2,&DAT_0198154c,param_3,L".Link=\"",local_10,&DAT_01981578,
                   &DAT_0198154c,param_3,L".LoadingType=\"",local_18,&DAT_01981578);
    }
  }
  FUN_00414560(&local_18,2);
  return param_2;
}

