/* Ghidra address: 016ec0f0 */
/* Ghidra symbol: FUN_016ec0f0 */


void FUN_016ec0f0(longlong param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 == 0) || (*(byte *)(param_1 + 4) < param_2)) {
    FUN_01b04d70(0x215,&LAB_016ec1b0,0);
  }
  else {
    lVar2 = FUN_016e8fd0(0x1e);
    **(undefined8 **)(lVar2 + 0x40) = param_3;
    **(undefined1 **)(lVar2 + 0x50) = 1;
    *(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 8) = param_4;
    *(undefined1 *)(*(longlong *)(lVar2 + 0x50) + 1) = 1;
    lVar1 = *(longlong *)(param_1 + 0x40);
    *(longlong *)(lVar1 + -8 + (ulonglong)param_2 * 8) = lVar2;
    if (**(char **)(lVar2 + 0x50) == '\0') {
      FUN_01b04d70(CONCAT62((int6)((ulonglong)lVar1 >> 0x10),0x215),&LAB_016ec1b0,0);
    }
    if (*(char *)(*(longlong *)(lVar2 + 0x50) + 1) == '\0') {
      FUN_01b04d70(0x215,&LAB_016ec1b0,0);
    }
    *(undefined1 *)(lVar2 + 0x39) = 1;
  }
  return;
}

