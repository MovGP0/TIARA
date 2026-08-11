/* Ghidra address: 00c1c000 */
/* Ghidra symbol: FUN_00c1c000 */


void FUN_00c1c000(longlong param_1,uint param_2,uint param_3,uint param_4,undefined1 *param_5,
                 undefined1 *param_6,undefined1 *param_7)

{
  undefined1 *puVar1;
  byte bVar2;
  
  bVar2 = thunk_FUN_03c6d07a(*(undefined8 *)(param_1 + 0x18),
                             param_2 & 0xff | (param_3 & 0xff) << 8 | (param_4 & 0xff) << 0x10);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar1 = (undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)bVar2 * 4);
    *param_5 = *puVar1;
    *param_6 = puVar1[1];
    *param_7 = puVar1[2];
  }
  return;
}

