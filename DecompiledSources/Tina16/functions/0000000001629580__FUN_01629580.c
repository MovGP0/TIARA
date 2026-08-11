/* Ghidra address: 01629580 */
/* Ghidra symbol: FUN_01629580 */


undefined8 FUN_01629580(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(char *)(param_1 + 0x51) == '\0') {
    uVar1 = *(undefined8 *)(param_2 + 0x78);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x70);
  }
  FUN_01628cb0(local_20,*(undefined8 *)(param_1 + 0x58),param_3);
  uVar1 = FUN_01636d10(param_2,uVar1,local_20[0]);
  *param_4 = uVar1;
  uVar1 = FUN_0161b260(*param_4);
  FUN_00414480(local_20);
  return uVar1;
}

