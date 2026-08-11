/* Ghidra address: 014fb6f0 */
/* Ghidra symbol: FUN_014fb6f0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_014fb6f0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  
  _DAT_0210ec00 = param_1;
  FUN_01aa2200(L"--------------------------------------");
  FUN_01aa2250(L"act_control_relay is running");
  if ((*(char *)(param_1 + 0x568) == *(char *)(param_1 + 0x588)) &&
     (*(char *)(param_1 + 0x569) == *(char *)(param_1 + 0x589))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    *(char *)(param_1 + 0x568) = *(char *)(param_1 + 0x588);
    *(undefined1 *)(param_1 + 0x569) = *(undefined1 *)(param_1 + 0x589);
    FUN_014fb670(param_1,param_2);
  }
  FUN_01aa2250(L"act_control_relay end.");
  FUN_01aa2250(L"--------------------------------------");
  FUN_01aa2250(0);
  return 0;
}

