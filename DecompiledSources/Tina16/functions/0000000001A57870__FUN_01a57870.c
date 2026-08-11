/* Ghidra address: 01a57870 */
/* Ghidra symbol: FUN_01a57870 */


void FUN_01a57870(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  FUN_00416cd0(param_2 + 0x108,3,*(undefined8 *)(*(longlong *)(param_2 + 0x130) + 0x2ba0),
               &DAT_01a57a6c,L"ls_cmd_inp.json");
  cVar1 = FUN_00440a20(*(undefined8 *)(param_2 + 0x108),1);
  if (cVar1 != '\0') {
    FUN_004412f0(*(undefined8 *)(param_2 + 0x108));
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0x100));
  FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x130) + 0x7f8));
  return;
}

