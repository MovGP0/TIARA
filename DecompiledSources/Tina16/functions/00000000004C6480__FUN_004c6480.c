/* Ghidra address: 004c6480 */
/* Ghidra symbol: FUN_004c6480 */


ulonglong FUN_004c6480(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  local_20 = FUN_0058ada0(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8));
  if (local_20 == 0) {
    cVar1 = FUN_004c6420(auStack_48);
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_004c6518;
    }
  }
  cVar1 = FUN_004113d0(local_20,&LAB_00474bd8);
  if (cVar1 != '\0') {
    cVar1 = FUN_004113d0(local_20,&PTR_FUN_00486f38);
    if ((cVar1 == '\0') || ((*(byte *)(local_20 + 0x58) & 4) != 0)) {
      uVar2 = 0;
    }
    else {
      cVar1 = FUN_004c6420(auStack_48);
      if ((cVar1 == '\0') && (*(longlong *)(local_20 + 0x10) != 0)) {
        uVar2 = 0;
      }
    }
  }
LAB_004c6518:
  return uVar2 & 0xffffffff;
}

