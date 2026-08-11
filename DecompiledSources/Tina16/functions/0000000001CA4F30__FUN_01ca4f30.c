/* Ghidra address: 01ca4f30 */
/* Ghidra symbol: FUN_01ca4f30 */


void FUN_01ca4f30(void)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28 [2];
  longlong local_18;
  
  local_30 = auStack_78;
  local_38 = 0;
  local_28[0] = 0;
  uVar1 = FUN_019a4600();
  local_58 = 0;
  local_50 = 0;
  local_18 = FUN_01a33340(&DAT_01a310f8,1,uVar1,0);
  FUN_01a33cd0(local_18,1);
  local_58 = 0;
  local_50 = 0;
  FUN_01a37700(local_18,0,0,0);
  local_48 = *(undefined8 *)(local_18 + 200);
  local_40 = 0x11;
  FUN_00442f70(&local_38,L"Finished: <%s>",&local_48,0);
  FUN_0072d440(local_38,2,4,0);
  if (local_18 != 0) {
    FUN_00410f20(local_18);
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_28);
  return;
}

