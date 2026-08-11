/* Ghidra address: 0195ac20 */
/* Ghidra symbol: FUN_0195ac20 */


void FUN_0195ac20(longlong param_1)

{
  longlong lVar1;
  undefined1 local_28 [16];
  
  if (*(char *)(param_1 + 0x298) == '\0') {
    FUN_0195a020(*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x288),
                 *(undefined4 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x24c),
                 *(undefined4 *)(param_1 + 0x250),*(undefined4 *)(param_1 + 0x254),
                 *(undefined8 *)(param_1 + 0x268),*(undefined8 *)(param_1 + 0x270));
  }
  lVar1 = *(longlong *)(param_1 + 0x140);
  if (lVar1 != 0) {
    FUN_00498350(local_28,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x24c),
                 *(undefined4 *)(param_1 + 0x250),*(undefined4 *)(param_1 + 0x254));
    FUN_0197deb0(lVar1,*(undefined8 *)(param_1 + 0x288),local_28);
  }
  return;
}

