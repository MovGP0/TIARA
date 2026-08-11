/* Ghidra address: 010d8e20 */
/* Ghidra symbol: FUN_010d8e20 */


void FUN_010d8e20(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar1 = *(char *)(param_1 + 0x9be);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0x970) = param_2;
  }
  else if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x978) = param_2;
  }
  else if (cVar1 == '\x02') {
    *(undefined8 *)(param_1 + 0x980) = param_2;
  }
  FUN_00e1dad0(param_1 + 0x970,param_1 + 0x978,param_1 + 0x980);
  FUN_00e1da10(*(undefined8 *)(param_1 + 0x970),*(undefined8 *)(param_1 + 0x978),
               *(undefined8 *)(param_1 + 0x980));
  uVar2 = *PTR_DAT_02005310;
  *PTR_DAT_02005310 = 3;
  cVar1 = *(char *)(param_1 + 0x9be);
  if (cVar1 == '\0') {
    FUN_00b90440(*(undefined8 *)(param_1 + 0x968),*(undefined8 *)(param_1 + 0x970));
  }
  else if (cVar1 == '\x01') {
    FUN_00b90440(*(undefined8 *)(param_1 + 0x968),*(undefined8 *)(param_1 + 0x978));
  }
  else if (cVar1 == '\x02') {
    FUN_00b90440(*(undefined8 *)(param_1 + 0x968),*(undefined8 *)(param_1 + 0x980));
  }
  *PTR_DAT_02005310 = uVar2;
  FUN_00414480(local_20);
  return;
}

