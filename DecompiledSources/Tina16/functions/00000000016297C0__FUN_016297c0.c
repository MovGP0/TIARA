/* Ghidra address: 016297c0 */
/* Ghidra symbol: FUN_016297c0 */


undefined4 FUN_016297c0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(char *)(param_1 + 0x51) == '\0') {
    uVar2 = *(undefined8 *)(param_3 + 0x78);
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 0x70);
  }
  FUN_01628cb0(local_20,*(undefined8 *)(param_1 + 0x58),param_4);
  uVar2 = FUN_01636d10(param_3,uVar2,local_20[0]);
  uVar1 = FUN_0161b200(uVar2);
  FUN_00414480(local_20);
  return uVar1;
}

