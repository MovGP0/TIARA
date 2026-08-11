/* Ghidra address: 017b2050 */
/* Ghidra symbol: FUN_017b2050 */


void FUN_017b2050(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00c5a450(*(undefined8 *)(param_2 + 0x6e8));
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x7e0);
  *(undefined4 *)(param_1 + 0x5b) = *(undefined4 *)(param_2 + 0x7e4);
  *(undefined4 *)(param_1 + 0x62) = *(undefined4 *)(param_2 + 0x7e4);
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (*(char *)(*(longlong *)(param_2 + 0x780) + 0x328) != '\0') {
    *(undefined1 *)(param_1 + 0x58) = 2;
  }
  if (*(char *)(*(longlong *)(param_2 + 0x788) + 0x328) != '\0') {
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  if (*(char *)(*(longlong *)(param_2 + 2000) + 0x328) != '\0') {
    *(undefined1 *)(param_1 + 0x58) = 3;
  }
  *(undefined1 *)(param_1 + 0x5f) = 0;
  if (*(char *)(*(longlong *)(param_2 + 0x7a8) + 0x328) != '\0') {
    *(undefined1 *)(param_1 + 0x5f) = 2;
  }
  if (*(char *)(*(longlong *)(param_2 + 0x7b0) + 0x328) != '\0') {
    *(undefined1 *)(param_1 + 0x5f) = 1;
  }
  if (*(char *)(*(longlong *)(param_2 + 0x7d8) + 0x328) != '\0') {
    *(undefined1 *)(param_1 + 0x5f) = 3;
  }
  return;
}

