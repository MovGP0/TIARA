/* Ghidra address: 00acedf0 */
/* Ghidra symbol: FUN_00acedf0 */


void FUN_00acedf0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00a99e30(param_1,param_1);
  cVar1 = *(char *)(param_1 + 0x150);
  if (cVar1 == '\x01') {
    FUN_00a98ac0(*(undefined8 *)(param_1 + 0xf8));
  }
  else if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 200) == 0) {
      FUN_00a98c40(*(undefined8 *)(param_1 + 0xf8),0);
    }
    else {
      FUN_00414b50(local_20,*(undefined8 *)(param_1 + 200));
      FUN_00416cd0(local_30,3,local_20[0],&LAB_00acef94,*(undefined8 *)(param_1 + 0xe0));
      FUN_00a98c40(*(undefined8 *)(param_1 + 0xf8),local_30[0]);
    }
  }
  else if (((cVar1 == '\x03') && (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x158) != 0)) &&
          (*(longlong *)(param_1 + 0x158) != 0)) {
    FUN_00ace050(*(undefined8 *)(param_1 + 0x158),local_20);
    lVar2 = *(longlong *)(param_1 + 0x18);
    (**(code **)(lVar2 + 0x158))
              (*(undefined8 *)(lVar2 + 0x160),*(undefined8 *)(lVar2 + 0xb8),
               *(undefined8 *)(param_1 + 0x158),local_20);
    FUN_00ace150(*(undefined8 *)(param_1 + 0x158),local_20[0]);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

