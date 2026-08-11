/* Ghidra address: 01b24ed0 */
/* Ghidra symbol: FUN_01b24ed0 */


undefined1 FUN_01b24ed0(undefined8 param_1)

{
  char cVar1;
  undefined8 local_res8 [4];
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_48 [39];
  undefined1 local_21;
  longlong *local_20;
  
  local_70 = auStack_98;
  local_58 = 0;
  local_60 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_20 + 0x60))(local_20,local_res8[0]);
  local_21 = 0;
  cVar1 = FUN_01b22620(local_20,L"need support?",local_48,1);
  if (cVar1 == '\0') {
    cVar1 = FUN_01b22620(local_20,L"Wanna try it out",local_48,1);
    if (cVar1 == '\0') goto code_r0x01b24f6b;
  }
  local_21 = 1;
code_r0x01b24f6b:
  FUN_00410f20(local_20);
  FUN_00414560(&local_60,2);
  FUN_00414480(local_res8);
  return local_21;
}

