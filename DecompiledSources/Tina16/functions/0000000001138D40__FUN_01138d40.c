/* Ghidra address: 01138d40 */
/* Ghidra symbol: FUN_01138d40 */


void FUN_01138d40(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined1 *param_8)

{
  *param_2 = *(undefined8 *)(param_1 + 0xa28);
  *param_3 = *(undefined8 *)(param_1 + 0xa48);
  *param_4 = *(undefined8 *)(param_1 + 0xa50);
  *param_5 = *(undefined4 *)(param_1 + 0xa58);
  *(bool *)param_6 = *(char *)(*(longlong *)(param_1 + 0xa00) + 0x328) == '\0';
  *(bool *)param_7 = *(char *)(*(longlong *)(param_1 + 0x998) + 0x328) == '\0';
  *param_8 = *(undefined1 *)(*(longlong *)(param_1 + 0x990) + 0x328);
  return;
}

