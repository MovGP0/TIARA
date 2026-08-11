/* Ghidra address: 00f518b0 */
/* Ghidra symbol: FUN_00f518b0 */


void FUN_00f518b0(longlong param_1,byte param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if ((param_2 & *(byte *)(param_1 + 0x325)) == 0) {
    FUN_017d9ab0(*(undefined8 *)(param_1 + 0xd8),0);
    FUN_017dcfd0(*(undefined8 *)(param_1 + 0xd8),0,1);
    if (*(char *)(param_1 + 0x325) == '\0') {
      FUN_016f6940(param_1,1);
      FUN_016f5430(param_1,1,0);
    }
    else {
      FUN_016f6430(param_1,1,0);
      FUN_016f3620(param_1,0,1);
    }
    FUN_017d9ab0(*(undefined8 *)(param_1 + 0xd8),0);
    if (*(char *)(param_1 + 0x324) != '\0') {
      if (param_3 == '\0') {
        uVar1 = FUN_01b04b70(&PTR_FUN_01af3038,1,param_1);
        FUN_004134c0(uVar1);
      }
      else {
        FUN_00de8980(&local_10,0x10a,*(undefined8 *)(param_1 + 0x1310));
        FUN_01b05000(local_10,0);
      }
    }
  }
  FUN_00414480(&local_10);
  return;
}

